#ifndef WBBOARDCONTROLLER_H_
#define WBBOARDCONTROLLER_H_

/*WBBoardController：主要负责管理和控制与白板相关的各种操作和属性。
定义了一些信号，用于与其他组件进行通信，如通知新页面添加、活动场景改变、缩放改变等。
用于内部的处理逻辑，如更新操作状态、处理自动保存超时、处理应用主模式改变等。
这个类充当了白板应用的核心控制器，协调各种操作、处理状态变化，并与其他相关组件进行交互，以实现白板的各种功能和行为。*/

#include <QtWidgets>

#include <QObject>
#include <QHBoxLayout>
#include <QUndoCommand>

#include "document/WBDocumentContainer.h"
#include "core/WBApplicationController.h"

class WBMainWindow;
class WBApplication;
class WBBoardView;

class WBDocumentController;
class WBMessageWindow;
class WBGraphicsScene;
class WBDocumentProxy;
class WBBlackoutWidget;
class WBToolWidget;
class WBVersion;
class WBSoftwareUpdate;
class WBSoftwareUpdateDialog;
class WBGraphicsMediaItem;
class WBGraphicsWidgetItem;
class WBBoardPaletteManager;
class WBItem;
class WBGraphicsItem;

// 这段代码实现了一个名为 WBBoardController 的类，它继承自 WBDocumentContainer，并且使用了Qt框架的一些特性（例如 Q_OBJECT 宏、信号和槽机制）。
// WBBoardController 类实现了一个控制器，负责管理白板应用中的文档、场景、工具和界面状态。
// 它与 WBDocumentController 类（在之前的代码段中）可能配合工作，提供更完整的白板应用功能。
// 通过信号和槽机制，它能够响应用户操作并更新界面状态，支持多种文档和场景操作，是一个典型的桌面应用程序控制器的实现。
class WBBoardController : public WBDocumentContainer
{
    Q_OBJECT

    public:
        // 定义了保存操作的标志，包括是否显示进度条。
        enum SaveFlag {
            sf_none = 0x0,
            sf_showProgress = 0x1
        };
        // 使用 Q_DECLARE_FLAGS 宏声明的 SaveFlag 的组合。
    Q_DECLARE_FLAGS(SaveFlags, SaveFlag)

    public:
        WBBoardController(WBMainWindow *mainWindow);
        virtual ~WBBoardController();

        void init();
        // 设置布局。
        void setupLayout();

        WBGraphicsScene* activeScene() const;
        int activeSceneIndex() const;
        void setActiveSceneIndex(int i);
        QSize displayViewport();
        QSize controlViewport();
        QRectF controlGeometry();
        void closing();

        int currentPage();

        QWidget* controlContainer()
        {
            return mControlContainer;
        }

        // controlView() 和 displayView()：获取控制视图和显示视图。
        WBBoardView* controlView()
        {
            return mControlView;
        }

        WBBoardView* displayView()
        {
            return mDisplayView;
        }

        WBGraphicsScene* activeScene()
        {
            return mActiveScene;
        }

        // setPenColorOnDarkBackground() 和 setPenColorOnLightBackground()：设置画笔颜色。
        void setPenColorOnDarkBackground(const QColor& pColor)
        {
            if (mPenColorOnDarkBackground == pColor)
                return;

            mPenColorOnDarkBackground = pColor;
            emit penColorChanged();
        }

        void setPenColorOnLightBackground(const QColor& pColor)
        {
            if (mPenColorOnLightBackground == pColor)
                return;

            mPenColorOnLightBackground = pColor;
            emit penColorChanged();
        }

        void setMarkerColorOnDarkBackground(const QColor& pColor)
        {
            mMarkerColorOnDarkBackground = pColor;
        }

        void setMarkerColorOnLightBackground(const QColor& pColor)
        {
            mMarkerColorOnLightBackground = pColor;
        }

        QColor penColorOnDarkBackground()
        {
            return mPenColorOnDarkBackground;
        }

        QColor penColorOnLightBackground()
        {
            return mPenColorOnLightBackground;
        }

        QColor markerColorOnDarkBackground()
        {
            return mMarkerColorOnDarkBackground;
        }

        QColor markerColorOnLightBackground()
        {
            return mMarkerColorOnLightBackground;
        }

        qreal systemScaleFactor()
        {
            return mSystemScaleFactor;
        }

