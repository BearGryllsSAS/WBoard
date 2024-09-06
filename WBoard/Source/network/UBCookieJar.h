#ifndef UBCOOKIEJAR_H
#define UBCOOKIEJAR_H

#include <QtNetwork/QNetworkCookieJar>

#include <QtGui>

class UBAutoSaver;

class UBCookieJar : public QNetworkCookieJar
{
    friend class UBCookieModel;
    Q_OBJECT
    Q_PROPERTY(AcceptPolicy acceptPolicy READ acceptPolicy WRITE setAcceptPolicy)
    Q_PROPERTY(KeepPolicy keepPolicy READ keepPolicy WRITE setKeepPolicy)
    Q_PROPERTY(QStringList blockedCookies READ blockedCookies WRITE setBlockedCookies)
    Q_PROPERTY(QStringList allowedCookies READ allowedCookies WRITE setAllowedCookies)
    Q_PROPERTY(QStringList allowForSessionCookies READ allowForSessionCookies WRITE setAllowForSessionCookies)
    Q_ENUMS(KeepPolicy)
    Q_ENUMS(AcceptPolicy)

    signals:
        void cookiesChanged();

    public:
        enum AcceptPolicy {
            AcceptAlways,
            AcceptNever,
            AcceptOnlyFromSitesNavigatedTo
        };

        enum KeepPolicy {
            KeepUntilExpire,
            KeepUntilExit,
            KeepUntilTimeLimit
        };

        UBCookieJar(QObject *parent = 0);
        ~UBCookieJar();

        QList<QNetworkCookie> cookiesForUrl(const QUrl &url) const;
        bool setCookiesFromUrl(const QList<QNetworkCookie> &cookieList, const QUrl &url);

        AcceptPolicy acceptPolicy() const;
        void setAcceptPolicy(AcceptPolicy policy);

        KeepPolicy keepPolicy() const;
        void setKeepPolicy(KeepPolicy policy);

        QStringList blockedCookies() const;
        QStringList allowedCookies() const;
        QStringList allowForSessionCookies() const;

        void setBlockedCookies(const QStringList &list);
        void setAllowedCookies(const QStringList &list);
        void setAllowForSessionCookies(const QStringList &list);

    public slots:
        void clear();
        void loadSettings();

    private slots:
        void save();

    private:
        void purgeOldCookies();
        void load();
        bool mLoaded;
        UBAutoSaver *mSaveTimer;

        AcceptPolicy mAcceptCookies;
        KeepPolicy mKeepCookies;

        QStringList mExceptionsBlock;
        QStringList mExceptionsAllow;
        QStringList mExceptionsAllowForSession;
};


#endif // UBCOOKIEJAR_H

