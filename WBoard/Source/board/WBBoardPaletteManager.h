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

��δ��붨����һ�� `WBBoardPaletteManager` �࣬�̳��� `QObject`���������Ϳ��Ʋ�ͬ�ĵ�ɫ��͹��ߡ��ڴ����У��������Ͳ۵Ĺ������£�

1. **���캯�� (`WBBoardPaletteManager(QWidget* container, WBBoardController* controller)`)**����ʼ�� `WBBoardPaletteManager` ���󣬲�����һ������С������һ������������ָ�롣

2. **�������� (`virtual ~WBBoardPaletteManager()`)**������ `WBBoardPaletteManager` �����ͷ���Դ��

3. **`void setupLayout()`**�����õ�ɫ��Ĳ��֡�

4. **`WBLeftPalette* leftPalette()`**����������ɫ�����

5. **`WBRightPalette* rightPalette()`**�������Ҳ��ɫ�����

6. **`WBStylusPalette* stylusPalette()`**������ Stylus ��ɫ�����

7. **`WBActionPalette *addItemPalette()`**���������������ĵ�ɫ�����

8. **`void showVirtualKeyboard(bool show = true)`**����ʾ������������̡�

9. **`void initPalettesPosAtStartup()`**��������ʱ��ʼ����ɫ���λ�á�

10. **`void refreshPalettes()`**��ˢ�µ�ɫ�����ʾ��

11. **`void setCurrentWebToolsPalette(WBWebToolsPalette *palette)`**�����õ�ǰ�� Web ���ߵ�ɫ�塣

12. **`WBWebToolsPalette* mWebToolsCurrentPalette`**����ǰ�� Web ���ߵ�ɫ�����

13. **`void processPalettersWidget(WBDockPalette *paletter, eWBDockPaletteWidgetMode mode)`**�������ɫ��С����������ģʽ�������á�

14. **`void changeMode(eWBDockPaletteWidgetMode newMode, bool isInit = false)`**�����ĵ�ɫ���ģʽ�������ǳ�ʼ��ģʽ������ģʽ��

15. **`void startDownloads()`**����ʼ���ز�����

16. **`void stopDownloads()`**��ֹͣ���ز�����

17. **�� (`void activeSceneChanged()`)**���������������¼���

18. **�� (`void containerResized()`)**������������С�����¼���

19. **�� (`void addItem(const QUrl& pUrl)`)**����ǰҳ�����ָ�� URL ���

20. **�� (`void addItem(const QPixmap& pPixmap, const QPointF& p = QPointF(0.0, 0.0), qreal scale = 1.0, const QUrl& sourceUrl = QUrl())`)**����ǰҳ�����ָ����ͼ�������λ�á����ź���Դ URL��

21. **�� (`void slot_changeMainMode(WBApplicationController::MainMode)`)**��������ģʽ��

22. **�� (`void slot_changeDesktopMode(bool)`)**����������ģʽ��

23. **�� (`void toggleErasePalette(bool ckecked)`)**���л�������ɫ�����ʾ״̬��

24. **˽�з��� (`void setupPalettes()`)**���������е�ɫ�塣

25. **˽�з��� (`void connectPalettes()`)**�����ӵ�ɫ��������������źŲۡ�

26. **˽�з��� (`void positionFreeDisplayPalette()`)**������������ʾ��ɫ���λ�á�

27. **˽�з��� (`void setupDockPaletteWidgets()`)**������ͣ����ɫ���С������

28. **˽�г�Ա (`QWidget* mContainer`)**������С������

29. **˽�г�Ա (`WBBoardController *mBoardControler`)**�������������

30. **˽�г�Ա (`WBStylusPalette *mStylusPalette`)**��Stylus ��ɫ�����

31. **˽�г�Ա (`WBZoomPalette *mZoomPalette`)**�����ŵ�ɫ�����

32. **˽�г�Ա (`WBStartupHintsPalette* mTipPalette`)**��������ʾ��ɫ�����

33. **˽�г�Ա (`WBLeftPalette* mLeftPalette`)**������ɫ�����

34. **˽�г�Ա (`WBRightPalette* mRightPalette`)**���Ҳ��ɫ�����

35. **˽�г�Ա (`WBBackgroundPalette *mBackgroundsPalette`)**��������ɫ�����

36. **˽�г�Ա (`WBActionPalette *mToolsPalette`)**�����ߵ�ɫ�����

37. **˽�г�Ա (`WBActionPalette* mAddItemPalette`)**��������ɫ�����

38. **˽�г�Ա (`WBActionPalette* mErasePalette`)**��������ɫ�����

39. **˽�г�Ա (`WBActionPalette* mPagePalette`)**��ҳ���ɫ�����

