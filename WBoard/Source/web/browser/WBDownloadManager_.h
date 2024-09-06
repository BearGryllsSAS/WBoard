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

这段代码定义了一个下载管理器系统，包括下载项和下载管理器的类。它们分别实现了下载的具体操作、用户界面的显示以及下载状态的管理。以下是对每个部分和方法的详细分析：

### `WBDownloadItem` 类

`WBDownloadItem` 类表示一个下载项，负责处理单个下载的状态和操作。

#### 构造函数

```cpp
WBDownloadItem(QNetworkReply *reply = 0, bool requestFileName = false, QWidget *parent = 0, QString customDownloadPath = QString());
```

- **`reply`**: `QNetworkReply` 对象，用于获取下载的网络数据。
- **`requestFileName`**: 布尔值，指示是否请求文件名。
- **`parent`**: 指定父部件，默认为 `0`（即 `nullptr`）。
- **`customDownloadPath`**: 自定义下载路径，如果提供则用于指定下载保存的位置。

#### 公共方法

```cpp
bool downloading() const;
bool downloadedSuccessfully() const;
```

- **`downloading()`**: 返回下载是否正在进行中。
- **`downloadedSuccessfully()`**: 返回下载是否成功完成。

#### 公共成员变量

```cpp
QUrl m_url;
QFile m_output;
QNetworkReply *m_reply;
```

- **`m_url`**: 存储下载的 URL。
- **`m_output`**: 用于保存下载文件的 `QFile` 对象。
- **`m_reply`**: 存储 `QNetworkReply` 对象，用于获取下载内容。

#### 信号

```cpp
signals:
void statusChanged();
```

- **`statusChanged()`**: 下载状态发生变化时发出的信号。

#### 槽函数

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

- **`stop()`**: 停止下载的操作。
- **`tryAgain()`**: 重新尝试下载的操作。
- **`open()`**: 打开下载的文件。
- **`downloadReadyRead()`**: 处理下载的数据读取事件。
- **`error(QNetworkReply::NetworkError code)`**: 处理下载错误事件。
- **`downloadProgress(qint64 bytesReceived, qint64 bytesTotal)`**: 处理下载进度更新事件。
- **`metaDataChanged()`**: 处理下载的元数据变化事件。
- **`finished()`**: 下载完成后的处理。

#### 私有方法

```cpp
private:
void getFileName();
void init();
void updateInfoLabel();
QString dataString(int size) const;

QString saveFileName(const QString &directory) const;
```

- **`getFileName()`**: 获取文件名。
- **`init()`**: 初始化下载项。
- **`updateInfoLabel()`**: 更新显示的下载信息标签。
- **`dataString(int size) const`**: 格式化数据大小为字符串。
- **`saveFileName(const QString &directory) const`**: 生成保存文件的文件名。

#### 私有成员变量

```cpp
bool mRequestFileName;
qint64 mBytesReceived;
QTime mDownloadTime;
QString mCustomDownloadPath;
```

- **`mRequestFileName`**: 是否请求文件名的标志。
- **`mBytesReceived`**: 已接收的字节数。
- **`mDownloadTime`**: 下载时间。
- **`mCustomDownloadPath`**: 自定义下载路径。

---

### `WBDownloadManager_` 类

`WBDownloadManager_` 类是一个下载管理器，用于管理多个下载项，显示下载对话框，并处理下载相关的操作。

#### 构造函数与析构函数

```cpp
WBDownloadManager_(QWidget *parent = 0);
~WBDownloadManager_();
```

- **`WBDownloadManager_(QWidget *parent = 0)`**: 构造函数，初始化下载管理器。
- **`~WBDownloadManager_()`**: 析构函数，清理资源。

#### 公共方法

```cpp
int activeDownloads() const;
RemovePolicy removePolicy() const;
void setRemovePolicy(RemovePolicy policy);
```

