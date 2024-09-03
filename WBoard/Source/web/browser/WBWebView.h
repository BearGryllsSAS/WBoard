#ifndef WBWEBVIEW_H
#define WBWEBVIEW_H

#include <QtWidgets>
#include <QtWebEngine>

#include "WBWebTrapWebView.h"
#include "web/WBWebPage_.h"

class WBBrowserWindow;

class WBWebPage : public WBWebPage_
{
    Q_OBJECT;

public:
    WBWebPage(QObject *parent = 0);
    WBBrowserWindow *mainWindow();

protected:
    bool acceptNavigationRequest(QWebChannel *frame, const QNetworkRequest &request, NavigationType type);
	QWebEnginePage *createWindow(QWebEnginePage::WebWindowType type);
    QObject *createPlugin(const QString &classId, const QUrl &url, const QStringList &paramNames, const QStringList &paramValues);

    //bool supportsExtension(Extension extension) const {
    //    if (extension == QWebEnginePage::ErrorPageExtension)
    //    {
    //        return true;
    //    }
    //    return false;
    //}

    //bool extension(Extension extension, const ExtensionOption *option = 0, ExtensionReturn *output = 0)
    //{
    //    if (extension != QWebEnginePage::ErrorPageExtension)
    //        return false;

    //    ErrorPageExtensionOption *errorOption = (ErrorPageExtensionOption*) option;
    //    qDebug() << "Error loading " << qPrintable(errorOption->url.toString());
    //    if(errorOption->domain == QWebEnginePage::QtNetwork)
    //        qDebug() << "Network error (" << errorOption->error << "): ";
    //    else if(errorOption->domain == QWebEnginePage::Http)
    //        qDebug() << "HTTP error (" << errorOption->error << "): ";
    //    else if(errorOption->domain == QWebEnginePage::WebKit)
    //        qDebug() << "WebKit error (" << errorOption->error << "): ";

    //    qDebug() << qPrintable(errorOption->errorString);

    //    return false;
    //}

signals:
	void loadingUrl(const QUrl &url);

private slots:
    void handleUnsupportedContent(QNetworkReply *reply);

private:
    friend class WBWebView;

    // set the webview mousepressedevent
    Qt::KeyboardModifiers mKeyboardModifiers;
    Qt::MouseButtons mPressedButtons;
    bool mOpenInNewTab;
    QUrl mLoadingUrl;
};

class WBWebView : public WBWebTrapWebView
{
    Q_OBJECT

public:
    WBWebView(QWidget *parent = 0);
    WBWebPage *webPage() const { return mPage; }

    void load(const QUrl &url);
    void load ( const QNetworkRequest & request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation
            , const QByteArray & body = QByteArray());
    QUrl url() const;

    QString lastStatusBarText() const;
    inline int progress() const { return mProgress; }

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
    void wheelEvent(QWheelEvent *event);

private slots:
    void setProgress(int progress);
    void loadFinished(bool ok);
    void loadStarted();

    void setStatusBarText(const QString &string);

    void downloadRequested(const QNetworkRequest &request);
    void openLinkInNewTab();

private:
    QString mLastStatusBarText;
    QUrl mInitialUrl;
    int mProgress;
    WBWebPage *mPage;
    QTime mLoadStartTime;
};

#endif //WBWEBVIEW_H

