#ifndef WBDOWNLOADMANAGER_H_
#define WBDOWNLOADMANAGER_H_

#include "ui_downloads.h"
#include "ui_downloaditem.h"

#include <QtNetwork>
#include <QtCore>
#include <QFileIconProvider>

class WBDownloadItem : public QWidget, public Ui_DownloadItem
{
    Q_OBJECT	  

public:
    WBDownloadItem(QNetworkReply *reply = 0, bool requestFileName = false, QWidget *parent = 0, QString customDownloadPath = QString());
    bool downloading() const;
    bool downloadedSuccessfully() const;

    QUrl m_url;

    QFile m_output;
    QNetworkReply *m_reply;
signals:
void statusChanged();

private slots:
    void stop();
    void tryAgain();
    void open();

    void downloadReadyRead();
    void error(QNetworkReply::NetworkError code);
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void metaDataChanged();
    void finished();

private:
    void getFileName();
    void init();
    void updateInfoLabel();
    QString dataString(int size) const;

    QString saveFileName(const QString &directory) const;

    bool mRequestFileName;
    qint64 mBytesReceived;
    QTime mDownloadTime;
    QString mCustomDownloadPath;

};

class WBAutoSaver;
class WBDownloadModel;

class WBDownloadManager_ : public QDialog, public Ui_DownloadDialog
{
    Q_OBJECT
    Q_PROPERTY(RemovePolicy removePolicy READ removePolicy WRITE setRemovePolicy)
    Q_ENUMS(RemovePolicy)

public:
    enum RemovePolicy {
        Never,
        Exit,
        SuccessFullDownload
    };

    WBDownloadManager_(QWidget *parent = 0);
    ~WBDownloadManager_();
    int activeDownloads() const;

    RemovePolicy removePolicy() const;
    void setRemovePolicy(RemovePolicy policy);

public slots:
    void download(const QNetworkRequest &request, bool requestFileName = false);
    inline void download(const QUrl &url, bool requestFileName = false)
        { download(QNetworkRequest(url), requestFileName); }
    void handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false, QString customDownloadPath = QString());
    void cleanup();

private slots:
    void save() const;
    void updateRow();
    void processDownloadedContent(QNetworkReply *reply, bool requestFileName, QString customDownloadPath = QString());

private:
    void addItem(WBDownloadItem *item);
    void updateItemCount();
    void load();

    WBAutoSaver *mAutoSaver;
    WBDownloadModel *mModel;
    QNetworkAccessManager *mManager;
    QFileIconProvider *mIconProvider;
    QList<WBDownloadItem*> mDownloads;
    RemovePolicy m_RemovePolicy;
    friend class WBDownloadModel;

    bool mIsLoading;
};

class WBDownloadModel : public QAbstractListModel
{
    friend class WBDownloadManager_;
    Q_OBJECT

public:
    WBDownloadModel(WBDownloadManager_ *downloadManager, QObject *parent = 0);
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());

private:
    WBDownloadManager_ *mDownloadManager;

};

#endif // WBDOWNLOADMANAGER_H_

