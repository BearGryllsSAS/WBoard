#ifndef WBHTTPGET_H_
#define WBHTTPGET_H_

/*WBHttpGet：主要用于处理 HTTP 的 GET 请求，并提供了相关的功能和信号来处理请求过程中的各种事件和状态。*/
/*- `get(QUrl pUrl, QPointF pPoint = QPointF(0, 0), QSize pSize = QSize(0, 0), bool isBackground = false)` 方法用于发起一个
HTTP GET 请求，并可以指定一些额外的参数，如位置信息（`QPointF`）、尺寸信息（`QSize`）以及是否为后台请求。
- `downloadProgress(qint64 bytesReceived, qint64 bytesTotal)` 用于在下载过程中报告进度，提供已接收的字节数和总字节数。
- `downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize
pSize, bool isBackground)` 用于在下载完成时发出信号，包含下载是否成功、源 URL、内容类型头、下载的数据、位置、尺寸以及
是否为后台请求等信息。*/

#include <QtCore>
#include <QtNetwork>
#include <QDropEvent>

// 这段代码定义了一个名为 WBHttpGet 的类，它继承自 QObject，并使用了 Qt 的信号和槽机制。
// WBHttpGet 类实现了发起 HTTP GET 请求的功能，通过 Qt 的网络模块处理网络通信和数据接收。
// 它支持异步请求并通过信号和槽机制通知下载进度和完成状态。该类设计用于处理网络请求的发起、数据接收和处理，封装了与网络通信相关的各种细节和状态管理。
class WBHttpGet : public QObject
{
    Q_OBJECT

public:
    WBHttpGet(QObject* parent = 0);
    virtual ~WBHttpGet();

    // 该方法用于发起一个网络 GET 请求，并返回一个 QNetworkReply* 对象，该对象表示请求的响应。
    // 参数包括请求的 URL(pUrl)，请求的位置(pPoint)，请求的大小(pSize)，以及是否后台请求(isBackground)。
    // 这个方法可能会启动一个网络请求，并将响应数据以及其他相关信息发送到 downloadFinished 信号。
    QNetworkReply* get(QUrl pUrl, QPointF pPoint = QPointF(0, 0), QSize pSize = QSize(0, 0), bool isBackground = false);
//        QNetworkReply* get(const sDownloadFileDesc &downlinfo);

signals:
    // 下载进度信号，用于通知下载过程中接收的字节数和总字节数。
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    // 下载完成信号，通知下载是否成功 (pSuccess)，原始 URL (sourceUrl)，内容类型头 (pContentTypeHeader)，下载的数据 (pData)，位置 (pPos)，大小 (pSize)，以及是否后台下载 (isBackground)。
    void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader
            , QByteArray pData, QPointF pPos, QSize pSize, bool isBackground);
//        void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData
//                              , sDownloadFileDesc downlInfo);

private slots:
    void readyRead();                                                       // 槽函数，用于处理网络响应数据已准备读取的情况。
    void requestFinished();                                                 // 槽函数，处理网络请求完成的情况。
    void downloadProgressed(qint64 bytesReceived, qint64 bytesTotal);       // 槽函数，处理下载进度变化的情况。

private:
    QByteArray mDownloadedBytes;                                            // 存储已下载的字节数据。
    QNetworkReply* mReply;                                                  // 当前网络请求的响应对象。
    QPointF mPos;                                                           // 保存请求位置和的成员变量。
    QSize mSize;                                                            // 保存请求大小和的成员变量。

    bool mIsBackground;                                                     // 标志是否为后台请求的成员变量。
    int mRequestID;                                                         // 请求的 ID 。
    int mRedirectionCount;                                                  // 重定向计数。
    bool mIsSelfAborting;                                                   // 标志是否为自我中止的请求。
//        sDownloadFileDesc mDownloadInfo;
};

#endif /* WBHTTPGET_H_ */

