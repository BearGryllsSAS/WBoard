#ifndef WBBROWSERMAINWINDOW_H
#define WBBROWSERMAINWINDOW_H

#include <QtWidgets>
#include <QtWebEngine>

class WBChaseWidget;
class WBTabWidget;
class WBToolbarSearch;
class WBWebView;
class WBHistoryManager;
class WBDownloadManager_;
class UBCookieJar;

#include "ui_mainWindow.h"

class WBBrowserWindow : public QWidget
{
    Q_OBJECT;

public:
    WBBrowserWindow(QWidget *parent = 0, Ui::MainWindow* uniboardMainWindow = 0);
    ~WBBrowserWindow();
    QSize sizeHint() const;

public:
    static QUrl guessUrlFromString(const QString &url);
    WBTabWidget *tabWidget() const;
    WBWebView *currentTabWebView() const;

    //void adaptToolBar(bool wideRes);

    //static WBHistoryManager *historyManager();
    static UBCookieJar *cookieJar();
    static WBDownloadManager_ *downloadManager();

public slots:
    void loadPage(const QString &url);
    void slotHome();

    void loadUrl(const QUrl &url);
    void loadUrlInNewTab(const QUrl &url);

    WBWebView *createNewTab();

    WBWebView* paintWidget();

    void tabCurrentChanged(int);

    void bookmarks();
    void addBookmark();

    void showTabAtTop(bool attop);

    void aboutToShowBackMenu();
    void aboutToShowForwardMenu();
    void openActionUrl(QAction *action);

signals:
    void activeViewPageChanged();
    void activeViewChange(QWidget*);
    void mirroringEnabled(bool checked);

protected:
    void closeEvent(QCloseEvent *event);

private slots:

    void slotLoadProgress(int);
    void slotUpdateStatusbar(const QString &string);
    void slotUpdateWindowTitle(const QString &title = QString());

    void slotFileSaveAs();

    void slotViewZoomIn();
    void slotViewZoomOut();
    void slotViewResetZoom();
    void slotViewZoomTextOnly(bool enable);

    void slotWebSearch();
    void slotToggleInspector(bool enable);
    void slotSelectLineEdit();
    void slotSwapFocus();

    void geometryChangeRequested(const QRect &geometry);

private:
    static WBHistoryManager *sHistoryManager;
    static WBDownloadManager_ *sDownloadManager;

    void setupMenu();
    void setupToolBar();
    void updateStatusbarActionText(bool visible);

    QToolBar *mWebToolBar;
    //WBToolbarSearch *mSearchToolBar;
    WBChaseWidget *mChaseWidget;
    WBTabWidget *mTabWidget;

    //QAction *mSearchAction;

    QString mLastSearch;

    Ui::MainWindow* mUniboardMainWindow;

    QMenu    *mHistoryBackMenu;
    QMenu    *mHistoryForwardMenu;
};

#endif // WBBROWSERMAINWINDOW_H

/*

这段代码定义了一个名为 `WBBrowserWindow` 的 Qt 窗口类，主要用于实现一个浏览器窗口的功能。以下是每个函数的具体作用分析：

1. **构造函数 `WBBrowserWindow(QWidget *parent = 0, Ui::MainWindow* uniboardMainWindow = 0)`**: 初始化窗口，接受两个参数，一个是父窗口，另一个是 `Ui::MainWindow` 的指针。

2. **析构函数 `~WBBrowserWindow()`**: 负责销毁窗口对象，释放相关资源。

3. **`QSize sizeHint() const`**: 返回窗口的建议大小。

4. **`static QUrl guessUrlFromString(const QString &url)`**: 根据给定的字符串猜测并返回一个 `QUrl` 对象。

5. **`WBTabWidget *tabWidget() const`**: 返回当前窗口的标签页控件。

6. **`WBWebView *currentTabWebView() const`**: 返回当前标签页的 `WBWebView` 对象。

7. **`void loadPage(const QString &url)`**: 加载指定的 URL 地址。

8. **`void slotHome()`**: 导航到主页。

9. **`void loadUrl(const QUrl &url)`**: 加载指定的 `QUrl` 地址。

10. **`void loadUrlInNewTab(const QUrl &url)`**: 在新标签页中加载指定的 URL 地址。

11. **`WBWebView *createNewTab()`**: 创建并返回一个新的标签页。

12. **`WBWebView* paintWidget()`**: 返回用于绘制的 `WBWebView` 对象。

13. **`void tabCurrentChanged(int)`**: 处理当前标签页变化的槽函数。

14. **`void bookmarks()`**: 打开书签菜单。

15. **`void addBookmark()`**: 添加当前页面到书签。

16. **`void showTabAtTop(bool attop)`**: 设置是否将标签页显示在窗口顶部。

17. **`void aboutToShowBackMenu()`**: 即将显示后退菜单时的槽函数。

18. **`void aboutToShowForwardMenu()`**: 即将显示前进菜单时的槽函数。

19. **`void openActionUrl(QAction *action)`**: 处理打开指定 `QAction` 的 URL 地址。

20. **`void closeEvent(QCloseEvent *event)`**: 处理窗口关闭事件。

21. **`void slotLoadProgress(int)`**: 处理加载进度变化的槽函数。

22. **`void slotUpdateStatusbar(const QString &string)`**: 更新状态栏文本。

23. **`void slotUpdateWindowTitle(const QString &title = QString())`**: 更新窗口标题。

24. **`void slotFileSaveAs()`**: 处理“另存为”操作。

25. **`void slotViewZoomIn()`**: 放大视图。

26. **`void slotViewZoomOut()`**: 缩小视图。

27. **`void slotViewResetZoom()`**: 重置视图缩放。

28. **`void slotViewZoomTextOnly(bool enable)`**: 仅缩放文本。

29. **`void slotWebSearch()`**: 处理网页搜索操作。

30. **`void slotToggleInspector(bool enable)`**: 切换检查器的显示状态。

31. **`void slotSelectLineEdit()`**: 选择行编辑控件。

32. **`void slotSwapFocus()`**: 切换焦点。

33. **`void geometryChangeRequested(const QRect &geometry)`**: 处理几何形状变化的请求。

### 私有成员变量：
- **`sHistoryManager` 和 `sDownloadManager`**: 静态成员，用于管理历史记录和下载。
- **`QToolBar *mWebToolBar`**: 工具栏对象。
- **`WBChaseWidget *mChaseWidget`**: 进度条控件。
- **`WBTabWidget *mTabWidget`**: 标签页控件。
- **`QString mLastSearch`**: 保存上次搜索的字符串。
- **`Ui::MainWindow* mUniboardMainWindow`**: `Ui` 窗口指针。
- **`QMenu *mHistoryBackMenu` 和 `mHistoryForwardMenu`**: 后退和前进菜单。

这段代码总体上实现了一个浏览器窗口的基本功能，包括标签页管理、页面加载、书签管理和界面更新等。

*/