/*

��δ��붨���������ࣺ`WBWebPage` �� `WBWebView`�����ڴ������ Qt �� Web ���ݵ���ʾ�ͽ����������Ƕ�ÿ�������ͳ�Ա����ϸ���ͣ�

### `WBWebPage` ��

`WBWebPage` �̳��� `WBWebPage_` �ࣨ�������Զ���Ļ���� Qt �� `QWebEnginePage` ����չ���������ڶ�����ҳҳ�����Ϊ��

#### ���캯���ͳ�Ա����

- **���캯��**:
  ```cpp
  WBWebPage(QObject *parent = 0);
  ```
  ��ʼ�� `WBWebPage` ʵ����`parent` �Ǹ�����Ĭ��Ϊ `0`�����޸����󣩡�

- **`mainWindow()`**:
  ```cpp
  WBBrowserWindow *mainWindow();
  ```
  ����ָ�� `WBBrowserWindow` ��ָ�롣����������ڻ�ȡ��ǰҳ�����ڵ������ڡ�

#### �ܱ����ĳ�Ա����

- **`acceptNavigationRequest(QWebChannel *frame, const QNetworkRequest &request, NavigationType type)`**:
  ```cpp
  bool acceptNavigationRequest(QWebChannel *frame, const QNetworkRequest &request, NavigationType type);
  ```
  ���ڽ��ܻ�ܾ��������󡣿����Զ����Ƿ�����ҳ�浼����

- **`createWindow(QWebEnginePage::WebWindowType type)`**:
  ```cpp
  QWebEnginePage *createWindow(QWebEnginePage::WebWindowType type);
  ```
  ����һ���´��ڡ�`type` ָ�����ڵ����ͣ����±�ǩҳ���������ڵȣ���

- **`createPlugin(const QString &classId, const QUrl &url, const QStringList &paramNames, const QStringList &paramValues)`**:
  ```cpp
  QObject *createPlugin(const QString &classId, const QUrl &url, const QStringList &paramNames, const QStringList &paramValues);
  ```
  �����������`classId` �ǲ�������ʶ����`url` �ǲ���� URL��`paramNames` �� `paramValues` �ǲ������ƺ�ֵ���б�

#### �ź�

- **`loadingUrl(const QUrl &url)`**:
  ```cpp
  void loadingUrl(const QUrl &url);
  ```
  ����ʼ�����µ� URL ʱ������

#### ˽�вۺ���

- **`handleUnsupportedContent(QNetworkReply *reply)`**:
  ```cpp
  void handleUnsupportedContent(QNetworkReply *reply);
  ```
  ������֧�ֵ����ݣ����������󣩣�`reply` ������ظ�����

#### ˽�г�Ա

- **`Qt::KeyboardModifiers mKeyboardModifiers`**:
  ��¼�������μ����� Shift��Ctrl��״̬��

- **`Qt::MouseButtons mPressedButtons`**:
  ��¼��ǰ���µ���갴ť��

- **`bool mOpenInNewTab`**:
  ����Ƿ����±�ǩҳ�д����ӡ�

- **`QUrl mLoadingUrl`**:
  ��ǰ���ڼ��ص� URL��

### `WBWebView` ��

`WBWebView` �̳��� `WBWebTrapWebView`��������ʾ��ҳ�ʹ������û�������

#### ���캯���ͳ�Ա����

- **���캯��**:
  ```cpp
  WBWebView(QWidget *parent = 0);
  ```
  ��ʼ�� `WBWebView` ʵ����`parent` �Ǹ�����Ĭ��Ϊ `0`�����޸����󣩡�

- **`webPage() const`**:
  ```cpp
  WBWebPage *webPage() const { return mPage; }
  ```
  ���� `WBWebPage` �����ָ�롣

- **`load(const QUrl &url)`**:
  ```cpp
  void load(const QUrl &url);
  ```
  ����ָ���� URL��

- **`load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation, const QByteArray &body = QByteArray())`**:
  ```cpp
  void load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation, const QByteArray &body = QByteArray());
  ```
  ʹ�� `QNetworkRequest` ������Դ��֧��ָ���������ͣ��� GET �� POST���������塣

- **`url() const`**:
  ```cpp
  QUrl url() const;
  ```
  ���ص�ǰ���ص� URL��

- **`lastStatusBarText() const`**:
  ```cpp
  QString lastStatusBarText() const;
  ```
  ���������ʾ��״̬�����ı���

- **`progress() const`**:
  ```cpp
  inline int progress() const { return mProgress; }
  ```
  ���ؼ��ؽ��ȡ�

#### �ܱ����ĳ�Ա����

- **`mousePressEvent(QMouseEvent *event)`**:
  ```cpp
  void mousePressEvent(QMouseEvent *event);
  ```
  ������갴���¼���

- **`mouseReleaseEvent(QMouseEvent *event)`**:
  ```cpp
  void mouseReleaseEvent(QMouseEvent *event);
  ```
  ��������ͷ��¼���

- **`contextMenuEvent(QContextMenuEvent *event)`**:
  ```cpp
  void contextMenuEvent(QContextMenuEvent *event);
  ```
  �����Ҽ������Ĳ˵��¼���

- **`wheelEvent(QWheelEvent *event)`**:
  ```cpp
  void wheelEvent(QWheelEvent *event);
  ```
  �����������¼���

#### ˽�вۺ���

- **`setProgress(int progress)`**:
  ```cpp
  void setProgress(int progress);
  ```
  ���ü��ؽ��ȡ�

- **`loadFinished(bool ok)`**:
  ```cpp
  void loadFinished(bool ok);
  ```
  ��ҳ��������ʱ���ã�`ok` ��ʾ�����Ƿ�ɹ���

- **`loadStarted()`**:
  ```cpp
  void loadStarted();
  ```
  ��ҳ�濪ʼ����ʱ���á�

- **`setStatusBarText(const QString &string)`**:
  ```cpp
  void setStatusBarText(const QString &string);
  ```
  ����״̬���ı���

- **`downloadRequested(const QNetworkRequest &request)`**:
  ```cpp
  void downloadRequested(const QNetworkRequest &request);
  ```
  ������������

- **`openLinkInNewTab()`**:
  ```cpp
  void openLinkInNewTab();
  ```
  ���������±�ǩҳ�С�

#### ˽�г�Ա

- **`QString mLastStatusBarText`**:
  ���������ʾ��״̬�����ı���

- **`QUrl mInitialUrl`**:
  ��ʼ���ص� URL��

- **`int mProgress`**:
  ��ǰ���ؽ��ȡ�

- **`WBWebPage *mPage`**:
  ָ��ǰ�� `WBWebPage` �����ָ�롣

- **`QTime mLoadStartTime`**:
  ��¼���ؿ�ʼ��ʱ�䡣

��������ͨ���̳к���д���ṩ�˷ḻ�Ĺ������ڴ��� Web ���ݵ���ʾ�����������û�������

*/
