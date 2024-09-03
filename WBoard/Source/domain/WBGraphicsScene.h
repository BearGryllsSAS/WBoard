#ifndef WBGRAPHICSSCENE_H_
#define WBGRAPHICSSCENE_H_

#include <QtWidgets>

#include "frameworks/WBCoreGraphicsScene.h"

#include "core/WB.h"

#include "WBItem.h"
#include "tools/WBGraphicsCurtainItem.h"

class WBGraphicsPixmapItem;
class WBGraphicsProxyWidget;
class WBGraphicsSvgItem;
class WBGraphicsPolygonItem;
class WBGraphicsMediaItem;
class WBGraphicsWidgetItem;
class WBGraphicsW3CWidgetItem;
class WBGraphicsAppleWidgetItem;
class WBToolWidget;
class WBGraphicsPDFItem;
class WBGraphicsTextItem;
class WBGraphicsRuler;
class WBGraphicsProtractor;
class WBGraphicsCompass;
class WBDocumentProxy;
class WBGraphicsCurtainItem;
class WBGraphicsStroke;
class WBMagnifierParams;
class WBMagnifier;
class WBGraphicsCache;
class WBGraphicsGroupContainerItem;
class WBSelectionFrame;
class WBBoardView;

const double PI = 4.0 * atan(1.0);

class WBZLayerController : public QObject
{
    Q_OBJECT

public:
    struct ItemLayerTypeData {
        ItemLayerTypeData() : bottomLimit(0), topLimit(0), curValue(0), incStep(1) {}
        ItemLayerTypeData(qreal bot, qreal top, qreal increment = 1) : bottomLimit(bot), topLimit(top), curValue(bot), incStep(increment) {}
        qreal bottomLimit;
        qreal topLimit;
        qreal curValue;
        qreal incStep;
    };

    enum moveDestination {
        up,
        down,
        top,
        bottom
    };

    typedef QMap<itemLayerType::Enum, ItemLayerTypeData> ScopeMap;

    WBZLayerController(QGraphicsScene *scene);

    qreal getBottomLimit(itemLayerType::Enum key) const {return scopeMap.value(key).bottomLimit;}
    qreal getTopLimit(itemLayerType::Enum key) const {return scopeMap.value(key).topLimit;}
    bool validLayerType(itemLayerType::Enum key) const {return scopeMap.contains(key);}

    static qreal errorNum() {return errorNumber;}

    qreal generateZLevel(itemLayerType::Enum key);
    qreal generateZLevel(QGraphicsItem *item);

    qreal changeZLevelTo(QGraphicsItem *item, moveDestination dest);
    itemLayerType::Enum typeForData(QGraphicsItem *item) const;
    void setLayerType(QGraphicsItem *pItem, itemLayerType::Enum pNewType);
    void shiftStoredZValue(QGraphicsItem *item, qreal zValue);

    bool zLevelAvailable(qreal z);

private:
    ScopeMap scopeMap;
    static qreal errorNumber;
    QGraphicsScene *mScene;
};

class WBGraphicsScene: public WBCoreGraphicsScene, public WBItem
{
    Q_OBJECT

    public:
		enum clearCase {
			clearItemsAndAnnotations = 0, 
			clearAnnotations, 
			clearItems,
			clearBackground
		};

        void enableUndoRedoStack(){mUndoRedoStackEnabled = true;}
        void setURStackEnable(bool enable){mUndoRedoStackEnabled = enable;}
        bool isURStackIsEnabled(){return mUndoRedoStackEnabled;}

        WBGraphicsScene(WBDocumentProxy *parent, bool enableUndoRedoStack = true);
        virtual ~WBGraphicsScene();

        virtual WBItem* deepCopy() const;

        virtual void copyItemParameters(WBItem *copy) const {Q_UNUSED(copy);}

        WBGraphicsScene* sceneDeepCopy() const;

        void clearContent(clearCase pCase = clearItemsAndAnnotations);

        bool inputDevicePress(const QPointF& scenePos, const qreal& pressure = 1.0);
        bool inputDeviceMove(const QPointF& scenePos, const qreal& pressure = 1.0);
        bool inputDeviceRelease();

        void leaveEvent (QEvent* event);

        void addItem(QGraphicsItem* item);
        void removeItem(QGraphicsItem* item);

        void addItems(const QSet<QGraphicsItem*>& item);
        void removeItems(const QSet<QGraphicsItem*>& item);