/*

这段代码定义了 `UBCookieJar` 类，它继承自 `QNetworkCookieJar`，用于处理网络请求中的 cookies。该类的功能包括 cookie 的管理、过滤、存储和加载设置。以下是对每个函数和方法的详细分析：

### 头文件部分

```cpp
#ifndef UBCOOKIEJAR_H
#define UBCOOKIEJAR_H

#include <QtNetwork/QNetworkCookieJar>
#include <QtGui>
```
- **`#ifndef UBCOOKIEJAR_H`** 和 **`#define UBCOOKIEJAR_H`**：防止头文件被多次包含。
- **`#include <QtNetwork/QNetworkCookieJar>`**：包含 `QNetworkCookieJar` 类定义，用于 cookie 的管理。
- **`#include <QtGui>`**：包含 Qt GUI 模块的头文件。

### 类声明部分

```cpp
class UBAutoSaver;
```
- **`UBAutoSaver`**：前向声明一个类，可能用于自动保存 cookie 的定时器。

```cpp
class UBCookieJar : public QNetworkCookieJar
{
    friend class UBCookieModel;
    Q_OBJECT
    Q_PROPERTY(AcceptPolicy acceptPolicy READ acceptPolicy WRITE setAcceptPolicy)
    Q_PROPERTY(KeepPolicy keepPolicy READ keepPolicy WRITE setKeepPolicy)
    Q_PROPERTY(QStringList blockedCookies READ blockedCookies WRITE setBlockedCookies)
    Q_PROPERTY(QStringList allowedCookies READ allowedCookies WRITE setAllowedCookies)
    Q_PROPERTY(QStringList allowForSessionCookies READ allowForSessionCookies WRITE setAllowForSessionCookies)
    Q_ENUMS(KeepPolicy)
    Q_ENUMS(AcceptPolicy)

    signals:
        void cookiesChanged();
```
- **`UBCookieJar`**：继承自 `QNetworkCookieJar`，用于扩展 cookie 的管理功能。
- **`friend class UBCookieModel`**：指定 `UBCookieModel` 类是 `UBCookieJar` 的友元类，可以访问私有成员。
- **`Q_OBJECT`**：使类支持 Qt 的信号和槽机制。
- **`Q_PROPERTY`**：定义了几个属性，允许在 Qt 的元对象系统中读写这些属性。

### 枚举类型

```cpp
    public:
        enum AcceptPolicy {
            AcceptAlways,
            AcceptNever,
            AcceptOnlyFromSitesNavigatedTo
        };

        enum KeepPolicy {
            KeepUntilExpire,
            KeepUntilExit,
            KeepUntilTimeLimit
        };
```
- **`AcceptPolicy`**：定义了不同的 cookie 接受策略：
  - `AcceptAlways`：始终接受 cookies。
  - `AcceptNever`：从不接受 cookies。
  - `AcceptOnlyFromSitesNavigatedTo`：仅接受从浏览过的站点获得的 cookies。
  
- **`KeepPolicy`**：定义了 cookie 保留策略：
  - `KeepUntilExpire`：保持直到 cookie 过期。
  - `KeepUntilExit`：保持直到程序退出。
  - `KeepUntilTimeLimit`：保持直到时间限制。

### 构造函数和析构函数

```cpp
        UBCookieJar(QObject *parent = 0);
        ~UBCookieJar();
```
- **`UBCookieJar(QObject *parent = 0)`**：构造函数，初始化 `UBCookieJar` 实例，`parent` 参数指定父对象。
- **`~UBCookieJar()`**：析构函数，清理 `UBCookieJar` 实例的资源。

### 公共方法

```cpp
        QList<QNetworkCookie> cookiesForUrl(const QUrl &url) const;
        bool setCookiesFromUrl(const QList<QNetworkCookie> &cookieList, const QUrl &url);
```
- **`cookiesForUrl(const QUrl &url) const`**：返回指定 URL 的 cookies 列表。
- **`setCookiesFromUrl(const QList<QNetworkCookie> &cookieList, const QUrl &url)`**：设置指定 URL 的 cookies。

```cpp
        AcceptPolicy acceptPolicy() const;
        void setAcceptPolicy(AcceptPolicy policy);

        KeepPolicy keepPolicy() const;
        void setKeepPolicy(KeepPolicy policy);
```
- **`acceptPolicy() const`** 和 **`setAcceptPolicy(AcceptPolicy policy)`**：获取或设置 cookie 接受策略。
- **`keepPolicy() const`** 和 **`setKeepPolicy(KeepPolicy policy)`**：获取或设置 cookie 保留策略。

```cpp
        QStringList blockedCookies() const;
        QStringList allowedCookies() const;
        QStringList allowForSessionCookies() const;

        void setBlockedCookies(const QStringList &list);
        void setAllowedCookies(const QStringList &list);
        void setAllowForSessionCookies(const QStringList &list);
```
- **`blockedCookies() const`** 和 **`allowedCookies() const`**：返回被阻止的 cookies 列表和允许的 cookies 列表。
- **`allowForSessionCookies() const`**：返回允许会话 cookies 的列表。
- **`setBlockedCookies(const QStringList &list)`**、**`setAllowedCookies(const QStringList &list)`**、**`setAllowForSessionCookies(const QStringList &list)`**：设置被阻止的 cookies 列表、允许的 cookies 列表和会话 cookies 列表。

### 公共槽

```cpp
    public slots:
        void clear();
        void loadSettings();
```
- **`clear()`**：清除所有 cookies。
- **`loadSettings()`**：加载 cookie 设置。

### 私有槽

```cpp
    private slots:
        void save();
```
- **`save()`**：保存 cookies，可能在定时器触发时调用。

### 私有方法

```cpp
    private:
        void purgeOldCookies();
        void load();
```
- **`purgeOldCookies()`**：删除过期的 cookies。
- **`load()`**：加载 cookies，可能从持久化存储中恢复。

### 私有成员变量

```cpp
        bool mLoaded;
        UBAutoSaver *mSaveTimer;

        AcceptPolicy mAcceptCookies;
        KeepPolicy mKeepCookies;

        QStringList mExceptionsBlock;
        QStringList mExceptionsAllow;
        QStringList mExceptionsAllowForSession;
```
- **`mLoaded`**：标记 cookies 是否已经加载。
- **`mSaveTimer`**：指向 `UBAutoSaver` 实例的指针，用于定时保存 cookies。
- **`mAcceptCookies`**：当前的 cookie 接受策略。
- **`mKeepCookies`**：当前的 cookie 保留策略。
- **`mExceptionsBlock`**：被阻止的 cookies 列表。
- **`mExceptionsAllow`**：允许的 cookies 列表。
- **`mExceptionsAllowForSession`**：允许会话 cookies 的列表。

### 总结

`UBCookieJar` 类扩展了 `QNetworkCookieJar`，提供了更细致的 cookie 管理功能，包括接受策略、保留策略、阻止和允许的 cookies 列表，以及会话 cookies 管理。
它支持加载和保存 cookies，并且可以在定时器触发时自动保存状态。

*/