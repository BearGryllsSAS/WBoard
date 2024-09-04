#ifndef WBBOARDPALETTEMANAGER_H_
#define WBBOARDPALETTEMANAGER_H_

#include <QtWidgets>
#include <QtWebEngine>

#include "gui/WBLeftPalette.h"
#include "gui/WBRightPalette.h"
#include "gui/WBPageNavigationWidget.h"
#include "gui/WBCachePropertiesWidget.h"
#include "gui/WBDockDownloadWidget.h"
#include "core/WBApplicationController.h"
#include "gui/WBFeaturesWidget.h"


class WBWebToolsPalette;
class WBStylusPalette;
class WBClockPalette;
class WBPageNumberPalette;
class WBZoomPalette;
class WBActionPalette;
class WBBackgroundPalette;
class WBBoardController;
class WBServerXMLHttpRequest;
class WBKeyboardPalette;
class WBMainWindow;
class WBApplicationController;
class WBStartupHintsPalette;

class WBBoardPaletteManager : public QObject
{
    Q_OBJECT

    public:
        WBBoardPaletteManager(QWidget* container, WBBoardController* controller);
        virtual ~WBBoardPaletteManager();

        void setupLayout();
        WBLeftPalette* leftPalette(){return mLeftPalette;}
        WBRightPalette* rightPalette(){return mRightPalette;}
        WBStylusPalette* stylusPalette(){return mStylusPalette;}
        WBActionPalette *addItemPalette() {return mAddItemPalette;}
        void showVirtualKeyboard(bool show = true);
        void initPalettesPosAtStartup();
        void refreshPalettes();

        WBKeyboardPalette *mKeyboardPalette;

        void setCurrentWebToolsPalette(WBWebToolsPalette *palette) {mWebToolsCurrentPalette = palette;}
        WBWebToolsPalette* mWebToolsCurrentPalette;

        void processPalettersWidget(WBDockPalette *paletter, eWBDockPaletteWidgetMode mode);
        void changeMode(eWBDockPaletteWidgetMode newMode, bool isInit = false);
        void startDownloads();
        void stopDownloads();

    public slots:
        void activeSceneChanged();
        void containerResized();
        void addItem(const QUrl& pUrl);
        void addItem(const QPixmap& pPixmap, const QPointF& p = QPointF(0.0, 0.0), qreal scale = 1.0, const QUrl& sourceUrl = QUrl());

        void slot_changeMainMode(WBApplicationController::MainMode);
        void slot_changeDesktopMode(bool);

        void toggleErasePalette(bool ckecked);
		
	private:
        void setupPalettes();
        void connectPalettes();
        void positionFreeDisplayPalette();
        void setupDockPaletteWidgets();

        QWidget* mContainer;
        WBBoardController *mBoardControler;

        WBStylusPalette *mStylusPalette;

        WBZoomPalette *mZoomPalette;
	    WBStartupHintsPalette* mTipPalette;
        WBLeftPalette* mLeftPalette;
        WBRightPalette* mRightPalette;

        WBBackgroundPalette *mBackgroundsPalette;
        WBActionPalette *mToolsPalette;
        WBActionPalette* mAddItemPalette;
        WBActionPalette* mErasePalette;
        WBActionPalette* mPagePalette;

        QUrl mItemUrl;
        QPixmap mPixmap;
        QPointF mPos;
        qreal mScaleFactor;

        QTime mPageButtonPressedTime;
        bool mPendingPageButtonPressed;

        QTime mZoomButtonPressedTime;
        bool mPendingZoomButtonPressed;

        QTime mPanButtonPressedTime;
        bool mPendingPanButtonPressed;

        QTime mEraseButtonPressedTime;
        bool mPendingEraseButtonPressed;

        WBPageNavigationWidget* mpPageNavigWidget;

        WBCachePropertiesWidget* mpCachePropWidget;

        WBFeaturesWidget *mpFeaturesWidget;

        WBDockDownloadWidget* mpDownloadWidget;

        bool mDownloadInProgress;

    private slots:
        void changeBackground();

        void toggleBackgroundPalette(bool checked);
        void backgroundPaletteClosed();

        void toggleStylusPalette(bool checked);
        void tooglePodcastPalette(bool checked);

        void erasePaletteButtonPressed();
        void erasePaletteButtonReleased();

        void erasePaletteClosed();

        void togglePagePalette(bool ckecked);
        void pagePaletteClosed();

        void pagePaletteButtonPressed();
        void pagePaletteButtonReleased();

