#ifndef WBWEBPAGE_H_
#define WBWEBPAGE_H_

#include <QtCore>
#include <QWebEnginePage>

class WBWebPage_ : public QWebEnginePage
{
    Q_OBJECT;

public:
    WBWebPage_(QObject *parent = 0);
    virtual ~WBWebPage_();

    virtual void javaScriptConsoleMessage(const QString &message, int lineNumber, const QString &sourceID);

    virtual QString userAgentForUrl(const QUrl& url) const;

private:
    QString mCachedUserAgentString;
    /*QWebPluginFactory *mPluginFactory;*/

};

#endif /* WBWEBPAGE_H_ */

/*

这段代码定义了一个名为 `WBWebPage_` 的类，它继承自 `QWebEnginePage` 类，并重写了一些方法。该类的主要目的是扩展或修改 `QWebEnginePage` 的默认行为。以下是对每个部分的详细分析：

### 头文件保护宏

```cpp
#ifndef WBWEBPAGE_H_
#define WBWEBPAGE_H_
```

- **`#ifndef WBWEBPAGE_H_`* * 和 * *`#define WBWEBPAGE_H_`* * :
-这些宏定义用于防止头文件的多重包含。`#ifndef` 检查 `WBWEBPAGE_H_` 是否已被定义，如果没有定义，则定义它，并包含头文件内容。这样可以确保在一个编译单元中只包含一次该头文件。

### 头文件包含

```cpp
#include <QtCore>
#include <QWebEnginePage>
```

- **`#include <QtCore>`* * :
-包含 Qt 的核心模块头文件。`QtCore` 包含了一些基本的 Qt 类，如 `QString` 和 `QObject`。

- **`#include <QWebEnginePage>`* * :
-包含 `QWebEnginePage` 类的头文件。这是 Qt WebEngine 中用于表示网页的类，提供了与网页内容交互的功能。

### `WBWebPage_` 类定义

```cpp
class WBWebPage_ : public QWebEnginePage
{
    Q_OBJECT;

public:
    WBWebPage_(QObject* parent = 0);
    virtual ~WBWebPage_();

    virtual void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID);

    virtual QString userAgentForUrl(const QUrl& url) const;

private:
    QString mCachedUserAgentString;
};
```

#### 继承关系

- `WBWebPage_` 类继承自 `QWebEnginePage`，意味着它继承了 `QWebEnginePage` 的所有功能，并可以重写或扩展这些功能。

#### `Q_OBJECT` 宏

- `Q_OBJECT` 宏是 Qt 元对象系统的一部分，允许类使用 Qt 的信号和槽机制。它使得类能够支持信号和槽的功能、运行时类型信息等。

#### 构造函数

```cpp
WBWebPage_(QObject * parent = 0);
```

- **`WBWebPage_(QObject * parent = 0)`** :
-构造函数用于初始化 `WBWebPage_` 实例。`parent` 参数是一个指向 `QObject` 的指针，默认为 `0`（即 `nullptr`）。它指定了 `WBWebPage_` 的父对象，用于管理内存和对象生命周期。

#### 析构函数

```cpp
virtual ~WBWebPage_();
```

- **`virtual ~WBWebPage_()`* * :
-虚析构函数，用于销毁 `WBWebPage_` 实例。标记为 `virtual` 以确保派生类可以正确地调用其析构函数，避免资源泄漏。

#### 重写的 `javaScriptConsoleMessage` 方法

```cpp
virtual void javaScriptConsoleMessage(const QString & message, int lineNumber, const QString & sourceID);
```

- **`javaScriptConsoleMessage(const QString & message, int lineNumber, const QString& sourceID)`** :
-该方法重写了 `QWebEnginePage` 的虚方法，用于处理 JavaScript 控制台消息。
- **参数 * *:
-`message`：JavaScript 控制台输出的消息内容。
- `lineNumber`：消息发生的行号。
- `sourceID`：消息来源的 ID。
- **功能 * *: 可以用于捕捉并处理 JavaScript 错误或调试信息，通常用于日志记录或显示控制台消息。

#### 重写的 `userAgentForUrl` 方法

```cpp
virtual QString userAgentForUrl(const QUrl & url) const;
```

- **`userAgentForUrl(const QUrl & url) const`** :
-该方法重写了 `QWebEnginePage` 的虚方法，用于提供特定 URL 的用户代理字符串（User - Agent）。
- **参数 * *:
-`url`：需要为其提供用户代理的 URL。
- **返回值 * *: 返回一个 `QString` 类型的用户代理字符串。
- **功能 * *: 可以用来修改或定制特定 URL 的用户代理字符串，用于模拟不同的浏览器或平台。

#### 私有成员变量

```cpp
private:
    QString mCachedUserAgentString;
    ```

        - **`QString mCachedUserAgentString`* * :
    -一个私有成员变量，用于缓存用户代理字符串。这可以提高性能，避免在每次请求时都重新生成用户代理字符串。

        ### 总结

        - **`WBWebPage_`* * 类继承自 `QWebEnginePage`，用于扩展 `QWebEnginePage` 的功能。
        - 通过重写 `javaScriptConsoleMessage` 方法，该类可以自定义 JavaScript 控制台消息的处理。
        - 通过重写 `userAgentForUrl` 方法，该类可以提供特定 URL 的自定义用户代理字符串。
        - 该类有一个私有成员变量 `mCachedUserAgentString` 用于缓存用户代理字符串，以提高性能。

*/