        WBGraphicsWidgetItem* addWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0));
        WBGraphicsAppleWidgetItem* addAppleWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0));
        WBGraphicsW3CWidgetItem* addW3CWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0));
        void addGraphicsWidget(WBGraphicsWidgetItem* graphicsWidget, const QPointF& pPos = QPointF(0, 0));

        QPointF lastCenter();
        void setLastCenter(QPointF center);

        WBGraphicsMediaItem* addMedia(const QUrl& pMediaFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0));
        WBGraphicsMediaItem* addVideo(const QUrl& pVideoFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0));
        WBGraphicsMediaItem* addAudio(const QUrl& pAudioFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0));
        WBGraphicsSvgItem* addSvg(const QUrl& pSvgFileUrl, const QPointF& pPos = QPointF(0, 0), const QByteArray pData = QByteArray());
        WBGraphicsTextItem* addText(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0));

        WBGraphicsTextItem*  addTextWithFont(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0)
                , int pointSize = -1, const QString& fontFamily = "", bool bold = false, bool italic = false);
        WBGraphicsTextItem* addTextHtml(const QString &pString = QString(), const QPointF& pTopLeft = QPointF(0, 0));

        WBGraphicsW3CWidgetItem* addOEmbed(const QUrl& pContentUrl, const QPointF& pPos = QPointF(0, 0));

        WBGraphicsGroupContainerItem *createGroup(QList<QGraphicsItem*> items);
        void addGroup(WBGraphicsGroupContainerItem *groupItem);

        QGraphicsItem* setAsBackgroundObject(QGraphicsItem* item, bool pAdaptTransformation = false, bool expand = false);
        void unsetBackgroundObject();

        QGraphicsItem* backgroundObject() const
        {
            return mBackgroundObject;
        }

        bool isBackgroundObject(const QGraphicsItem* item) const
        {
            return item == mBackgroundObject;
        }

        QGraphicsItem* scaleToFitDocumentSize(QGraphicsItem* item, bool center = false, int margin = 0, bool expand = false);

        QRectF normalizedSceneRect(qreal ratio = -1.0);

        QGraphicsItem *itemForUuid(QUuid uuid);

        void moveTo(const QPointF& pPoint);
        void drawLineTo(const QPointF& pEndPoint, const qreal& pWidth, bool bLineStyle);
        void drawLineTo(const QPointF& pEndPoint, const qreal& pStartWidth, const qreal& endWidth, bool bLineStyle);
        void eraseLineTo(const QPointF& pEndPoint, const qreal& pWidth);
        void drawArcTo(const QPointF& pCenterPoint, qreal pSpanAngle);
        void drawCurve(const QList<QPair<QPointF, qreal> > &points);
        void drawCurve(const QList<QPointF>& points, qreal startWidth, qreal endWidth);

        bool isEmpty() const;

        void setDocument(WBDocumentProxy* pDocument);

        WBDocumentProxy* document() const
        {
            return mDocument;
        }

        bool isDarkBackground() const
        {
            return mDarkBackground;
        }

        bool isLightBackground() const
        {
            return !mDarkBackground;
        }

        WBPageBackground pageBackground() const
        {
            return mPageBackground;
        }

        int backgroundGridSize() const
        {
            return mBackgroundGridSize;
        }

        bool hasBackground()
        {
            return (mBackgroundObject != 0);
        }

        void addRuler(QPointF center);
        void addProtractor(QPointF center);
        void addCompass(QPointF center);
        void addTriangle(QPointF center);
        void addMagnifier(WBMagnifierParams params);

        void addMask(const QPointF &center = QPointF());
        void addCache();

        QList<QGraphicsItem*> getFastAccessItems()
        {
            return mFastAccessItems;
        }

        class SceneViewState
        {
            public:
                SceneViewState()
                {
                    zoomFactor = 1;
                    horizontalPosition = 0;
                    verticalPostition = 0;
                    mLastSceneCenter = QPointF();
                }

                SceneViewState(qreal pZoomFactor, int pHorizontalPosition, int pVerticalPostition, QPointF sceneCenter = QPointF())
                {
                    zoomFactor = pZoomFactor;
                    horizontalPosition = pHorizontalPosition;
                    verticalPostition = pVerticalPostition;
                    mLastSceneCenter = sceneCenter;
                }

                QPointF lastSceneCenter()
                {
                    return mLastSceneCenter;
                }

                void setLastSceneCenter(QPointF center)
                {
                    mLastSceneCenter = center;
                }

                QPointF mLastSceneCenter;

                qreal zoomFactor;
                int horizontalPosition;
                int verticalPostition;
        };

        SceneViewState viewState() const
        {
            return mViewState;
        }

        void setViewState(const SceneViewState& pViewState)
        {
            mViewState = pViewState;
        }

        virtual void setRenderingQuality(WBItem::RenderingQuality pRenderingQuality);

        QList<QUrl> relativeDependencies() const;

        QSize nominalSize();

        QSize sceneSize();

        void setNominalSize(const QSize& pSize);

        void setNominalSize(int pWidth, int pHeight);

        qreal changeZLevelTo(QGraphicsItem *item, WBZLayerController::moveDestination dest, bool addUndo=false);

        enum RenderingContext
        {
            Screen = 0, NonScreen, PdfExport, Podcast
        };

        void setRenderingContext(RenderingContext pRenderingContext)
        {
            mRenderingContext = pRenderingContext;
        }

        RenderingContext renderingContext() const
        {
            return mRenderingContext;
        }

        QSet<QGraphicsItem*> tools(){ return mTools;}

        void registerTool(QGraphicsItem* item)
        {
            mTools << item;
        }

        const QPointF& previousPoint()
        {
            return mPreviousPoint;
        }

        void setSelectedZLevel(QGraphicsItem *item);
        void setOwnZlevel(QGraphicsItem *item);

        static QUuid getPersonalUuid(QGraphicsItem *item);

        WBGraphicsPolygonItem* polygonToPolygonItem(const QPolygonF pPolygon);
        void clearSelectionFrame();
        WBBoardView *controlView();
        void notifyZChanged(QGraphicsItem *item, qreal zValue);
        void deselectAllItemsExcept(QGraphicsItem* graphicsItem);

        QRectF annotationsBoundingRect() const;

	public slots:
        void updateSelectionFrame();
        void updateSelectionFrameWrapper(int);
        void initStroke();
        void hideTool();

        void setBackground(bool pIsDark, WBPageBackground pBackground);
        void setBackgroundZoomFactor(qreal zoom);
        void setBackgroundGridSize(int pSize);
        void setDrawingMode(bool bModeDesktop);
        void deselectAllItems();

        WBGraphicsPixmapItem* addPixmap(const QPixmap& pPixmap,
										QGraphicsItem* replaceFor,
										const QPointF& pPos = QPointF(0,0),
										qreal scaleFactor = 1.0,
										bool pUseAnimation = false,
										bool useProxyForDocumentPath = false);

        void textUndoCommandAdded(WBGraphicsTextItem *textItem);

        void setToolCursor(int tool);

        void selectionChangedProcessing();
        void moveMagnifier();
        void moveMagnifier(QPoint newPos, bool forceGrab = false);
        void closeMagnifier();
        void zoomInMagnifier();
        void zoomOutMagnifier();
        void changeMagnifierMode(int mode);
        void resizedMagnifier(qreal newPercent);

    protected:
        WBGraphicsPolygonItem* lineToPolygonItem(const QLineF& pLine, const qreal& pWidth);
        WBGraphicsPolygonItem* lineToPolygonItem(const QLineF &pLine, const qreal &pStartWidth, const qreal &pEndWidth);

        WBGraphicsPolygonItem* arcToPolygonItem(const QLineF& pStartRadius, qreal pSpanAngle, qreal pWidth);
        WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPair<QPointF, qreal> > &points);
        WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPointF> &points, qreal startWidth, qreal endWidth);
        void addPolygonItemToCurrentStroke(WBGraphicsPolygonItem* polygonItem);

        void initPolygonItem(WBGraphicsPolygonItem*);

        void drawEraser(const QPointF& pEndPoint, bool pressed = true);
        void redrawEraser(bool pressed);
        void hideEraser();
        void drawPointer(const QPointF& pEndPoint, bool isFirstDraw = false);
        void drawMarkerCircle(const QPointF& pEndPoint);
        void drawPenCircle(const QPointF& pEndPoint);
        void hideMarkerCircle();
        void hidePenCircle();
        void DisposeMagnifierQWidgets();

        virtual void keyReleaseEvent(QKeyEvent * keyEvent);

        void recolorAllItems();

        virtual void drawItems (QPainter * painter, int numItems,
                               QGraphicsItem * items[], const QStyleOptionGraphicsItem options[], QWidget * widget = 0);

        QGraphicsItem* rootItem(QGraphicsItem* item) const;

        virtual void drawBackground(QPainter *painter, const QRectF &rect);

    private:
        void setDocumentUpdated();
        void createEraiser();
        void createPointer();
        void createMarkerCircle();
        void createPenCircle();
        void updateEraserColor();
        void updateMarkerCircleColor();
        void updatePenCircleColor();
        bool hasTextItemWithFocus(WBGraphicsGroupContainerItem* item);
        void simplifyCurrentStroke();

        QGraphicsEllipseItem* mEraser;
        QGraphicsEllipseItem* mPointer;
        QGraphicsEllipseItem* mMarkerCircle;
        QGraphicsEllipseItem* mPenCircle;

        QSet<QGraphicsItem*> mAddedItems;
        QSet<QGraphicsItem*> mRemovedItems;

        WBDocumentProxy* mDocument;

        bool mDarkBackground;
        WBPageBackground mPageBackground;
        int mBackgroundGridSize;

        bool mIsDesktopMode;
        qreal mZoomFactor;

        QGraphicsItem* mBackgroundObject;

        QPointF mPreviousPoint;
        qreal mPreviousWidth;
        qreal mDistanceFromLastStrokePoint;

        QList<WBGraphicsPolygonItem*> mPreviousPolygonItems;

        SceneViewState mViewState;

        bool mInputDeviceIsPressed;

        QSet<QGraphicsItem*> mTools;

        WBGraphicsPolygonItem *mArcPolygonItem;

        QSize mNominalSize;

        RenderingContext mRenderingContext;

        WBGraphicsStroke* mCurrentStroke;

        int mItemCount;

        QList<QGraphicsItem*> mFastAccessItems;

        bool mHasCache;
        bool mUndoRedoStackEnabled;

        WBMagnifier *magniferControlViewWidget;
        WBMagnifier *magniferDisplayViewWidget;

        WBZLayerController *mZLayerController;
        WBGraphicsPolygonItem* mpLastPolygon;
        WBGraphicsPolygonItem* mTempPolygon;

        bool mDrawWithCompass;
        WBGraphicsPolygonItem *mCurrentPolygon;
        WBSelectionFrame *mSelectionFrame;
};