/*

��δ��붨����һ�����ع�����ϵͳ����������������ع��������ࡣ���Ƿֱ�ʵ�������صľ���������û��������ʾ�Լ�����״̬�Ĺ��������Ƕ�ÿ�����ֺͷ�������ϸ������

### `WBDownloadItem` ��

`WBDownloadItem` ���ʾһ������������������ص�״̬�Ͳ�����

#### ���캯��

```cpp
WBDownloadItem(QNetworkReply *reply = 0, bool requestFileName = false, QWidget *parent = 0, QString customDownloadPath = QString());
```

- **`reply`**: `QNetworkReply` �������ڻ�ȡ���ص��������ݡ�
- **`requestFileName`**: ����ֵ��ָʾ�Ƿ������ļ�����
- **`parent`**: ָ����������Ĭ��Ϊ `0`���� `nullptr`����
- **`customDownloadPath`**: �Զ�������·��������ṩ������ָ�����ر����λ�á�

#### ��������

```cpp
bool downloading() const;
bool downloadedSuccessfully() const;
```

- **`downloading()`**: ���������Ƿ����ڽ����С�
- **`downloadedSuccessfully()`**: ���������Ƿ�ɹ���ɡ�

#### ������Ա����

```cpp
QUrl m_url;
QFile m_output;
QNetworkReply *m_reply;
```

- **`m_url`**: �洢���ص� URL��
- **`m_output`**: ���ڱ��������ļ��� `QFile` ����
- **`m_reply`**: �洢 `QNetworkReply` �������ڻ�ȡ�������ݡ�

#### �ź�

```cpp
signals:
void statusChanged();
```

- **`statusChanged()`**: ����״̬�����仯ʱ�������źš�

#### �ۺ���

```cpp
private slots:
void stop();
void tryAgain();
void open();

void downloadReadyRead();
void error(QNetworkReply::NetworkError code);
void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
void metaDataChanged();
void finished();
```

- **`stop()`**: ֹͣ���صĲ�����
- **`tryAgain()`**: ���³������صĲ�����
- **`open()`**: �����ص��ļ���
- **`downloadReadyRead()`**: �������ص����ݶ�ȡ�¼���
- **`error(QNetworkReply::NetworkError code)`**: �������ش����¼���
- **`downloadProgress(qint64 bytesReceived, qint64 bytesTotal)`**: �������ؽ��ȸ����¼���
- **`metaDataChanged()`**: �������ص�Ԫ���ݱ仯�¼���
- **`finished()`**: ������ɺ�Ĵ���

#### ˽�з���

```cpp
private:
void getFileName();
void init();
void updateInfoLabel();
QString dataString(int size) const;

QString saveFileName(const QString &directory) const;
```

- **`getFileName()`**: ��ȡ�ļ�����
- **`init()`**: ��ʼ�������
- **`updateInfoLabel()`**: ������ʾ��������Ϣ��ǩ��
- **`dataString(int size) const`**: ��ʽ�����ݴ�СΪ�ַ�����
- **`saveFileName(const QString &directory) const`**: ���ɱ����ļ����ļ�����

#### ˽�г�Ա����

```cpp
bool mRequestFileName;
qint64 mBytesReceived;
QTime mDownloadTime;
QString mCustomDownloadPath;
```

- **`mRequestFileName`**: �Ƿ������ļ����ı�־��
- **`mBytesReceived`**: �ѽ��յ��ֽ�����
- **`mDownloadTime`**: ����ʱ�䡣
- **`mCustomDownloadPath`**: �Զ�������·����

---

### `WBDownloadManager_` ��

`WBDownloadManager_` ����һ�����ع����������ڹ������������ʾ���ضԻ��򣬲�����������صĲ�����

#### ���캯������������

```cpp
WBDownloadManager_(QWidget *parent = 0);
~WBDownloadManager_();
```

- **`WBDownloadManager_(QWidget *parent = 0)`**: ���캯������ʼ�����ع�������
- **`~WBDownloadManager_()`**: ����������������Դ��

#### ��������

```cpp
int activeDownloads() const;
RemovePolicy removePolicy() const;
void setRemovePolicy(RemovePolicy policy);
```

- **`activeDownloads() const`**: ���ص�ǰ�������������
- **`removePolicy() const`**: ���ص�ǰ��ɾ�����ԡ�
- **`setRemovePolicy(RemovePolicy policy)`**: ����ɾ�����ԡ�

#### �����ۺ���

```cpp
public slots:
void download(const QNetworkRequest &request, bool requestFileName = false);
inline void download(const QUrl &url, bool requestFileName = false)
    { download(QNetworkRequest(url), requestFileName); }
void handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false, QString customDownloadPath = QString());
void cleanup();
```

- **`download(const QNetworkRequest &request, bool requestFileName = false)`**: ��ʼ���أ����� `QNetworkRequest` ����
- **`download(const QUrl &url, bool requestFileName = false)`**: ���� `download` ������ֱ�Ӵ��� `QUrl` ����
- **`handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false, QString customDownloadPath = QString())`**: ����֧�ֵ��������ء�
- **`cleanup()`**: ���������

#### ˽�вۺ���

```cpp
private slots:
void save() const;
void updateRow();
void processDownloadedContent(QNetworkReply *reply, bool requestFileName, QString customDownloadPath = QString());
```

- **`save() const`**: �����������ݡ�
- **`updateRow()`**: �������������ʾ�С�
- **`processDownloadedContent(QNetworkReply *reply, bool requestFileName, QString customDownloadPath = QString())`**: �������ص����ݡ�

#### ˽�з���

```cpp
private:
void addItem(WBDownloadItem *item);
void updateItemCount();
void load();
```

- **`addItem(WBDownloadItem *item)`**: ��������
- **`updateItemCount()`**: ����������ļ�����
- **`load()`**: ����֮ǰ����������

#### ˽�г�Ա����

```cpp
WBAutoSaver *mAutoSaver;
WBDownloadModel *mModel;
QNetworkAccessManager *mManager;
QFileIconProvider *mIconProvider;
QList<WBDownloadItem*> mDownloads;
RemovePolicy m_RemovePolicy;
bool mIsLoading;
```

- **`mAutoSaver`**: �Զ������������ڱ�������״̬��
- **`mModel`**: ����ģ�ͣ�������ʾ�����
- **`mManager`**: `QNetworkAccessManager` �������ڹ�����������
- **`mIconProvider`**: �ļ�ͼ���ṩ����
- **`mDownloads`**: �洢��������б�
- **`m_RemovePolicy`**: ɾ�����ԡ�
- **`mIsLoading`**: ��־�Ƿ����ڼ��ء�

---

### `WBDownloadModel` ��

`WBDownloadModel` ����һ��ģ���࣬�̳��� `QAbstractListModel`����������ͼ����ʾ�����

#### ���캯��

```cpp
WBDownloadModel(WBDownloadManager_ *downloadManager, QObject *parent = 0);
```

- **`WBDownloadModel(WBDownloadManager_ *downloadManager, QObject *parent = 0)`**: ���캯������ʼ��ģ�͡�

#### ��������

```cpp
QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
int rowCount(const QModelIndex &parent = QModelIndex()) const;
bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
```

- **`data(const QModelIndex &index, int role = Qt::DisplayRole) const`**: ���ظ������������ݣ����ڽ�ɫ��������ʾ��ɫ����
- **`rowCount(const QModelIndex &parent = QModelIndex()) const`**: ����ģ���е�������
- **`removeRows(int row, int count, const QModelIndex &parent = QModelIndex())`**: �Ƴ�ָ���е��

#### ˽�г�Ա����

```cpp
WBDownloadManager_ *mDownloadManager;
```

- **`mDownloadManager`**: ָ�����ع�������ָ�롣

### �ܽ�

��δ��봴����һ�����ڹ����ļ����ص�ϵͳ��`WBDownloadItem` �ฺ���������ص���ϸ�����������ļ��ı����״̬���¡�
`WBDownloadManager_` ����������Ĺ���������������������Ĺ�����ʾ��״̬���¡�`WBDownloadModel` ����Ϊһ��ģ�ͣ��ṩ������ͼ����ʾ������Ĺ��ܡ�
������Щ���Э�����γ���һ�����������ع���ϵͳ��

*/