        qreal currentZoom();
        void persistViewPositionOnCurrentScene();
        void persistCurrentScene(bool isAnAutomaticBackup = false, bool forceImmediateSave = false);
        void showNewVersionAvailable(bool automatic, const WBVersion &installedVersion, const WBSoftwareUpdate &softwareUpdate);
        void setBoxing(QRect displayRect);
        void setToolbarTexts();
        static QUrl expandWidgetToTempDir(const QByteArray& pZipedData, const QString& pExtension = QString("wgt"));

        void setPageSize(QSize newSize);
        WBBoardPaletteManager *paletteManager()
        {
            return mPaletteManager;
        }

        void notifyCache(bool visible);
        void notifyPageChanged();
        void displayMetaData(QMap<QString, QString> metadatas);

        void findUniquesItems(const QUndoCommand *parent, QSet<QGraphicsItem *> &itms);
        void ClearUndoStack();

        // setActiveDocumentScene(), moveSceneToIndex(), duplicateScene(), deleteScene()：操作文档场景的设置、移动、复制和删除。
        void setActiveDocumentScene(WBDocumentProxy* pDocumentProxy, int pSceneIndex = 0, bool forceReload = false, bool onImport = false);
        void setActiveDocumentScene(int pSceneIndex);

        void moveSceneToIndex(int source, int target);
        void duplicateScene(int index);
        WBGraphicsItem *duplicateItem(WBItem *item);
        void deleteScene(int index);

        bool cacheIsVisible() {return mCacheWidgetIsEnabled;}

        QString actionGroupText(){ return mActionGroupText;}
        QString actionUngroupText(){ return mActionUngroupText;}

    public slots:
        void showDocumentsDialog();
        void showKeyboard(bool show);
        void togglePodcast(bool checked);
        void blackout();
        void addScene();
        void addScene(WBDocumentProxy* proxy, int sceneIndex, bool replaceActiveIfEmpty = false);
        void addScene(WBGraphicsScene* scene, bool replaceActiveIfEmpty = false);
        void duplicateScene();
        void importPage();
        void clearScene();
        void clearSceneItems();
        void clearSceneAnnotation();
        void clearSceneBackground();

        // zoomIn(), zoomOut(), zoomRestore()：处理视图缩放操作。
        void zoomIn(QPointF scenePoint = QPointF(0,0));
        void zoomOut(QPointF scenePoint = QPointF(0,0));
        void zoomRestore();

        // centerOn(), handScroll()：控制视图的滚动和中心定位。
        void centerRestore();
        void centerOn(QPointF scenePoint = QPointF(0,0));
        void zoom(const qreal ratio, QPointF scenePoint);
        void handScroll(qreal dx, qreal dy);
        void previousScene();
        void nextScene();
        void firstScene();
        void lastScene();
        void downloadURL(const QUrl& url, QString contentSourceUrl = QString(), const QPointF& pPos = QPointF(0.0, 0.0), const QSize& pSize = QSize(), bool isBackground = false, bool internalData = false);
        WBItem *downloadFinished(bool pSuccess, QUrl sourceUrl, QUrl contentUrl, QString pHeader,
                                 QByteArray pData, QPointF pPos, QSize pSize,
                                 bool isBackground = false, bool internalData = false);
        void changeBackground(bool isDark, WBPageBackground pageBackground);
        void setToolCursor(int tool);
        void showMessage(const QString& message, bool showSpinningWheel = false);
        void hideMessage();
        void setDisabled(bool disable);
        void setColorIndex(int pColorIndex);
        void removeTool(WBToolWidget* toolWidget);
        void hide();
        void show();
        void setWidePageSize(bool checked);
        void setRegularPageSize(bool checked);
        void stylusToolChanged(int tool);
        void grabScene(const QRectF& pSceneRect);
        WBGraphicsMediaItem* addVideo(const QUrl& pUrl, bool startPlay, const QPointF& pos, bool bUseSource = false);
        WBGraphicsMediaItem* addAudio(const QUrl& pUrl, bool startPlay, const QPointF& pos, bool bUseSource = false);
        WBGraphicsWidgetItem *addW3cWidget(const QUrl& pUrl, const QPointF& pos);
        void adjustDisplayViews();
        void cut();
        void copy();
        void paste();
        void processMimeData(const QMimeData* pMimeData, const QPointF& pPos);
        void moveGraphicsWidgetToControlView(WBGraphicsWidgetItem* graphicWidget);
        void moveToolWidgetToScene(WBToolWidget* toolWidget);
        void addItem();

        void freezeW3CWidgets(bool freeze);
        void freezeW3CWidget(QGraphicsItem* item, bool freeze);
        void startScript();
        void stopScript();

