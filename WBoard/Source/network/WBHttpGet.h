#ifndef WBHTTPGET_H_
#define WBHTTPGET_H_

/*WBHttpGet����Ҫ���ڴ��� HTTP �� GET ���󣬲��ṩ����صĹ��ܺ��ź���������������еĸ����¼���״̬��*/
/*- `get(QUrl pUrl, QPointF pPoint = QPointF(0, 0), QSize pSize = QSize(0, 0), bool isBackground = false)` �������ڷ���һ��
HTTP GET ���󣬲�����ָ��һЩ����Ĳ�������λ����Ϣ��`QPointF`�����ߴ���Ϣ��`QSize`���Լ��Ƿ�Ϊ��̨����
- `downloadProgress(qint64 bytesReceived, qint64 bytesTotal)` ���������ع����б�����ȣ��ṩ�ѽ��յ��ֽ��������ֽ�����
- `downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize
pSize, bool isBackground)` �������������ʱ�����źţ����������Ƿ�ɹ���Դ URL����������ͷ�����ص����ݡ�λ�á��ߴ��Լ�
�Ƿ�Ϊ��̨�������Ϣ��*/

#include <QtCore>
#include <QtNetwork>
#include <QDropEvent>

// ��δ��붨����һ����Ϊ WBHttpGet ���࣬���̳��� QObject����ʹ���� Qt ���źźͲۻ��ơ�
// WBHttpGet ��ʵ���˷��� HTTP GET ����Ĺ��ܣ�ͨ�� Qt ������ģ�鴦������ͨ�ź����ݽ��ա�
// ��֧���첽����ͨ���źźͲۻ���֪ͨ���ؽ��Ⱥ����״̬������������ڴ�����������ķ������ݽ��պʹ�����װ��������ͨ����صĸ���ϸ�ں�״̬����
class WBHttpGet : public QObject
{
    Q_OBJECT

public:
    WBHttpGet(QObject* parent = 0);
    virtual ~WBHttpGet();

    // �÷������ڷ���һ������ GET ���󣬲�����һ�� QNetworkReply* ���󣬸ö����ʾ�������Ӧ��
    // ������������� URL(pUrl)�������λ��(pPoint)������Ĵ�С(pSize)���Լ��Ƿ��̨����(isBackground)��
    // ����������ܻ�����һ���������󣬲�����Ӧ�����Լ����������Ϣ���͵� downloadFinished �źš�
    QNetworkReply* get(QUrl pUrl, QPointF pPoint = QPointF(0, 0), QSize pSize = QSize(0, 0), bool isBackground = false);
//        QNetworkReply* get(const sDownloadFileDesc &downlinfo);

signals:
    // ���ؽ����źţ�����֪ͨ���ع����н��յ��ֽ��������ֽ�����
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    // ��������źţ�֪ͨ�����Ƿ�ɹ� (pSuccess)��ԭʼ URL (sourceUrl)����������ͷ (pContentTypeHeader)�����ص����� (pData)��λ�� (pPos)����С (pSize)���Լ��Ƿ��̨���� (isBackground)��
    void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader
            , QByteArray pData, QPointF pPos, QSize pSize, bool isBackground);
//        void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData
//                              , sDownloadFileDesc downlInfo);

private slots:
    void readyRead();                                                       // �ۺ��������ڴ���������Ӧ������׼����ȡ�������
    void requestFinished();                                                 // �ۺ�������������������ɵ������
    void downloadProgressed(qint64 bytesReceived, qint64 bytesTotal);       // �ۺ������������ؽ��ȱ仯�������

private:
    QByteArray mDownloadedBytes;                                            // �洢�����ص��ֽ����ݡ�
    QNetworkReply* mReply;                                                  // ��ǰ�����������Ӧ����
    QPointF mPos;                                                           // ��������λ�ú͵ĳ�Ա������
    QSize mSize;                                                            // ���������С�͵ĳ�Ա������

    bool mIsBackground;                                                     // ��־�Ƿ�Ϊ��̨����ĳ�Ա������
    int mRequestID;                                                         // ����� ID ��
    int mRedirectionCount;                                                  // �ض��������
    bool mIsSelfAborting;                                                   // ��־�Ƿ�Ϊ������ֹ������
//        sDownloadFileDesc mDownloadInfo;
};

#endif /* WBHTTPGET_H_ */

/*

��δ��붨����һ�����ڴ��� HTTP GET ����� `WBHttpGet` �ࡣ������ÿ�������ͳ�Ա����ϸ������

1. **���캯�� `WBHttpGet(QObject* parent = 0)`**:
   - ��ʼ�� `WBHttpGet` ���󣬽���һ����ѡ�ĸ�������� `parent`��

2. **�������� `virtual ~WBHttpGet()`**:
   - �������� `WBHttpGet` �����ͷ������Դ��

3. **`QNetworkReply* get(QUrl pUrl, QPointF pPoint = QPointF(0, 0), QSize pSize = QSize(0, 0), bool isBackground = false)`**:
   - ����һ�� HTTP GET ���󡣲������������ URL (`pUrl`)��λ�� (`pPoint`)����С (`pSize`)���Ƿ��̨���� (`isBackground`)��
   - ����һ�� `QNetworkReply` ���󣬴���������Ӧ��

4. **�ź� `void downloadProgress(qint64 bytesReceived, qint64 bytesTotal)`**:
   - �����ع����з����������ѽ��յ��ֽ��� (`bytesReceived`) �����ֽ��� (`bytesTotal`)��

5. **�ź� `void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isBackground)`**:
   - ���������ʱ���������������Ƿ�ɹ� (`pSuccess`)��Դ URL (`sourceUrl`)����������ͷ (`pContentTypeHeader`)�����ص����� (`pData`)��λ�� (`pPos`)����С (`pSize`)���Ƿ��̨���� (`isBackground`)��

6. **�ۺ��� `void readyRead()`**:
   - ����������Ӧ����׼����ȡ�������

7. **�ۺ��� `void requestFinished()`**:
   - ��������������ɵ������

8. **�ۺ��� `void downloadProgressed(qint64 bytesReceived, qint64 bytesTotal)`**:
   - �������ؽ��ȱ仯�������

9. **��Ա����**:
   - `QByteArray mDownloadedBytes`���洢�����ص��ֽ����ݡ�
   - `QNetworkReply* mReply`����ǰ�����������Ӧ����
   - `QPointF mPos`�������λ�á�
   - `QSize mSize`������Ĵ�С��
   - `bool mIsBackground`����־�Ƿ�Ϊ��̨����
   - `int mRequestID`������� ID��
   - `int mRedirectionCount`���ض��������
   - `bool mIsSelfAborting`����־�Ƿ�Ϊ������ֹ������

������װ�˷���ʹ��� HTTP GET ����Ĺ��ܣ�ʹ�� Qt ���źźͲۻ������������ؽ��Ⱥ����״̬��

*/