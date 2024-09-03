#ifndef WBBOARDCONTROLLER_H_
#define WBBOARDCONTROLLER_H_

/*WBBoardController����Ҫ�������Ϳ�����װ���صĸ��ֲ��������ԡ�
������һЩ�źţ������������������ͨ�ţ���֪ͨ��ҳ����ӡ�������ı䡢���Ÿı�ȡ�
�����ڲ��Ĵ����߼�������²���״̬�������Զ����泬ʱ������Ӧ����ģʽ�ı�ȡ�
�����䵱�˰װ�Ӧ�õĺ��Ŀ�������Э�����ֲ���������״̬�仯�������������������н�������ʵ�ְװ�ĸ��ֹ��ܺ���Ϊ��*/

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

// ��δ���ʵ����һ����Ϊ WBBoardController ���࣬���̳��� WBDocumentContainer������ʹ����Qt��ܵ�һЩ���ԣ����� Q_OBJECT �ꡢ�źźͲۻ��ƣ���
// WBBoardController ��ʵ����һ�����������������װ�Ӧ���е��ĵ������������ߺͽ���״̬��
// ���� WBDocumentController �ࣨ��֮ǰ�Ĵ�����У�������Ϲ������ṩ�������İװ�Ӧ�ù��ܡ�
// ͨ���źźͲۻ��ƣ����ܹ���Ӧ�û����������½���״̬��֧�ֶ����ĵ��ͳ�����������һ�����͵�����Ӧ�ó����������ʵ�֡�
class WBBoardController : public WBDocumentContainer
{
    Q_OBJECT

    public:
        // �����˱�������ı�־�������Ƿ���ʾ��������
        enum SaveFlag {
            sf_none = 0x0,
            sf_showProgress = 0x1
        };
        // ʹ�� Q_DECLARE_FLAGS �������� SaveFlag ����ϡ�
    Q_DECLARE_FLAGS(SaveFlags, SaveFlag)

    public:
        WBBoardController(WBMainWindow *mainWindow);
        virtual ~WBBoardController();

        void init();
        // ���ò��֡�
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

        // controlView() �� displayView()����ȡ������ͼ����ʾ��ͼ��
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

        // setPenColorOnDarkBackground() �� setPenColorOnLightBackground()�����û�����ɫ��
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

        // setActiveDocumentScene(), moveSceneToIndex(), duplicateScene(), deleteScene()�������ĵ����������á��ƶ������ƺ�ɾ����
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

        // zoomIn(), zoomOut(), zoomRestore()��������ͼ���Ų�����
        void zoomIn(QPointF scenePoint = QPointF(0,0));
        void zoomOut(QPointF scenePoint = QPointF(0,0));
        void zoomRestore();

        // centerOn(), handScroll()��������ͼ�Ĺ��������Ķ�λ��
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

        // saveData()���������ݲ�����֧�ֲ�ͬ�ı����־��
        void saveData(SaveFlags fls = sf_none);

        //void regenerateThumbnails();

    signals:
        // �ź� newPageAdded(), activeSceneChanged(), zoomChanged() ������֪ͨ����״̬�仯���ض�������ɡ�
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
        // ������ͼ��
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

        // ������ָ�룬���ڽ����������������Ľ�����
        WBMainWindow *mMainWindow;

        // ��ǰ��Ծ�ĳ�������������
        WBGraphicsScene* mActiveScene;
        int mActiveSceneIndex;

        // ��ɫ���������
        WBBoardPaletteManager *mPaletteManager;

        WBSoftwareUpdateDialog *mSoftwareUpdateDialog;
        WBMessageWindow *mMessageWindow;

        // ������ͼ����ʾ��ͼ��
        WBBoardView *mControlView;
        WBBoardView *mDisplayView;
        
        // ���ƽ���������Ͳ��֡�
        QWidget *mControlContainer;
        QHBoxLayout *mControlLayout;


        qreal mZoomFactor;
        bool mIsClosing;

        // �ڲ�ͬ�����µĻ�����ɫ��
        QColor mPenColorOnDarkBackground;
        QColor mPenColorOnLightBackground;

        // �ڲ�ͬ�����µı����ɫ��
        QColor mMarkerColorOnDarkBackground;
        QColor mMarkerColorOnLightBackground;

        // ϵͳ�������ӡ�
        qreal mSystemScaleFactor;

        bool mCleanupDone;
        QMap<QAction*, QPair<QString, QString> > mActionTexts;
        bool mCacheWidgetIsEnabled;
        QGraphicsItem* mLastCreatedItem;
        int mDeletingSceneIndex;
        int mMovingSceneIndex;
        QString mActionGroupText;
        QString mActionUngroupText;

        // �Զ����涨ʱ����
        QTimer *mAutosaveTimer;