40. **˽�г�Ա (`QUrl mItemUrl`)**����ǰ��� URL��

41. **˽�г�Ա (`QPixmap mPixmap`)**����ǰͼ���

42. **˽�г�Ա (`QPointF mPos`)**����ǰͼ�����λ�á�

43. **˽�г�Ա (`qreal mScaleFactor`)**��ͼ������������ӡ�

44. **˽�г�Ա (`QTime mPageButtonPressedTime`)**����¼ҳ�水ť���µ�ʱ�䡣

45. **˽�г�Ա (`bool mPendingPageButtonPressed`)**����־�Ƿ��д������ҳ�水ť�����¼���

46. **˽�г�Ա (`QTime mZoomButtonPressedTime`)**����¼���Ű�ť���µ�ʱ�䡣

47. **˽�г�Ա (`bool mPendingZoomButtonPressed`)**����־�Ƿ��д���������Ű�ť�����¼���

48. **˽�г�Ա (`QTime mPanButtonPressedTime`)**����¼ƽ�ư�ť���µ�ʱ�䡣

49. **˽�г�Ա (`bool mPendingPanButtonPressed`)**����־�Ƿ��д������ƽ�ư�ť�����¼���

50. **˽�г�Ա (`QTime mEraseButtonPressedTime`)**����¼������ť���µ�ʱ�䡣

51. **˽�г�Ա (`bool mPendingEraseButtonPressed`)**����־�Ƿ��д�����Ĳ�����ť�����¼���

52. **˽�г�Ա (`WBPageNavigationWidget* mpPageNavigWidget`)**��ҳ�浼��С������

53. **˽�г�Ա (`WBCachePropertiesWidget* mpCachePropWidget`)**����������С������

54. **˽�г�Ա (`WBFeaturesWidget *mpFeaturesWidget`)**������С������

55. **˽�г�Ա (`WBDockDownloadWidget* mpDownloadWidget`)**������С������

56. **˽�г�Ա (`bool mDownloadInProgress`)**����־�Ƿ������ؽ����С�

57. **˽�в� (`void changeBackground()`)**�����ı�����

58. **˽�в� (`void toggleBackgroundPalette(bool checked)`)**���л�������ɫ�����ʾ״̬��

59. **˽�в� (`void backgroundPaletteClosed()`)**����������ɫ��ر��¼���

60. **˽�в� (`void toggleStylusPalette(bool checked)`)**���л� Stylus ��ɫ�����ʾ״̬��

61. **˽�в� (`void tooglePodcastPalette(bool checked)`)**���л����͵�ɫ�����ʾ״̬��

62. **˽�в� (`void erasePaletteButtonPressed()`)**�����������ɫ�尴ť�����¼���

63. **˽�в� (`void erasePaletteButtonReleased()`)**�����������ɫ�尴ť�ͷ��¼���

64. **˽�в� (`void erasePaletteClosed()`)**�����������ɫ��ر��¼���

65. **˽�в� (`void togglePagePalette(bool ckecked)`)**���л�ҳ���ɫ�����ʾ״̬��

66. **˽�в� (`void pagePaletteClosed()`)**������ҳ���ɫ��ر��¼���

67. **˽�в� (`void pagePaletteButtonPressed()`)**������ҳ���ɫ�尴ť�����¼���

68. **˽�в� (`void pagePaletteButtonReleased()`)**������ҳ���ɫ�尴ť�ͷ��¼���

69. **˽�в� (`void addItemToCurrentPage()`)**��������ӵ���ǰҳ�档

70. **˽�в� (`void addItemToNewPage()`)**��������ӵ���ҳ�档

71. **˽�в� (`void addItemToLibrary()`)**��������ӵ����С�

72. **˽�в� (`void purchaseLinkActivated(const QString&)`)**�����������Ӽ����¼���

73. **˽�в� (`void linkClicked(const QUrl& url)`)**���������ӵ���¼���

74. **˽�в� (`void zoomButtonPressed()`)**���������Ű�ť�����¼���

75. **˽�в� (`void zoomButtonReleased()`)**���������Ű�ť�ͷ��¼���

76. **˽�в� (`void panButtonPressed()`)**������ƽ�ư�ť�����¼���

77. **˽�в� (`void panButtonReleased()`)**������ƽ�ư�ť�ͷ��¼���

78. **˽�в� (`void changeStylusPaletteOrientation(QVariant var)`)**������ Stylus ��ɫ��ķ���

������ԣ�`WBBoardPaletteManager` �������ֵ�

ɫ�����ʾ��λ�á����ܺ��¼���Ӧ��������������ʾ�����ص�ɫ�塢�����û������Լ�������������Ĺ��ܡ�

*/
