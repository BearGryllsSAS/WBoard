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

这段代码定义了两个类：`WBWebPage` 和 `WBWebView`，用于处理基于 Qt 的 Web 内容的显示和交互。下面是对每个函数和成员的详细解释：

### `WBWebPage` 类

`WBWebPage` 继承自 `WBWebPage_` 类（可能是自定义的基类或 Qt 的 `QWebEnginePage` 的扩展）。它用于定义网页页面的行为。

#### 构造函数和成员函数

- **构造函数**:
  ```cpp
  WBWebPage(QObject *parent = 0);
  ```
  初始化 `WBWebPage` 实例，`parent` 是父对象，默认为 `0`（即无父对象）。

- **`mainWindow()`**:
  ```cpp
  WBBrowserWindow *mainWindow();
  ```
  返回指向 `WBBrowserWindow` 的指针。这个函数用于获取当前页面所在的主窗口。

#### 受保护的成员函数

- **`acceptNavigationRequest(QWebChannel *frame, const QNetworkRequest &request, NavigationType type)`**:
  ```cpp
  bool acceptNavigationRequest(QWebChannel *frame, const QNetworkRequest &request, NavigationType type);
  ```
  用于接受或拒绝导航请求。可以自定义是否允许页面导航。

- **`createWindow(QWebEnginePage::WebWindowType type)`**:
  ```cpp
  QWebEnginePage *createWindow(QWebEnginePage::WebWindowType type);
  ```
  创建一个新窗口。`type` 指定窗口的类型（如新标签页、弹出窗口等）。

- **`createPlugin(const QString &classId, const QUrl &url, const QStringList &paramNames, const QStringList &paramValues)`**:
  ```cpp
  QObject *createPlugin(const QString &classId, const QUrl &url, const QStringList &paramNames, const QStringList &paramValues);
  ```
  创建插件对象。`classId` 是插件的类标识符，`url` 是插件的 URL，`paramNames` 和 `paramValues` 是参数名称和值的列表。

#### 信号

- **`loadingUrl(const QUrl &url)`**:
  ```cpp
  void loadingUrl(const QUrl &url);
  ```
  当开始加载新的 URL 时发出。

#### 私有槽函数

- **`handleUnsupportedContent(QNetworkReply *reply)`**:
  ```cpp
  void handleUnsupportedContent(QNetworkReply *reply);
  ```
  处理不受支持的内容（如下载请求），`reply` 是网络回复对象。

#### 私有成员

- **`Qt::KeyboardModifiers mKeyboardModifiers`**:
  记录键盘修饰键（如 Shift、Ctrl）状态。

- **`Qt::MouseButtons mPressedButtons`**:
  记录当前按下的鼠标按钮。

- **`bool mOpenInNewTab`**:
  标记是否在新标签页中打开链接。

- **`QUrl mLoadingUrl`**:
  当前正在加载的 URL。

### `WBWebView` 类

`WBWebView` 继承自 `WBWebTrapWebView`，用于显示网页和处理与用户交互。

#### 构造函数和成员函数

- **构造函数**:
  ```cpp
  WBWebView(QWidget *parent = 0);
  ```
  初始化 `WBWebView` 实例，`parent` 是父对象，默认为 `0`（即无父对象）。

- **`webPage() const`**:
  ```cpp
  WBWebPage *webPage() const { return mPage; }
  ```
  返回 `WBWebPage` 对象的指针。

- **`load(const QUrl &url)`**:
  ```cpp
  void load(const QUrl &url);
  ```
  加载指定的 URL。

- **`load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation, const QByteArray &body = QByteArray())`**:
  ```cpp
  void load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation, const QByteArray &body = QByteArray());
  ```
  使用 `QNetworkRequest` 加载资源，支持指定操作类型（如 GET 或 POST）和请求体。

- **`url() const`**:
  ```cpp
  QUrl url() const;
  ```
  返回当前加载的 URL。

- **`lastStatusBarText() const`**:
  ```cpp
  QString lastStatusBarText() const;
  ```
  返回最后显示在状态栏的文本。

- **`progress() const`**:
  ```cpp
  inline int progress() const { return mProgress; }
  ```
  返回加载进度。

#### 受保护的成员函数

- **`mousePressEvent(QMouseEvent *event)`**:
  ```cpp
  void mousePressEvent(QMouseEvent *event);
  ```
  处理鼠标按下事件。

- **`mouseReleaseEvent(QMouseEvent *event)`**:
  ```cpp
  void mouseReleaseEvent(QMouseEvent *event);
  ```
  处理鼠标释放事件。

- **`contextMenuEvent(QContextMenuEvent *event)`**:
  ```cpp
  void contextMenuEvent(QContextMenuEvent *event);
  ```
  处理右键上下文菜单事件。

- **`wheelEvent(QWheelEvent *event)`**:
  ```cpp
  void wheelEvent(QWheelEvent *event);
  ```
  处理鼠标滚轮事件。

#### 私有槽函数

- **`setProgress(int progress)`**:
  ```cpp
  void setProgress(int progress);
  ```
  设置加载进度。

- **`loadFinished(bool ok)`**:
  ```cpp
  void loadFinished(bool ok);
  ```
  当页面加载完成时调用，`ok` 表示加载是否成功。

- **`loadStarted()`**:
  ```cpp
  void loadStarted();
  ```
  当页面开始加载时调用。

- **`setStatusBarText(const QString &string)`**:
  ```cpp
  void setStatusBarText(const QString &string);
  ```
  设置状态栏文本。

- **`downloadRequested(const QNetworkRequest &request)`**:
  ```cpp
  void downloadRequested(const QNetworkRequest &request);
  ```
  处理下载请求。

- **`openLinkInNewTab()`**:
  ```cpp
  void openLinkInNewTab();
  ```
  打开链接在新标签页中。

#### 私有成员

- **`QString mLastStatusBarText`**:
  保存最后显示在状态栏的文本。

- **`QUrl mInitialUrl`**:
  初始加载的 URL。

- **`int mProgress`**:
  当前加载进度。

- **`WBWebPage *mPage`**:
  指向当前的 `WBWebPage` 对象的指针。

- **`QTime mLoadStartTime`**:
  记录加载开始的时间。

这两个类通过继承和重写，提供了丰富的功能用于处理 Web 内容的显示、导航、和用户交互。

*/