        // ����������Ա�������ڹ������״̬�������ı�������״̬�ȡ�

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

���`WBBoardController`����һ����Qt�����ʵ�ֵĿ������࣬��Ҫ���ڹ���Ͳ���һ�����Ӱװ壨�����Ƶ�Ӧ�ó����еĳ�������ͼ��������ÿ�������ľ��幦�ܽ��ͣ�

1. **���캯������������**:
   - `WBBoardController(WBMainWindow *mainWindow)`: ��ʼ��������������`mainWindow`��Ϊ�����ڴ��롣
   - `virtual ~WBBoardController()`: ��������������������Դ��

2. **��ʼ���Ͳ�������**:
   - `void init()`: ��ʼ����������
   - `void setupLayout()`: ���ÿ������Ĳ��֡�

3. **��������ͼ����**:
   - `WBGraphicsScene* activeScene() const`: ��ȡ��ǰ�������
   - `int activeSceneIndex() const`: ��ȡ��ǰ�������������
   - `void setActiveSceneIndex(int i)`: ���õ�ǰ�������������
   - `QSize displayViewport()`, `QSize controlViewport()`, `QRectF controlGeometry()`: ��ȡ��ͼ�Ĵ�С�ͼ�����Ϣ��
   - `void closing()`: ����ر��¼���

4. **ҳ�����ͼ����**:
   - `int currentPage()`: ��ȡ��ǰҳ���š�
   - `void persistViewPositionOnCurrentScene()`: ���浱ǰ��������ͼλ�á�
   - `void persistCurrentScene(bool isAnAutomaticBackup = false, bool forceImmediateSave = false)`: ���浱ǰ������֧���Զ����ݺ�ǿ�Ʊ��档
   - `void showNewVersionAvailable(bool automatic, const WBVersion &installedVersion, const WBSoftwareUpdate &softwareUpdate)`: ��ʾ�°汾���õ���ʾ��

5. **��ͼ�Ϳ��Ʋ���**:
   - `WBBoardView* controlView()`, `WBBoardView* displayView()`: ��ȡ������ͼ����ʾ��ͼ��
   - `QWidget* controlContainer()`: ��ȡ����������
   - `void setPenColorOnDarkBackground(const QColor& pColor)`, `void setPenColorOnLightBackground(const QColor& pColor)`: ���ò�ͬ�����µĻ�����ɫ��
   - `void setMarkerColorOnDarkBackground(const QColor& pColor)`, `void setMarkerColorOnLightBackground(const QColor& pColor)`: ���ò�ͬ�����µı����ɫ��
   - `qreal systemScaleFactor()`: ��ȡϵͳ�������ӡ�
   - `void setPageSize(QSize newSize)`: ����ҳ���С��

6. **���ߺ�״̬**:
   - `void setToolCursor(int tool)`: ���ù��߹�ꡣ
   - `void showMessage(const QString& message, bool showSpinningWheel = false)`, `void hideMessage()`: ��ʾ��������Ϣ��
   - `void setDisabled(bool disable)`: ���û���ÿؼ���
   - `void setColorIndex(int pColorIndex)`: ������ɫ������

7. **��������**:
   - `void setActiveDocumentScene(WBDocumentProxy* pDocumentProxy, int pSceneIndex = 0, bool forceReload = false, bool onImport = false)`: ���û�ĵ�������
   - `void moveSceneToIndex(int source, int target)`, `void duplicateScene(int index)`, `void deleteScene(int index)`: �ƶ������ƻ�ɾ��������
   - `WBGraphicsItem *duplicateItem(WBItem *item)`: ����ͼ���
   - `void addScene()`, `void addScene(WBDocumentProxy* proxy, int sceneIndex, bool replaceActiveIfEmpty = false)`, `void addScene(WBGraphicsScene* scene, bool replaceActiveIfEmpty = false)`: ����³�����

8. **��ͼ����**:
   - `void zoomIn(QPointF scenePoint = QPointF(0,0))`, `void zoomOut(QPointF scenePoint = QPointF(0,0))`, `void zoomRestore()`: ������ͼ��
   - `void centerRestore()`, `void centerOn(QPointF scenePoint = QPointF(0,0))`, `void zoom(const qreal ratio, QPointF scenePoint)`, `void handScroll(qreal dx, qreal dy)`: ������ͼ���ĺ͹�����

9. **�ļ������ݴ���**:
   - `void downloadURL(const QUrl& url, QString contentSourceUrl = QString(), const QPointF& pPos = QPointF(0.0, 0.0), const QSize& pSize = QSize(), bool isBackground = false, bool internalData = false)`: �����ļ���
   - `WBItem *downloadFinished(bool pSuccess, QUrl sourceUrl, QUrl contentUrl, QString pHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isBackground = false, bool internalData = false)`: ����������ɺ�Ĳ�����
   - `void processMimeData(const QMimeData* pMimeData, const QPointF& pPos)`: ���� MIME ���ݡ�

10. **���ߺͽű�**:
    - `void startScript()`, `void stopScript()`: ������ֹͣ�ű���
    - `void freezeW3CWidgets(bool freeze)`, `void freezeW3CWidget(QGraphicsItem* item, bool freeze)`: �����ⶳ W3C С������

11. **�����״̬֪ͨ**:
    - `void notifyCache(bool visible)`: ֪ͨ����״̬��
    - `void notifyPageChanged()`: ֪ͨҳ����ġ�
    - `void displayMetaData(QMap<QString, QString> metadatas)`: ��ʾԪ���ݡ�

12. **�źźͲ�**:
    - **�ź�**����֪ͨ����״̬�仯����`newPageAdded()`, `activeSceneChanged()`, `zoomChanged(qreal pZoomFactor)`�ȡ�
    - **��**������潻�����ڲ�״̬�仯����`showDocumentsDialog()`, `selectionChanged()`, `autosaveTimeout()`�ȡ�

������ԣ�`WBBoardController`���������Ӱװ���û����桢��������ͼ�����ߡ�ҳ����ļ�����ȸ��ֲ�����

*/