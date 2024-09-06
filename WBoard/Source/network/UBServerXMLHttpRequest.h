#ifndef UBSERVERXMLHTTPREQUEST_H_
#define UBSERVERXMLHTTPREQUEST_H_

#include <QtCore>
#include <QtNetwork>

class UBNetworkAccessManager;

class UBServerXMLHttpRequest : public QObject
{
    Q_OBJECT

    public:
        UBServerXMLHttpRequest(UBNetworkAccessManager* pNam, const QString& contentType = "application/xml");

        virtual ~UBServerXMLHttpRequest();

        void post(const QUrl& pUrl, const QByteArray& payload);
        void put(const QUrl& pUrl, const QByteArray& payload);
        void get(const QUrl& pUrl);

        void syntheticRubyOnRailsDelete(const QUrl& pUrl);

        void addHeader(const QString&, const QString&);

        void setVerbose(bool pVerbose);

   private:
        void connectReply();

   private slots:

        void downloadProgress (qint64 bytesReceived, qint64 bytesTotal);
        void error (QNetworkReply::NetworkError code);
        void finished ();
        void uploadProgress ( qint64 bytesSent, qint64 bytesTotal );
        void readyRead();

    signals:

        void finished(bool, const QByteArray&);
        void progress(qint64 bytesSent, qint64 bytesTotal);

    private:

        bool mHasError;
        bool mIsRunning;

        QString mContentType;
        QNetworkReply* mReply;

        QByteArray mReplyContent;

        QMap<QString, QString> mExtraHeaders;

        UBNetworkAccessManager* mNam;

        bool mIsVerbose;

        int mRedirectionCount;

        QByteArray mPutPayload;
        QByteArray mPostPayload;

};


#endif /* UBSERVERXMLHTTPREQUEST_H_ */

/*

这段代码定义了 `UBServerXMLHttpRequest` 类，用于处理网络请求（如 GET、POST、PUT 等）并与服务器进行交互。以下是每个部分的详细分析：

### 头文件保护和引入部分

```cpp
#ifndef UBSERVERXMLHTTPREQUEST_H_
#define UBSERVERXMLHTTPREQUEST_H_

#include <QtCore>
#include <QtNetwork>
```
- **`#ifndef UBSERVERXMLHTTPREQUEST_H_`** 和 **`#define UBSERVERXMLHTTPREQUEST_H_`**：防止头文件被多次包含。
- **`#include <QtCore>`** 和 **`#include <QtNetwork>`**：包含 Qt 的核心和网络模块的头文件。

### 类声明部分

```cpp
class UBNetworkAccessManager;

class UBServerXMLHttpRequest : public QObject
{
    Q_OBJECT
```
- **`UBServerXMLHttpRequest`**：继承自 `QObject`，用于发送 HTTP 请求并处理响应。
- **`Q_OBJECT`**：使类支持 Qt 的信号和槽机制。

### 构造函数和析构函数

```cpp
    public:
        UBServerXMLHttpRequest(UBNetworkAccessManager* pNam, const QString& contentType = "application/xml");
        virtual ~UBServerXMLHttpRequest();
```
- **`UBServerXMLHttpRequest(UBNetworkAccessManager* pNam, const QString& contentType = "application/xml")`**：构造函数，接受一个 `UBNetworkAccessManager` 指针和可选的内容类型参数（默认为 "application/xml"）。初始化对象。
- **`virtual ~UBServerXMLHttpRequest()`**：析构函数，清理资源。

### 公共方法

```cpp
        void post(const QUrl& pUrl, const QByteArray& payload);
        void put(const QUrl& pUrl, const QByteArray& payload);
        void get(const QUrl& pUrl);
        void syntheticRubyOnRailsDelete(const QUrl& pUrl);
        void addHeader(const QString&, const QString&);
        void setVerbose(bool pVerbose);
```
- **`post(const QUrl& pUrl, const QByteArray& payload)`**：发送 POST 请求到指定的 URL，并附带请求负载。
- **`put(const QUrl& pUrl, const QByteArray& payload)`**：发送 PUT 请求到指定的 URL，并附带请求负载。
- **`get(const QUrl& pUrl)`**：发送 GET 请求到指定的 URL。
- **`syntheticRubyOnRailsDelete(const QUrl& pUrl)`**：发送 DELETE 请求，可能用于与 Ruby on Rails 框架兼容的请求。
- **`addHeader(const QString& key, const QString& value)`**：添加 HTTP 请求头。
- **`setVerbose(bool pVerbose)`**：设置是否启用详细模式，影响日志输出等调试信息。

### 私有方法

```cpp
    private:
        void connectReply();
```
- **`connectReply()`**：设置连接到 `QNetworkReply` 对象的信号和槽，处理网络响应。

### 私有槽

```cpp
    private slots:
        void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
        void error(QNetworkReply::NetworkError code);
        void finished();
        void uploadProgress(qint64 bytesSent, qint64 bytesTotal);
        void readyRead();
```
- **`downloadProgress(qint64 bytesReceived, qint64 bytesTotal)`**：处理下载进度更新的槽函数。
- **`error(QNetworkReply::NetworkError code)`**：处理下载过程中的错误的槽函数。
- **`finished()`**：处理请求完成后的操作。
- **`uploadProgress(qint64 bytesSent, qint64 bytesTotal)`**：处理上传进度更新的槽函数。
- **`readyRead()`**：处理可读数据的槽函数。

### 信号

```cpp
    signals:
        void finished(bool, const QByteArray&);
        void progress(qint64 bytesSent, qint64 bytesTotal);
```
- **`finished(bool success, const QByteArray& replyContent)`**：请求完成时发射的信号，包含成功标志和返回的内容。
- **`progress(qint64 bytesSent, qint64 bytesTotal)`**：上传或下载进度更新的信号。

### 私有成员变量

```cpp
    private:
        bool mHasError;
        bool mIsRunning;
        QString mContentType;
        QNetworkReply* mReply;
        QByteArray mReplyContent;
        QMap<QString, QString> mExtraHeaders;
        UBNetworkAccessManager* mNam;
        bool mIsVerbose;
        int mRedirectionCount;
        QByteArray mPutPayload;
        QByteArray mPostPayload;
```
- **`mHasError`**：标记是否发生错误。
- **`mIsRunning`**：标记请求是否正在进行。
- **`mContentType`**：请求的内容类型。
- **`mReply`**：当前的 `QNetworkReply` 对象。
- **`mReplyContent`**：存储响应内容。
- **`mExtraHeaders`**：存储额外的请求头。
- **`mNam`**：指向 `UBNetworkAccessManager` 的指针，管理网络访问。
- **`mIsVerbose`**：是否启用详细模式。
- **`mRedirectionCount`**：重定向计数。
- **`mPutPayload`** 和 **`mPostPayload`**：分别存储 PUT 和 POST 请求的负载数据。

### 总结

`UBServerXMLHttpRequest` 类用于处理 HTTP 请求（GET、POST、PUT、DELETE）及其响应。
它使用 Qt 的网络功能，通过信号和槽机制管理网络通信和进度更新。可以设置请求头和内容类型，并支持详细模式以便调试。

*/