        void addItemToCurrentPage();
        void addItemToNewPage();
        void addItemToLibrary();

        void purchaseLinkActivated(const QString&);

        void linkClicked(const QUrl& url);

        void zoomButtonPressed();
        void zoomButtonReleased();
        void panButtonPressed();
        void panButtonReleased();

        void changeStylusPaletteOrientation(QVariant var);
};

#endif /* WBBOARDPALETTEMANAGER_H_ */

/*

这段代码定义了一个 `WBBoardPaletteManager` 类，继承自 `QObject`，负责管理和控制不同的调色板和工具。在代码中，各函数和槽的功能如下：

1. **构造函数 (`WBBoardPaletteManager(QWidget* container, WBBoardController* controller)`)**：初始化 `WBBoardPaletteManager` 对象，并接受一个容器小部件和一个控制器对象指针。

2. **析构函数 (`virtual ~WBBoardPaletteManager()`)**：销毁 `WBBoardPaletteManager` 对象，释放资源。

3. **`void setupLayout()`**：设置调色板的布局。

4. **`WBLeftPalette* leftPalette()`**：返回左侧调色板对象。

5. **`WBRightPalette* rightPalette()`**：返回右侧调色板对象。

6. **`WBStylusPalette* stylusPalette()`**：返回 Stylus 调色板对象。

7. **`WBActionPalette *addItemPalette()`**：返回用于添加项的调色板对象。

8. **`void showVirtualKeyboard(bool show = true)`**：显示或隐藏虚拟键盘。

9. **`void initPalettesPosAtStartup()`**：在启动时初始化调色板的位置。

10. **`void refreshPalettes()`**：刷新调色板的显示。

11. **`void setCurrentWebToolsPalette(WBWebToolsPalette *palette)`**：设置当前的 Web 工具调色板。

12. **`WBWebToolsPalette* mWebToolsCurrentPalette`**：当前的 Web 工具调色板对象。

13. **`void processPalettersWidget(WBDockPalette *paletter, eWBDockPaletteWidgetMode mode)`**：处理调色板小部件，根据模式进行配置。

14. **`void changeMode(eWBDockPaletteWidgetMode newMode, bool isInit = false)`**：更改调色板的模式，可以是初始化模式或其他模式。

15. **`void startDownloads()`**：开始下载操作。

16. **`void stopDownloads()`**：停止下载操作。

17. **槽 (`void activeSceneChanged()`)**：处理活动场景更改事件。

18. **槽 (`void containerResized()`)**：处理容器大小调整事件。

19. **槽 (`void addItem(const QUrl& pUrl)`)**：向当前页面添加指定 URL 的项。

20. **槽 (`void addItem(const QPixmap& pPixmap, const QPointF& p = QPointF(0.0, 0.0), qreal scale = 1.0, const QUrl& sourceUrl = QUrl())`)**：向当前页面添加指定的图像项，设置位置、缩放和来源 URL。

21. **槽 (`void slot_changeMainMode(WBApplicationController::MainMode)`)**：更改主模式。

22. **槽 (`void slot_changeDesktopMode(bool)`)**：更改桌面模式。

23. **槽 (`void toggleErasePalette(bool ckecked)`)**：切换擦除调色板的显示状态。

24. **私有方法 (`void setupPalettes()`)**：设置所有调色板。

25. **私有方法 (`void connectPalettes()`)**：连接调色板与其他组件的信号槽。

26. **私有方法 (`void positionFreeDisplayPalette()`)**：设置自由显示调色板的位置。

27. **私有方法 (`void setupDockPaletteWidgets()`)**：设置停靠调色板的小部件。

28. **私有成员 (`QWidget* mContainer`)**：容器小部件。

29. **私有成员 (`WBBoardController *mBoardControler`)**：板控制器对象。

30. **私有成员 (`WBStylusPalette *mStylusPalette`)**：Stylus 调色板对象。

31. **私有成员 (`WBZoomPalette *mZoomPalette`)**：缩放调色板对象。

32. **私有成员 (`WBStartupHintsPalette* mTipPalette`)**：启动提示调色板对象。

33. **私有成员 (`WBLeftPalette* mLeftPalette`)**：左侧调色板对象。

34. **私有成员 (`WBRightPalette* mRightPalette`)**：右侧调色板对象。

35. **私有成员 (`WBBackgroundPalette *mBackgroundsPalette`)**：背景调色板对象。

36. **私有成员 (`WBActionPalette *mToolsPalette`)**：工具调色板对象。

37. **私有成员 (`WBActionPalette* mAddItemPalette`)**：添加项调色板对象。

38. **私有成员 (`WBActionPalette* mErasePalette`)**：擦除调色板对象。

39. **私有成员 (`WBActionPalette* mPagePalette`)**：页面调色板对象。

40. **私有成员 (`QUrl mItemUrl`)**：当前项的 URL。

41. **私有成员 (`QPixmap mPixmap`)**：当前图像项。

42. **私有成员 (`QPointF mPos`)**：当前图像项的位置。

43. **私有成员 (`qreal mScaleFactor`)**：图像项的缩放因子。

44. **私有成员 (`QTime mPageButtonPressedTime`)**：记录页面按钮按下的时间。

45. **私有成员 (`bool mPendingPageButtonPressed`)**：标志是否有待处理的页面按钮按下事件。

46. **私有成员 (`QTime mZoomButtonPressedTime`)**：记录缩放按钮按下的时间。

47. **私有成员 (`bool mPendingZoomButtonPressed`)**：标志是否有待处理的缩放按钮按下事件。

48. **私有成员 (`QTime mPanButtonPressedTime`)**：记录平移按钮按下的时间。

49. **私有成员 (`bool mPendingPanButtonPressed`)**：标志是否有待处理的平移按钮按下事件。

50. **私有成员 (`QTime mEraseButtonPressedTime`)**：记录擦除按钮按下的时间。

51. **私有成员 (`bool mPendingEraseButtonPressed`)**：标志是否有待处理的擦除按钮按下事件。

52. **私有成员 (`WBPageNavigationWidget* mpPageNavigWidget`)**：页面导航小部件。

53. **私有成员 (`WBCachePropertiesWidget* mpCachePropWidget`)**：缓存属性小部件。

54. **私有成员 (`WBFeaturesWidget *mpFeaturesWidget`)**：功能小部件。

55. **私有成员 (`WBDockDownloadWidget* mpDownloadWidget`)**：下载小部件。

56. **私有成员 (`bool mDownloadInProgress`)**：标志是否有下载进行中。

57. **私有槽 (`void changeBackground()`)**：更改背景。

58. **私有槽 (`void toggleBackgroundPalette(bool checked)`)**：切换背景调色板的显示状态。

59. **私有槽 (`void backgroundPaletteClosed()`)**：处理背景调色板关闭事件。

60. **私有槽 (`void toggleStylusPalette(bool checked)`)**：切换 Stylus 调色板的显示状态。

61. **私有槽 (`void tooglePodcastPalette(bool checked)`)**：切换播客调色板的显示状态。

62. **私有槽 (`void erasePaletteButtonPressed()`)**：处理擦除调色板按钮按下事件。

63. **私有槽 (`void erasePaletteButtonReleased()`)**：处理擦除调色板按钮释放事件。

64. **私有槽 (`void erasePaletteClosed()`)**：处理擦除调色板关闭事件。

65. **私有槽 (`void togglePagePalette(bool ckecked)`)**：切换页面调色板的显示状态。

66. **私有槽 (`void pagePaletteClosed()`)**：处理页面调色板关闭事件。

67. **私有槽 (`void pagePaletteButtonPressed()`)**：处理页面调色板按钮按下事件。

68. **私有槽 (`void pagePaletteButtonReleased()`)**：处理页面调色板按钮释放事件。

69. **私有槽 (`void addItemToCurrentPage()`)**：将项添加到当前页面。

70. **私有槽 (`void addItemToNewPage()`)**：将项添加到新页面。

71. **私有槽 (`void addItemToLibrary()`)**：将项添加到库中。

72. **私有槽 (`void purchaseLinkActivated(const QString&)`)**：处理购买链接激活事件。

73. **私有槽 (`void linkClicked(const QUrl& url)`)**：处理链接点击事件。

74. **私有槽 (`void zoomButtonPressed()`)**：处理缩放按钮按下事件。

75. **私有槽 (`void zoomButtonReleased()`)**：处理缩放按钮释放事件。

76. **私有槽 (`void panButtonPressed()`)**：处理平移按钮按下事件。

77. **私有槽 (`void panButtonReleased()`)**：处理平移按钮释放事件。

78. **私有槽 (`void changeStylusPaletteOrientation(QVariant var)`)**：更改 Stylus 调色板的方向。

整体而言，`WBBoardPaletteManager` 类管理各种调

色板的显示、位置、功能和事件响应。它包括用于显示和隐藏调色板、处理用户交互以及管理下载任务的功能。

*/
