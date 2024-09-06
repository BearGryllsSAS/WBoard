#ifndef WBNETWORKACCESSMANAGER_H
#define WBNETWORKACCESSMANAGER_H

#include <QtNetwork>

class WBNetworkAccessManager : public QNetworkAccessManager
{
    Q_OBJECT

public:
    static WBNetworkAccessManager *defaultAccessManager();

    WBNetworkAccessManager(QObject *parent = 0);

    virtual QNetworkReply *get(const QNetworkRequest &request);

protected:
    virtual QNetworkReply * createRequest ( Operation op, const QNetworkRequest & req, QIODevice * outgoingData = 0 );

private:
    QList<QString> sslTrustedHostList;

    static WBNetworkAccessManager *sNetworkAccessManager;

    volatile int mProxyAuthenticationCount;

private slots:
    void authenticationRequired(QNetworkReply *reply, QAuthenticator *auth);
    void proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *auth);
    void sslErrors(QNetworkReply *reply, const QList<QSslError> &error);
};

#endif // WBNETWORKACCESSMANAGER_H

/*

这段代码定义了一个名为 `WBNetworkAccessManager` 的类，它继承自 `QNetworkAccessManager`。`WBNetworkAccessManager` 是一个网络访问管理器，用于处理网络请求。以下是每个函数和成员的详细分析：

### 类定义与成员

1. **类定义**:
   ```cpp
   class WBNetworkAccessManager : public QNetworkAccessManager
   ```
   `WBNetworkAccessManager` 继承自 `QNetworkAccessManager`，扩展了其功能并提供了一些自定义的功能和行为。

2. **`static WBNetworkAccessManager *defaultAccessManager();`**:
   - 这是一个静态成员函数，用于获取 `WBNetworkAccessManager` 的默认实例。通常用于提供一个单例模式的访问点。

3. **构造函数 `WBNetworkAccessManager(QObject *parent = 0);`**:
   - 构造函数初始化 `WBNetworkAccessManager` 对象，并允许传递一个可选的父对象参数。通过这个构造函数可以设置父对象以管理内存和生命周期。

4. **`virtual QNetworkReply *get(const QNetworkRequest &request);`**:
   - 重写 `QNetworkAccessManager` 的 `get` 方法，执行一个 HTTP GET 请求，并返回 `QNetworkReply` 对象，用于处理请求的响应。

5. **`protected:`**:
   - 声明的保护成员函数和变量可以被 `WBNetworkAccessManager` 或其子类访问。

6. **`virtual QNetworkReply * createRequest(Operation op, const QNetworkRequest & req, QIODevice * outgoingData = 0);`**:
   - 重写 `QNetworkAccessManager` 的 `createRequest` 方法，创建一个网络请求。这个方法允许自定义请求的创建行为，支持指定的操作 (`Operation`)，请求 (`QNetworkRequest`)，以及可选的输出数据 (`QIODevice`)。

### 成员变量

1. **`QList<QString> sslTrustedHostList;`**:
   - 用于存储受信任的 SSL 主机列表。可以用于检查或管理 SSL/TLS 连接的安全性。

2. **`static WBNetworkAccessManager *sNetworkAccessManager;`**:
   - 静态成员变量，用于存储 `WBNetworkAccessManager` 的单例实例。这个静态成员变量配合 `defaultAccessManager` 方法实现单例模式。

3. **`volatile int mProxyAuthenticationCount;`**:
   - 记录代理认证请求的计数。`volatile` 关键字表明这个变量可能在不同线程中被修改，防止编译器优化其访问。

### 槽函数

1. **`void authenticationRequired(QNetworkReply *reply, QAuthenticator *auth);`**:
   - 当需要用户认证时被调用。`QNetworkReply` 对象表示当前的网络请求，`QAuthenticator` 对象用于提供认证信息（如用户名和密码）。

2. **`void proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *auth);`**:
   - 当代理服务器需要认证时被调用。`QNetworkProxy` 对象表示代理服务器的信息，`QAuthenticator` 用于提供认证信息。

3. **`void sslErrors(QNetworkReply *reply, const QList<QSslError> &error);`**:
   - 当 SSL/TLS 连接遇到错误时被调用。`QNetworkReply` 对象表示当前的网络请求，`QSslError` 列表包含所有的 SSL 错误信息。

### 总结

- `WBNetworkAccessManager` 类扩展了 `QNetworkAccessManager` 的功能，提供了自定义的网络请求处理。
- 通过重写 `createRequest` 方法，允许在请求创建过程中进行自定义操作。
- 支持代理和认证处理，以及 SSL 错误处理。
- 提供了静态方法 `defaultAccessManager` 以实现单例模式。

这些功能使得 `WBNetworkAccessManager` 在需要额外的认证、代理设置、或 SSL 错误处理的复杂网络环境中变得非常有用。

*/