#endif /* WBGRAPHICSSCENE_H_ */

/*

��δ��붨����һ����Ϊ `WBGraphicsScene` ���࣬����̳��� `WBCoreGraphicsScene` �� `WBItem`�������ڹ���Ͳ���ͼ�γ����еĸ���Ԫ�ء������Ƕ����Ա�������������书�ܵ���ϸ���ͣ�

### ����ö��

- **`enum clearCase`**:
  - `clearItemsAndAnnotations`������������ע�͡�
  - `clearAnnotations`�����ע�͡�
  - `clearItems`����������
  - `clearBackground`�����������

### ������Ա����

- **`void enableUndoRedoStack()`**:
  ���ó���/������ջ��

- **`void setURStackEnable(bool enable)`**:
  ���ó���/������ջ�Ƿ����á�

- **`bool isURStackIsEnabled()`**:
  ��鳷��/������ջ�Ƿ����á�

- **`WBGraphicsScene(WBDocumentProxy *parent, bool enableUndoRedoStack = true)`**:
  ���캯������ʼ������������һ���ĵ������һ������ֵ�����ó���/������ջ��

- **`virtual ~WBGraphicsScene()`**:
  ����������������Դ��

- **`virtual WBItem* deepCopy() const`**:
  ������ǰ��������

- **`virtual void copyItemParameters(WBItem *copy) const`**:
  ������Ĳ�������ǰδʵ�֣�����δʹ�ã���

- **`WBGraphicsScene* sceneDeepCopy() const`**:
  ������ǰ�����������

- **`void clearContent(clearCase pCase = clearItemsAndAnnotations)`**:
  ����������ݣ����� `pCase` ָ�������Χ���ע�͡������ȣ���

- **`bool inputDevicePress(const QPointF& scenePos, const qreal& pressure = 1.0)`**:
  ���������豸�����¼�������λ�ú�ѹ��ֵ��

- **`bool inputDeviceMove(const QPointF& scenePos, const qreal& pressure = 1.0)`**:
  ���������豸�ƶ��¼���

- **`bool inputDeviceRelease()`**:
  ���������豸�ͷ��¼���

- **`void leaveEvent (QEvent* event)`**:
  ��������뿪�¼���

- **`void addItem(QGraphicsItem* item)`**:
  �򳡾������һ��ͼ���

- **`void removeItem(QGraphicsItem* item)`**:
  �ӳ������Ƴ�һ��ͼ���

- **`void addItems(const QSet<QGraphicsItem*>& item)`**:
  �򳡾�����Ӷ��ͼ���

- **`void removeItems(const QSet<QGraphicsItem*>& item)`**:
  �ӳ������Ƴ����ͼ���

- **`WBGraphicsWidgetItem* addWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ��ͼ��С�����

- **`WBGraphicsAppleWidgetItem* addAppleWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ�� Apple С�����

- **`WBGraphicsW3CWidgetItem* addW3CWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ�� W3C С�����

- **`void addGraphicsWidget(WBGraphicsWidgetItem* graphicsWidget, const QPointF& pPos = QPointF(0, 0))`**:
  �򳡾������һ��ͼ��С������ָ��λ�á�

- **`QPointF lastCenter()`**:
  ��ȡ������������ĵ㡣

- **`void setLastCenter(QPointF center)`**:
  ���ó�����������ĵ㡣

- **`WBGraphicsMediaItem* addMedia(const QUrl& pMediaFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ��ý�������Ƶ����ָ���Ƿ��������ź�λ�á�

- **`WBGraphicsMediaItem* addVideo(const QUrl& pVideoFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ����Ƶ�ָ���Ƿ��������ź�λ�á�

- **`WBGraphicsMediaItem* addAudio(const QUrl& pAudioFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ����Ƶ�ָ���Ƿ��������ź�λ�á�

- **`WBGraphicsSvgItem* addSvg(const QUrl& pSvgFileUrl, const QPointF& pPos = QPointF(0, 0), const QByteArray pData = QByteArray())`**:
  ���һ�� SVG �ָ��λ�ú����ݡ�

- **`WBGraphicsTextItem* addText(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0))`**:
  ���һ���ı��ָ��λ�á�

- **`WBGraphicsTextItem* addTextWithFont(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0), int pointSize = -1, const QString& fontFamily = "", bool bold = false, bool italic = false)`**:
  ���һ������������ʽ���ı��

- **`WBGraphicsTextItem* addTextHtml(const QString &pString = QString(), const QPointF& pTopLeft = QPointF(0, 0))`**:
  ���һ�� HTML ��ʽ���ı��

- **`WBGraphicsW3CWidgetItem* addOEmbed(const QUrl& pContentUrl, const QPointF& pPos = QPointF(0, 0))`**:
  ���һ��Ƕ��ʽ�����OEmbed����

- **`WBGraphicsGroupContainerItem *createGroup(QList<QGraphicsItem*> items)`**:
  ����һ���������ͼ������顣

- **`void addGroup(WBGraphicsGroupContainerItem *groupItem)`**:
  �򳡾������һ��ͼ�����顣

- **`QGraphicsItem* setAsBackgroundObject(QGraphicsItem* item, bool pAdaptTransformation = false, bool expand = false)`**:
  ����һ��ͼ����Ϊ�������󣬿���ѡ����Ӧ�任����չ��

- **`void unsetBackgroundObject()`**:
  ȡ��������������á�

- **`QGraphicsItem* backgroundObject() const`**:
  ��ȡ��ǰ�ı�������

- **`bool isBackgroundObject(const QGraphicsItem* item) const`**:
  �ж�һ��ͼ�����Ƿ��Ǳ�������

- **`QGraphicsItem* scaleToFitDocumentSize(QGraphicsItem* item, bool center = false, int margin = 0, bool expand = false)`**:
  ��ͼ������������Ӧ�ĵ���С��

- **`QRectF normalizedSceneRect(qreal ratio = -1.0)`**:
  ��ȡ��׼���ĳ�����������

- **`QGraphicsItem *itemForUuid(QUuid uuid)`**:
  ���� UUID ��ȡͼ���

- **`void moveTo(const QPointF& pPoint)`**:
  �ƶ�������ָ��λ�á�

- **`void drawLineTo(const QPointF& pEndPoint, const qreal& pWidth, bool bLineStyle)`**:
  ���Ƶ�ָ��λ�õ�ֱ�ߣ�ָ����Ⱥ�������ʽ��

- **`void drawLineTo(const QPointF& pEndPoint, const qreal& pStartWidth, const qreal& endWidth, bool bLineStyle)`**:
  ���Ƶ�ָ��λ�õ�ֱ�ߣ�ָ����ʼ��ȡ�������Ⱥ�������ʽ��

- **`void eraseLineTo(const QPointF& pEndPoint, const qreal& pWidth)`**:
  ������ָ��λ�õ�ֱ�ߣ�ָ����ȡ�

- **`void drawArcTo(const QPointF& pCenterPoint, qreal pSpanAngle)`**:
  ���ƻ��ε�ָ�����ĵ�Ϳ�ȽǶȡ�

- **`void drawCurve(const QList<QPair<QPointF, qreal> > &points)`**:
  �������ߣ������λ�úͿ�ȡ�

- **`void drawCurve(const QList<QPointF>& points, qreal startWidth, qreal endWidth)`**:
  �������ߣ���ֻ����λ�ã�ָ����ʼ��Ⱥͽ�����ȡ�

- **`bool isEmpty() const`**:
  ��鳡���Ƿ�Ϊ�ա�

- **`void setDocument(WBDocumentProxy* pDocument)`**:
  �����ĵ�����

- **`WBDocumentProxy* document() const`**:
  ��ȡ�ĵ�����

- **`bool isDarkBackground() const`**:
  �жϱ����Ƿ�����ɫ�ġ�

- **`bool isLightBackground() const`**:
  �жϱ����Ƿ���ǳɫ�ġ�

- **`WBPageBackground pageBackground() const`**:
  ��ȡҳ�汳�����͡�

-

 **`int backgroundGridSize() const`**:
  ��ȡ���������С��

- **`bool hasBackground()`**:
  �ж��Ƿ��б�������

- **`void addRuler(QPointF center)`**:
  ��ӱ�ߵ�ָ�����ĵ㡣

- **`void addProtractor(QPointF center)`**:
  �����������ָ�����ĵ㡣

- **`void addCompass(QPointF center)`**:
  ���Բ�浽ָ�����ĵ㡣

- **`void addTriangle(QPointF center)`**:
  ��������ε�ָ�����ĵ㡣

- **`void addMagnifier(WBMagnifierParams params)`**:
  ��ӷŴ󾵣�ʹ��ָ��������

- **`void addMask(const QPointF &center = QPointF())`**:
  ������֣�ָ�����ĵ㡣

- **`void addCache()`**:
  ��ӻ��档

- **`QList<QGraphicsItem*> getFastAccessItems()`**:
  ��ȡ���ٷ��ʵ�ͼ�����б�

- **`class SceneViewState`**:
  �ڲ��࣬���ڴ洢������ͼ״̬�������������ӡ�ˮƽ�ʹ�ֱλ�ü���һ���������ĵ㡣

- **`SceneViewState viewState() const`**:
  ��ȡ��ǰ��ͼ״̬��

- **`void setViewState(const SceneViewState& pViewState)`**:
  ������ͼ״̬��

- **`virtual void setRenderingQuality(WBItem::RenderingQuality pRenderingQuality)`**:
  ������Ⱦ������

- **`QList<QUrl> relativeDependencies() const`**:
  ��ȡ���������� URL �б�

- **`QSize nominalSize()`**:
  ��ȡ�����������С��

- **`QSize sceneSize()`**:
  ��ȡ������ʵ�ʴ�С��

- **`void setNominalSize(const QSize& pSize)`**:
  ���ó����������С��

- **`void setNominalSize(int pWidth, int pHeight)`**:
  ���ó����������С��ʹ�ÿ�Ⱥ͸߶ȣ���

- **`qreal changeZLevelTo(QGraphicsItem *item, WBZLayerController::moveDestination dest, bool addUndo=false)`**:
  �ı�ͼ����� Z ��㼶��

- **`enum RenderingContext`**:
  ��Ⱦ������ö�٣�
  - `Screen`����Ļ��ʾ��
  - `NonScreen`������Ļ��ʾ��
  - `PdfExport`��PDF ������
  - `Podcast`�����͡�

- **`void setRenderingContext(RenderingContext pRenderingContext)`**:
  ������Ⱦ�����ġ�

- **`RenderingContext renderingContext() const`**:
  ��ȡ��Ⱦ�����ġ�

- **`QSet<QGraphicsItem*> tools()`**:
  ��ȡ���߼��ϡ�

- **`void registerTool(QGraphicsItem* item)`**:
  ע��һ�������

- **`const QPointF& previousPoint()`**:
  ��ȡ��һ�����λ�á�

- **`void setSelectedZLevel(QGraphicsItem *item)`**:
  ����ѡ����� Z ��㼶��

- **`void setOwnZlevel(QGraphicsItem *item)`**:
  ������� Z ��㼶��

- **`static QUuid getPersonalUuid(QGraphicsItem *item)`**:
  ��ȡͼ����ĸ��� UUID��

- **`WBGraphicsPolygonItem* polygonToPolygonItem(const QPolygonF pPolygon)`**:
  �������ת��Ϊ������

- **`void clearSelectionFrame()`**:
  ���ѡ���

- **`WBBoardView *controlView()`**:
  ��ȡ������ͼ��

- **`void notifyZChanged(QGraphicsItem *item, qreal zValue)`**:
  ֪ͨ Z ��㼶�仯��

- **`void deselectAllItemsExcept(QGraphicsItem* graphicsItem)`**:
  ȡ��ѡ�����������ָ�����

- **`QRectF annotationsBoundingRect() const`**:
  ��ȡע�͵ı߽���Ρ�

### �����ۺ���

- **`void updateSelectionFrame()`**:
  ����ѡ���

- **`void updateSelectionFrameWrapper(int)`**:
  ʹ������ֵ����ѡ���

- **`void initStroke()`**:
  ��ʼ���ʻ���

- **`void hideTool()`**:
  ���ع��ߡ�

- **`void setBackground(bool pIsDark, WBPageBackground pBackground)`**:
  ���ñ�����ɫ����ɫ��ǳɫ����ҳ�汳�����͡�

- **`void setBackgroundZoomFactor(qreal zoom)`**:
  ���ñ������������ӡ�

- **`void setBackgroundGridSize(int pSize)`**:
  ���ñ��������С��

- **`void setDrawingMode(bool bModeDesktop)`**:
  ���û�ͼģʽ������ģʽ����

- **`void deselectAllItems()`**:
  ȡ��ѡ�������

- **`WBGraphicsPixmapItem* addPixmap(const QPixmap& pPixmap, QGraphicsItem* replaceFor, const QPointF& pPos = QPointF(0,0), qreal scaleFactor = 1.0, bool pUseAnimation = false, bool useProxyForDocumentPath = false)`**:
  ���һ��λͼ�ָ���滻�λ�á��������ӵȲ�����

- **`void textUndoCommandAdded(WBGraphicsTextItem *textItem)`**:
  ����ı��������

- **`void setToolCursor(int tool)`**:
  ���ù��ߵĹ�ꡣ

- **`void selectionChangedProcessing()`**:
  ����ѡ��仯��

- **`void moveMagnifier()`**:
  �ƶ��Ŵ󾵡�

- **`void moveMagnifier(QPoint newPos, bool forceGrab = false)`**:
  �ƶ��Ŵ󾵵�ָ��λ�ã���ѡ��ǿ��ץȡ��

- **`void closeMagnifier()`**:
  �رշŴ󾵡�

- **`void zoomInMagnifier()`**:
  �Ŵ�Ŵ󾵡�

- **`void zoomOutMagnifier()`**:
  ��С�Ŵ󾵡�

- **`void changeMagnifierMode(int mode)`**:
  ���ķŴ�ģʽ��

- **`void resizedMagnifier(qreal newPercent)`**:
  �����Ŵ󾵵Ĵ�С��

### �ܱ�����Ա����

- **`WBGraphicsPolygonItem* lineToPolygonItem(const QLineF& pLine, const qreal& pWidth)`**:
  ���߶�ת��Ϊ������ָ����ȡ�

- **`WBGraphicsPolygonItem* lineToPolygonItem(const QLineF &pLine, const qreal &pStartWidth, const qreal &pEndWidth)`**:
  ���߶�ת��Ϊ������ָ����ʼ�ͽ�����ȡ�

- **`WBGraphicsPolygonItem* arcToPolygonItem(const QLineF& pStartRadius, qreal pSpanAngle, qreal pWidth)`**:
  ������ת��Ϊ������ָ����ʼ�뾶����ȽǶȺͿ�ȡ�

- **`WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPair<QPointF, qreal> > &points)`**:
  ������ת��Ϊ�����������λ�úͿ�ȡ�

- **`WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPointF> &points, qreal startWidth, qreal endWidth)`**:
  ������ת��Ϊ��������ֻ����λ�ã�ָ����ʼ�ͽ�����ȡ�

- **`void addPolygonItemToCurrentStroke(WBGraphicsPolygonItem* polygonItem)`**:
  �����������ӵ���ǰ�ʻ��С�

- **`void initPolygonItem(WBGraphicsPolygonItem*)`**:
  ��ʼ��������

- **`void drawEraser(const QPointF& pEndPoint, bool pressed = true)`**:
  ������Ƥ����ָ��λ�ã���ѡ���Ƿ��¡�

- **`void redrawEraser(bool pressed)`**:
  ���»�����Ƥ����ָ���Ƿ��¡�

- **`void hideEraser()`**:
  ������Ƥ����

- **`void drawPointer(const QPointF& pEndPoint, bool isFirstDraw = false)`**:
  ����ָ�뵽ָ��λ�ã���ѡ���Ƿ�Ϊ��һ�λ��ơ�

- **`void drawMarkerCircle(const QPointF& pEndPoint)`**:
  ���Ʊ��ԲȦ��ָ��λ�á�

- **`void drawPenCircle(const QPointF& pEndPoint)`**:
  ���Ʊ�Ȧ��ָ��λ�á�

- **`void hideMarkerCircle()`**:
  ���ر��ԲȦ��

- **`void hidePenCircle()`**:
  ���ر�Ȧ��

- **`void DisposeMagnifierQWidgets()`**:
  ����Ŵ󾵵� Qt С������Դ�ͷš�

- **`virtual void keyReleaseEvent(QKeyEvent * keyEvent)`**:
  ������ͷ��¼���

- **`void recolorAllItems()`**:
  ������ɫ�����

- **`virtual void drawItems (QPainter * painter, int numItems, QGraphicsItem * items[], const QStyleOptionGraphicsItem options[], QWidget * widget = 0)`**:
  �����

ʹ��ָ���Ļ�ͼ�������������ʽѡ�

- **`QGraphicsItem* rootItem(QGraphicsItem* item) const`**:
  ��ȡͼ����ĸ��

- **`virtual void drawBackground(QPainter *painter, const QRectF &rect)`**:
  ���Ʊ�����ʹ��ָ���Ļ�ͼ���;�������

### ˽�г�Ա����

- **`QGraphicsEllipseItem* mEraser`**:
  ��Ƥ��ͼ���

- **`QGraphicsEllipseItem* mPointer`**:
  ָ��ͼ���

- **`QGraphicsEllipseItem* mMarkerCircle`**:
  ���ԲȦͼ���

- **`QGraphicsEllipseItem* mPenCircle`**:
  ��Ȧͼ���

- **`QSet<QGraphicsItem*> mAddedItems`**:
  ����ӵ�ͼ����ϡ�

- **`QSet<QGraphicsItem*> mRemovedItems`**:
  ���Ƴ���ͼ����ϡ�

- **`WBDocumentProxy* mDocument`**:
  �ĵ�����

- **`bool mDarkBackground`**:
  �Ƿ�ʹ����ɫ������

- **`WBPageBackground mPageBackground`**:
  ҳ�汳�����͡�

- **`int mBackgroundGridSize`**:
  ���������С��

- **`bool mIsDesktopMode`**:
  �Ƿ�Ϊ����ģʽ��

- **`qreal mZoomFactor`**:
  �������ӡ�

- **`QGraphicsItem* mBackgroundObject`**:
  ��������

- **`QPointF mPreviousPoint`**:
  ��һ�����λ�á�

- **`qreal mPreviousWidth`**:
  ��һ���ʻ��Ŀ�ȡ�

- **`qreal mDistanceFromLastStrokePoint`**:
  ����һ���ʻ���ľ��롣

- **`QList<WBGraphicsPolygonItem*> mPreviousPolygonItems`**:
  ��һ�����������б�

- **`SceneViewState mViewState`**:
  ��ͼ״̬��

- **`bool mInputDeviceIsPressed`**:
  �����豸�Ƿ��¡�

- **`QSet<QGraphicsItem*> mTools`**:
  ���߼��ϡ�

- **`WBGraphicsPolygonItem *mArcPolygonItem`**:
  ���ζ�����

- **`QSize mNominalSize`**:
  �����С��

- **`RenderingContext mRenderingContext`**:
  ��Ⱦ�����ġ�

- **`WBGraphicsStroke* mCurrentStroke`**:
  ��ǰ�ʻ���

- **`int mItemCount`**:
  �������

- **`QList<QGraphicsItem*> mFastAccessItems`**:
  ���ٷ��ʵ�ͼ�����б�

- **`bool mHasCache`**:
  �Ƿ��л��档

- **`bool mUndoRedoStackEnabled`**:
  ����/����ջ�Ƿ����á�

- **`WBMagnifier *magniferControlViewWidget`**:
  ������ͼ�ķŴ�С������

- **`WBMagnifier *magniferDisplayViewWidget`**:
  ��ʾ��ͼ�ķŴ�С������

- **`WBZLayerController *mZLayerController`**:
  Z ��㼶��������

- **`WBGraphicsPolygonItem* mpLastPolygon`**:
  ���һ��������

- **`WBGraphicsPolygonItem* mTempPolygon`**:
  ��ʱ������

- **`bool mDrawWithCompass`**:
  �Ƿ�ʹ��Բ����ơ�

- **`WBGraphicsPolygonItem *mCurrentPolygon`**:
  ��ǰ������

- **`WBSelectionFrame *mSelectionFrame`**:
  ѡ���

��δ����ṩ��һ���ḻ�Ľӿ�������ͼ�γ����еĸ��ֲ���������ͼ����Ĺ������Ʋ������������á���ͼ״̬����ȹ��ܡ�
��ʹ�ÿ������ܹ���ͼ�γ����д������޸ġ�ɾ���Ͳ�����ͬ���͵�ͼ���ͬʱ֧�ֳ���/������������Ⱦ�������úͶ��ֱ���ѡ�

*/
