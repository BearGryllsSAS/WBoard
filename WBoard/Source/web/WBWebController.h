#ifndef WBWEBCONTROLLER_H_
#define WBWEBCONTROLLER_H_

#include <QtWidgets>
#include <QtWebEngine>
#include <QWebEnginePage>
#include <QWebEngineView>

#include "WBOEmbedParser.h"

class WBBrowserWindow;
class WBApplication;
class WBTrapFlashController;
class WBMainWindow;
class WBWebToolsPalette;
class WBWebView;
class WBServerXMLHttpRequest;

class WBWebController : public QObject
{
    Q_OBJECT

public:
    WBWebController(WBMainWindow* mainWindow);
    virtual ~WBWebController();
    void closing();
    void adaptToolBar();

    QPixmap captureCurrentPage();

    void showTabAtTop(bool attop);

    void loadUrl(const QUrl& url);

    QWebEngineView* createNewTab();

    QUrl currentPageUrl() const;

    void show();

    WBBrowserWindow* GetCurrentWebBrowser(){return mCurrentWebBrowser;}

protected:
    void setupPalettes();
    QPixmap getScreenPixmap();

signals:
	void imageCaptured(const QPixmap& pCapturedPixmap, bool pageMode, const QUrl& source);
	void activeWebPageChanged(WBWebView* pWebView);

public slots:
    void screenLayoutChanged();

    void setSourceWidget(QWidget* pWidget);
    void captureWindow();
    void customCapture();
    void toogleMirroring(bool checked);

    QWidget* controlView()
    {
        return mBrowserWidget;
    }

    void captureoEmbed();
    void captureEduMedia();

    bool isOEmbedable(const QUrl& pUrl);
    bool hasEmbeddedContent();
    void getEmbeddableContent();

    bool isEduMedia(const QUrl& pUrl);

    void copy();
    void paste();
    void cut();
	void triggerWebTools(bool checked);

private slots:
	void activePageChanged();
	void toggleWebTrap(bool checked);
	void onOEmbedParsed(QVector<sOEmbedContent> contents);

private:
    void initialiazemOEmbedProviders();
    void webBrowserInstance();
    void lookForEmbedContent(QString* pHtml, QString tag, QString attribute, QList<QUrl>* pList);
    void checkForOEmbed(QString* pHtml);

    WBMainWindow *mMainWindow;

    WBBrowserWindow* mCurrentWebBrowser;

    QWidget* mBrowserWidget;

    WBWebToolsPalette* mToolsCurrentPalette;

    bool mToolsPalettePositionned;

    bool mDownloadViewIsVisible;

    QStringList mOEmbedProviders;           // 存放网页的初始链接

    WBOEmbedParser mOEmbedParser;

};

#endif /* WBWEBCONTROLLER_H_ */

/*

这段代码定义了一个 `WBWebController` 类，继承自 `QObject`，用于管理浏览器的各种功能。以下是每个函数的具体作用分析：

1. **构造函数 (`WBWebController(WBMainWindow* mainWindow)`)**：初始化 `WBWebController` 对象，并接受一个 `WBMainWindow` 指针。

2. **析构函数 (`virtual ~WBWebController()`)**：销毁 `WBWebController` 对象，释放资源。

3. **`void closing()`**：处理关闭事件，可能涉及清理或保存状态。

4. **`void adaptToolBar()`**：调整工具栏设置。

5. **`QPixmap captureCurrentPage()`**：捕获当前网页的图像并返回。

6. **`void showTabAtTop(bool attop)`**：设置选项卡是否显示在顶部。

7. **`void loadUrl(const QUrl& url)`**：加载指定的 URL。

8. **`QWebEngineView* createNewTab()`**：创建并返回一个新的浏览器标签页视图。

9. **`QUrl currentPageUrl() const`**：获取当前页面的 URL。

10. **`void show()`**：显示 `WBWebController` 窗口或视图。

11. **`WBBrowserWindow* GetCurrentWebBrowser()`**：获取当前的浏览器窗口对象。

12. **`void setupPalettes()`**：设置调色板，用于调整界面颜色或风格。

13. **`QPixmap getScreenPixmap()`**：获取屏幕的图像（可能用于截图或录屏）。

14. **信号 (`imageCaptured(const QPixmap& pCapturedPixmap, bool pageMode, const QUrl& source)`)**：当图像被捕获时发射，包含图像、模式和来源 URL。

15. **信号 (`activeWebPageChanged(WBWebView* pWebView)`)**：当活动网页改变时发射，包含新的 `WBWebView` 对象。

16. **槽 (`screenLayoutChanged()`)**：处理屏幕布局更改的事件。

17. **槽 (`setSourceWidget(QWidget* pWidget)`)**：设置源小部件（可能用于捕获或显示）。

18. **槽 (`captureWindow()`)**：捕获整个窗口的图像。

19. **槽 (`customCapture()`)**：进行自定义的捕获操作。

20. **槽 (`toogleMirroring(bool checked)`)**：切换镜像模式。

21. **槽 (`captureoEmbed()`)**：捕获嵌入的内容。

22. **槽 (`captureEduMedia()`)**：捕获教育媒体内容。

23. **槽 (`isOEmbedable(const QUrl& pUrl)`)**：检查指定 URL 是否可以进行 oEmbed 嵌入。

24. **槽 (`hasEmbeddedContent()`)**：检查是否有嵌入内容。

25. **槽 (`getEmbeddableContent()`)**：获取可嵌入的内容。

26. **槽 (`isEduMedia(const QUrl& pUrl)`)**：检查指定 URL 是否属于教育媒体。

27. **槽 (`copy()`)**：复制当前选中的内容。

28. **槽 (`paste()`)**：粘贴内容。

29. **槽 (`cut()`)**：剪切当前选中的内容。

30. **槽 (`triggerWebTools(bool checked)`)**：触发 web 工具功能，基于 `checked` 状态。

31. **私有槽 (`activePageChanged()`)**：处理活动页面更改事件。

32. **私有槽 (`toggleWebTrap(bool checked)`)**：切换 web 捕获模式。

33. **私有槽 (`onOEmbedParsed(QVector<sOEmbedContent> contents)`)**：处理 oEmbed 内容解析后的结果。

34. **私有方法 (`initialiazemOEmbedProviders()`)**：初始化 oEmbed 提供者列表。

35. **私有方法 (`webBrowserInstance()`)**：获取或创建浏览器实例。

36. **私有方法 (`lookForEmbedContent(QString* pHtml, QString tag, QString attribute, QList<QUrl>* pList)`)**：查找 HTML 内容中的嵌入内容。

37. **私有方法 (`checkForOEmbed(QString* pHtml)`)**：检查 HTML 内容是否包含 oEmbed 信息。

整体来说，这个类负责管理网页浏览、截图、工具栏配置、oEmbed 和嵌入内容的处理等功能。

*/