        // saveData()：保存数据操作，支持不同的保存标志。
        void saveData(SaveFlags fls = sf_none);

        //void regenerateThumbnails();

    signals:
        // 信号 newPageAdded(), activeSceneChanged(), zoomChanged() 等用于通知界面状态变化或特定操作完成。
        void newPageAdded();
        void activeSceneChanged();
        void zoomChanged(qreal pZoomFactor);
        void penColorChanged();
        void controlViewportChanged();
        void backgroundChanged();
        void cacheEnabled();
        void documentReorganized(int index);
        void displayMetadata(QMap<QString, QString> metadata);
        void pageSelectionChanged(int index);
        void centerOnThumbnailRequired(int index);
        void npapiWidgetCreated(const QString &Url);

    protected:
        // 设置视图。
        void setupViews();
        void setupToolbar();
        void connectToolbar();
        void initToolbarTexts();
        void updateActionStates();
        void updateSystemScaleFactor();
        QString truncate(QString text, int maxWidth);

    protected slots:
        void selectionChanged();
        void undoRedoStateChange(bool canUndo);
        void documentSceneChanged(WBDocumentProxy* proxy, int pIndex);

    private slots:
        void autosaveTimeout();
        void appMainModeChanged(WBApplicationController::MainMode);

    private:
        void initBackgroundGridSize();
        void updatePageSizeState();
        void saveViewState();
        int autosaveTimeoutFromSettings();

        // 主窗口指针，用于界面操作和与主程序的交互。
        WBMainWindow *mMainWindow;

        // 当前活跃的场景和其索引。
        WBGraphicsScene* mActiveScene;
        int mActiveSceneIndex;

        // 调色板管理器。
        WBBoardPaletteManager *mPaletteManager;

        WBSoftwareUpdateDialog *mSoftwareUpdateDialog;
        WBMessageWindow *mMessageWindow;

        // 控制视图和显示视图。
        WBBoardView *mControlView;
        WBBoardView *mDisplayView;
        
        // 控制界面的容器和布局。
        QWidget *mControlContainer;
        QHBoxLayout *mControlLayout;


        qreal mZoomFactor;
        bool mIsClosing;

        // 在不同背景下的画笔颜色。
        QColor mPenColorOnDarkBackground;
        QColor mPenColorOnLightBackground;

        // 在不同背景下的标记颜色。
        QColor mMarkerColorOnDarkBackground;
        QColor mMarkerColorOnLightBackground;

        // 系统缩放因子。
        qreal mSystemScaleFactor;

        bool mCleanupDone;
        QMap<QAction*, QPair<QString, QString> > mActionTexts;
        bool mCacheWidgetIsEnabled;
        QGraphicsItem* mLastCreatedItem;
        int mDeletingSceneIndex;
        int mMovingSceneIndex;
        QString mActionGroupText;
        QString mActionUngroupText;

        // 自动保存定时器。
        QTimer *mAutosaveTimer;

        // 以上其他成员变量用于管理界面状态、动作文本、缓存状态等。

    private slots:
        void stylusToolDoubleClicked(int tool);
        void boardViewResized(QResizeEvent* event);
        void documentWillBeDeleted(WBDocumentProxy* pProxy);
        void updateBackgroundActionsState(bool isDark, WBPageBackground pageBackground);
        void colorPaletteChanged();
        void libraryDialogClosed(int ret);
        void lastWindowClosed();
        void onDownloadModalFinished();
};
#endif /* WBBOARDCONTROLLER_H_ */