- **`activeDownloads() const`**: 返回当前活动的下载数量。
- **`removePolicy() const`**: 返回当前的删除策略。
- **`setRemovePolicy(RemovePolicy policy)`**: 设置删除策略。

#### 公共槽函数

```cpp
public slots:
void download(const QNetworkRequest &request, bool requestFileName = false);
inline void download(const QUrl &url, bool requestFileName = false)
    { download(QNetworkRequest(url), requestFileName); }
void handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false, QString customDownloadPath = QString());
void cleanup();
```

- **`download(const QNetworkRequest &request, bool requestFileName = false)`**: 开始下载，传入 `QNetworkRequest` 对象。
- **`download(const QUrl &url, bool requestFileName = false)`**: 重载 `download` 方法，直接传入 `QUrl` 对象。
- **`handleUnsupportedContent(QNetworkReply *reply, bool requestFileName = false, QString customDownloadPath = QString())`**: 处理不支持的内容下载。
- **`cleanup()`**: 清理下载项。

#### 私有槽函数

```cpp
private slots:
void save() const;
void updateRow();
void processDownloadedContent(QNetworkReply *reply, bool requestFileName, QString customDownloadPath = QString());
```

- **`save() const`**: 保存下载数据。
- **`updateRow()`**: 更新下载项的显示行。
- **`processDownloadedContent(QNetworkReply *reply, bool requestFileName, QString customDownloadPath = QString())`**: 处理下载的内容。

#### 私有方法

```cpp
private:
void addItem(WBDownloadItem *item);
void updateItemCount();
void load();
```

- **`addItem(WBDownloadItem *item)`**: 添加下载项。
- **`updateItemCount()`**: 更新下载项的计数。
- **`load()`**: 加载之前保存的下载项。

#### 私有成员变量

```cpp
WBAutoSaver *mAutoSaver;
WBDownloadModel *mModel;
QNetworkAccessManager *mManager;
QFileIconProvider *mIconProvider;
QList<WBDownloadItem*> mDownloads;
RemovePolicy m_RemovePolicy;
bool mIsLoading;
```

- **`mAutoSaver`**: 自动保存器，用于保存下载状态。
- **`mModel`**: 下载模型，用于显示下载项。
- **`mManager`**: `QNetworkAccessManager` 对象，用于管理网络请求。
- **`mIconProvider`**: 文件图标提供器。
- **`mDownloads`**: 存储下载项的列表。
- **`m_RemovePolicy`**: 删除策略。
- **`mIsLoading`**: 标志是否正在加载。

---

### `WBDownloadModel` 类

`WBDownloadModel` 类是一个模型类，继承自 `QAbstractListModel`，用于在视图中显示下载项。

#### 构造函数

```cpp
WBDownloadModel(WBDownloadManager_ *downloadManager, QObject *parent = 0);
```

- **`WBDownloadModel(WBDownloadManager_ *downloadManager, QObject *parent = 0)`**: 构造函数，初始化模型。

#### 公共方法

```cpp
QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
int rowCount(const QModelIndex &parent = QModelIndex()) const;
bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
```

- **`data(const QModelIndex &index, int role = Qt::DisplayRole) const`**: 返回给定索引的数据，基于角色（例如显示角色）。
- **`rowCount(const QModelIndex &parent = QModelIndex()) const`**: 返回模型中的行数。
- **`removeRows(int row, int count, const QModelIndex &parent = QModelIndex())`**: 移除指定行的项。

#### 私有成员变量

```cpp
WBDownloadManager_ *mDownloadManager;
```

- **`mDownloadManager`**: 指向下载管理器的指针。

### 总结

这段代码创建了一个用于管理文件下载的系统。`WBDownloadItem` 类负责处理单个下载的详细操作，包括文件的保存和状态更新。
`WBDownloadManager_` 类则是整体的管理器，负责处理多个下载项的管理、显示和状态更新。`WBDownloadModel` 类作为一个模型，提供了在视图中显示下载项的功能。
所有这些组件协作，形成了一个完整的下载管理系统。

*/