/*

这个`WBBoardController`类是一个在Qt框架中实现的控制器类，主要用于管理和操作一个电子白板（或类似的应用程序）中的场景和视图。以下是每个函数的具体功能解释：

1. **构造函数和析构函数**:
   - `WBBoardController(WBMainWindow *mainWindow)`: 初始化控制器，并将`mainWindow`作为主窗口传入。
   - `virtual ~WBBoardController()`: 析构函数，用于清理资源。

2. **初始化和布局设置**:
   - `void init()`: 初始化控制器。
   - `void setupLayout()`: 设置控制器的布局。

3. **场景和视图操作**:
   - `WBGraphicsScene* activeScene() const`: 获取当前活动场景。
   - `int activeSceneIndex() const`: 获取当前活动场景的索引。
   - `void setActiveSceneIndex(int i)`: 设置当前活动场景的索引。
   - `QSize displayViewport()`, `QSize controlViewport()`, `QRectF controlGeometry()`: 获取视图的大小和几何信息。
   - `void closing()`: 处理关闭事件。

4. **页面和视图管理**:
   - `int currentPage()`: 获取当前页面编号。
   - `void persistViewPositionOnCurrentScene()`: 保存当前场景的视图位置。
   - `void persistCurrentScene(bool isAnAutomaticBackup = false, bool forceImmediateSave = false)`: 保存当前场景，支持自动备份和强制保存。
   - `void showNewVersionAvailable(bool automatic, const WBVersion &installedVersion, const WBSoftwareUpdate &softwareUpdate)`: 显示新版本可用的提示。

5. **视图和控制操作**:
   - `WBBoardView* controlView()`, `WBBoardView* displayView()`: 获取控制视图和显示视图。
   - `QWidget* controlContainer()`: 获取控制容器。
   - `void setPenColorOnDarkBackground(const QColor& pColor)`, `void setPenColorOnLightBackground(const QColor& pColor)`: 设置不同背景下的画笔颜色。
   - `void setMarkerColorOnDarkBackground(const QColor& pColor)`, `void setMarkerColorOnLightBackground(const QColor& pColor)`: 设置不同背景下的标记颜色。
   - `qreal systemScaleFactor()`: 获取系统缩放因子。
   - `void setPageSize(QSize newSize)`: 设置页面大小。

6. **工具和状态**:
   - `void setToolCursor(int tool)`: 设置工具光标。
   - `void showMessage(const QString& message, bool showSpinningWheel = false)`, `void hideMessage()`: 显示或隐藏消息。
   - `void setDisabled(bool disable)`: 启用或禁用控件。
   - `void setColorIndex(int pColorIndex)`: 设置颜色索引。

7. **场景操作**:
   - `void setActiveDocumentScene(WBDocumentProxy* pDocumentProxy, int pSceneIndex = 0, bool forceReload = false, bool onImport = false)`: 设置活动文档场景。
   - `void moveSceneToIndex(int source, int target)`, `void duplicateScene(int index)`, `void deleteScene(int index)`: 移动、复制或删除场景。
   - `WBGraphicsItem *duplicateItem(WBItem *item)`: 复制图形项。
   - `void addScene()`, `void addScene(WBDocumentProxy* proxy, int sceneIndex, bool replaceActiveIfEmpty = false)`, `void addScene(WBGraphicsScene* scene, bool replaceActiveIfEmpty = false)`: 添加新场景。

8. **视图操作**:
   - `void zoomIn(QPointF scenePoint = QPointF(0,0))`, `void zoomOut(QPointF scenePoint = QPointF(0,0))`, `void zoomRestore()`: 缩放视图。
   - `void centerRestore()`, `void centerOn(QPointF scenePoint = QPointF(0,0))`, `void zoom(const qreal ratio, QPointF scenePoint)`, `void handScroll(qreal dx, qreal dy)`: 控制视图中心和滚动。

9. **文件和数据处理**:
   - `void downloadURL(const QUrl& url, QString contentSourceUrl = QString(), const QPointF& pPos = QPointF(0.0, 0.0), const QSize& pSize = QSize(), bool isBackground = false, bool internalData = false)`: 下载文件。
   - `WBItem *downloadFinished(bool pSuccess, QUrl sourceUrl, QUrl contentUrl, QString pHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isBackground = false, bool internalData = false)`: 处理下载完成后的操作。
   - `void processMimeData(const QMimeData* pMimeData, const QPointF& pPos)`: 处理 MIME 数据。

10. **工具和脚本**:
    - `void startScript()`, `void stopScript()`: 启动或停止脚本。
    - `void freezeW3CWidgets(bool freeze)`, `void freezeW3CWidget(QGraphicsItem* item, bool freeze)`: 冻结或解冻 W3C 小部件。

11. **缓存和状态通知**:
    - `void notifyCache(bool visible)`: 通知缓存状态。
    - `void notifyPageChanged()`: 通知页面更改。
    - `void displayMetaData(QMap<QString, QString> metadatas)`: 显示元数据。

12. **信号和槽**:
    - **信号**用于通知界面状态变化，如`newPageAdded()`, `activeSceneChanged()`, `zoomChanged(qreal pZoomFactor)`等。
    - **槽**处理界面交互和内部状态变化，如`showDocumentsDialog()`, `selectionChanged()`, `autosaveTimeout()`等。

整体而言，`WBBoardController`负责管理电子白板的用户界面、场景、视图、工具、页面和文件处理等各种操作。

*/