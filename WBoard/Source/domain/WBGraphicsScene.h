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

这段代码定义了一个名为 `WBGraphicsScene` 的类，该类继承了 `WBCoreGraphicsScene` 和 `WBItem`，并用于管理和操作图形场景中的各种元素。以下是对类成员函数、变量及其功能的详细解释：

### 公共枚举

- **`enum clearCase`**:
  - `clearItemsAndAnnotations`：清除所有项和注释。
  - `clearAnnotations`：清除注释。
  - `clearItems`：清除所有项。
  - `clearBackground`：清除背景。

### 公共成员函数

- **`void enableUndoRedoStack()`**:
  启用撤销/重做堆栈。

- **`void setURStackEnable(bool enable)`**:
  设置撤销/重做堆栈是否启用。

- **`bool isURStackIsEnabled()`**:
  检查撤销/重做堆栈是否启用。

- **`WBGraphicsScene(WBDocumentProxy *parent, bool enableUndoRedoStack = true)`**:
  构造函数，初始化场景，接受一个文档代理和一个布尔值来启用撤销/重做堆栈。

- **`virtual ~WBGraphicsScene()`**:
  析构函数，清理资源。

- **`virtual WBItem* deepCopy() const`**:
  创建当前项的深拷贝。

- **`virtual void copyItemParameters(WBItem *copy) const`**:
  复制项的参数（当前未实现，参数未使用）。

- **`WBGraphicsScene* sceneDeepCopy() const`**:
  创建当前场景的深拷贝。

- **`void clearContent(clearCase pCase = clearItemsAndAnnotations)`**:
  清除场景内容，依据 `pCase` 指定清除范围（项、注释、背景等）。

- **`bool inputDevicePress(const QPointF& scenePos, const qreal& pressure = 1.0)`**:
  处理输入设备按下事件，传入位置和压力值。

- **`bool inputDeviceMove(const QPointF& scenePos, const qreal& pressure = 1.0)`**:
  处理输入设备移动事件。

- **`bool inputDeviceRelease()`**:
  处理输入设备释放事件。

- **`void leaveEvent (QEvent* event)`**:
  处理鼠标离开事件。

- **`void addItem(QGraphicsItem* item)`**:
  向场景中添加一个图形项。

- **`void removeItem(QGraphicsItem* item)`**:
  从场景中移除一个图形项。

- **`void addItems(const QSet<QGraphicsItem*>& item)`**:
  向场景中添加多个图形项。

- **`void removeItems(const QSet<QGraphicsItem*>& item)`**:
  从场景中移除多个图形项。

- **`WBGraphicsWidgetItem* addWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个图形小部件项。

- **`WBGraphicsAppleWidgetItem* addAppleWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个 Apple 小部件项。

- **`WBGraphicsW3CWidgetItem* addW3CWidget(const QUrl& pWidgetUrl, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个 W3C 小部件项。

- **`void addGraphicsWidget(WBGraphicsWidgetItem* graphicsWidget, const QPointF& pPos = QPointF(0, 0))`**:
  向场景中添加一个图形小部件，指定位置。

- **`QPointF lastCenter()`**:
  获取场景的最后中心点。

- **`void setLastCenter(QPointF center)`**:
  设置场景的最后中心点。

- **`WBGraphicsMediaItem* addMedia(const QUrl& pMediaFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个媒体项（音视频），指定是否立即播放和位置。

- **`WBGraphicsMediaItem* addVideo(const QUrl& pVideoFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个视频项，指定是否立即播放和位置。

- **`WBGraphicsMediaItem* addAudio(const QUrl& pAudioFileUrl, bool shouldPlayAsap, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个音频项，指定是否立即播放和位置。

- **`WBGraphicsSvgItem* addSvg(const QUrl& pSvgFileUrl, const QPointF& pPos = QPointF(0, 0), const QByteArray pData = QByteArray())`**:
  添加一个 SVG 项，指定位置和数据。

- **`WBGraphicsTextItem* addText(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0))`**:
  添加一个文本项，指定位置。

- **`WBGraphicsTextItem* addTextWithFont(const QString& pString, const QPointF& pTopLeft = QPointF(0, 0), int pointSize = -1, const QString& fontFamily = "", bool bold = false, bool italic = false)`**:
  添加一个带有字体样式的文本项。

- **`WBGraphicsTextItem* addTextHtml(const QString &pString = QString(), const QPointF& pTopLeft = QPointF(0, 0))`**:
  添加一个 HTML 格式的文本项。

- **`WBGraphicsW3CWidgetItem* addOEmbed(const QUrl& pContentUrl, const QPointF& pPos = QPointF(0, 0))`**:
  添加一个嵌入式内容项（OEmbed）。

- **`WBGraphicsGroupContainerItem *createGroup(QList<QGraphicsItem*> items)`**:
  创建一个包含多个图形项的组。

- **`void addGroup(WBGraphicsGroupContainerItem *groupItem)`**:
  向场景中添加一个图形项组。

- **`QGraphicsItem* setAsBackgroundObject(QGraphicsItem* item, bool pAdaptTransformation = false, bool expand = false)`**:
  设置一个图形项为背景对象，可以选择适应变换和扩展。

- **`void unsetBackgroundObject()`**:
  取消背景对象的设置。

- **`QGraphicsItem* backgroundObject() const`**:
  获取当前的背景对象。

- **`bool isBackgroundObject(const QGraphicsItem* item) const`**:
  判断一个图形项是否是背景对象。

- **`QGraphicsItem* scaleToFitDocumentSize(QGraphicsItem* item, bool center = false, int margin = 0, bool expand = false)`**:
  将图形项缩放以适应文档大小。

- **`QRectF normalizedSceneRect(qreal ratio = -1.0)`**:
  获取标准化的场景矩形区域。

- **`QGraphicsItem *itemForUuid(QUuid uuid)`**:
  根据 UUID 获取图形项。

- **`void moveTo(const QPointF& pPoint)`**:
  移动场景到指定位置。

- **`void drawLineTo(const QPointF& pEndPoint, const qreal& pWidth, bool bLineStyle)`**:
  绘制到指定位置的直线，指定宽度和线条样式。

- **`void drawLineTo(const QPointF& pEndPoint, const qreal& pStartWidth, const qreal& endWidth, bool bLineStyle)`**:
  绘制到指定位置的直线，指定起始宽度、结束宽度和线条样式。

- **`void eraseLineTo(const QPointF& pEndPoint, const qreal& pWidth)`**:
  擦除到指定位置的直线，指定宽度。

- **`void drawArcTo(const QPointF& pCenterPoint, qreal pSpanAngle)`**:
  绘制弧形到指定中心点和跨度角度。

- **`void drawCurve(const QList<QPair<QPointF, qreal> > &points)`**:
  绘制曲线，点包含位置和宽度。

- **`void drawCurve(const QList<QPointF>& points, qreal startWidth, qreal endWidth)`**:
  绘制曲线，点只包含位置，指定起始宽度和结束宽度。

- **`bool isEmpty() const`**:
  检查场景是否为空。

- **`void setDocument(WBDocumentProxy* pDocument)`**:
  设置文档代理。

- **`WBDocumentProxy* document() const`**:
  获取文档代理。

- **`bool isDarkBackground() const`**:
  判断背景是否是深色的。

- **`bool isLightBackground() const`**:
  判断背景是否是浅色的。

- **`WBPageBackground pageBackground() const`**:
  获取页面背景类型。

-

 **`int backgroundGridSize() const`**:
  获取背景网格大小。

- **`bool hasBackground()`**:
  判断是否有背景对象。

- **`void addRuler(QPointF center)`**:
  添加标尺到指定中心点。

- **`void addProtractor(QPointF center)`**:
  添加量角器到指定中心点。

- **`void addCompass(QPointF center)`**:
  添加圆规到指定中心点。

- **`void addTriangle(QPointF center)`**:
  添加三角形到指定中心点。

- **`void addMagnifier(WBMagnifierParams params)`**:
  添加放大镜，使用指定参数。

- **`void addMask(const QPointF &center = QPointF())`**:
  添加遮罩，指定中心点。

- **`void addCache()`**:
  添加缓存。

- **`QList<QGraphicsItem*> getFastAccessItems()`**:
  获取快速访问的图形项列表。

- **`class SceneViewState`**:
  内部类，用于存储场景视图状态，包括缩放因子、水平和垂直位置及上一个场景中心点。

- **`SceneViewState viewState() const`**:
  获取当前视图状态。

- **`void setViewState(const SceneViewState& pViewState)`**:
  设置视图状态。

- **`virtual void setRenderingQuality(WBItem::RenderingQuality pRenderingQuality)`**:
  设置渲染质量。

- **`QList<QUrl> relativeDependencies() const`**:
  获取相对依赖项的 URL 列表。

- **`QSize nominalSize()`**:
  获取场景的名义大小。

- **`QSize sceneSize()`**:
  获取场景的实际大小。

- **`void setNominalSize(const QSize& pSize)`**:
  设置场景的名义大小。

- **`void setNominalSize(int pWidth, int pHeight)`**:
  设置场景的名义大小（使用宽度和高度）。

- **`qreal changeZLevelTo(QGraphicsItem *item, WBZLayerController::moveDestination dest, bool addUndo=false)`**:
  改变图形项的 Z 轴层级。

- **`enum RenderingContext`**:
  渲染上下文枚举：
  - `Screen`：屏幕显示。
  - `NonScreen`：非屏幕显示。
  - `PdfExport`：PDF 导出。
  - `Podcast`：播客。

- **`void setRenderingContext(RenderingContext pRenderingContext)`**:
  设置渲染上下文。

- **`RenderingContext renderingContext() const`**:
  获取渲染上下文。

- **`QSet<QGraphicsItem*> tools()`**:
  获取工具集合。

- **`void registerTool(QGraphicsItem* item)`**:
  注册一个工具项。

- **`const QPointF& previousPoint()`**:
  获取上一个点的位置。

- **`void setSelectedZLevel(QGraphicsItem *item)`**:
  设置选中项的 Z 轴层级。

- **`void setOwnZlevel(QGraphicsItem *item)`**:
  设置项的 Z 轴层级。

- **`static QUuid getPersonalUuid(QGraphicsItem *item)`**:
  获取图形项的个人 UUID。

- **`WBGraphicsPolygonItem* polygonToPolygonItem(const QPolygonF pPolygon)`**:
  将多边形转换为多边形项。

- **`void clearSelectionFrame()`**:
  清除选择框。

- **`WBBoardView *controlView()`**:
  获取控制视图。

- **`void notifyZChanged(QGraphicsItem *item, qreal zValue)`**:
  通知 Z 轴层级变化。

- **`void deselectAllItemsExcept(QGraphicsItem* graphicsItem)`**:
  取消选择所有项，除了指定的项。

- **`QRectF annotationsBoundingRect() const`**:
  获取注释的边界矩形。

### 公共槽函数

- **`void updateSelectionFrame()`**:
  更新选择框。

- **`void updateSelectionFrameWrapper(int)`**:
  使用整数值更新选择框。

- **`void initStroke()`**:
  初始化笔画。

- **`void hideTool()`**:
  隐藏工具。

- **`void setBackground(bool pIsDark, WBPageBackground pBackground)`**:
  设置背景颜色（深色或浅色）和页面背景类型。

- **`void setBackgroundZoomFactor(qreal zoom)`**:
  设置背景的缩放因子。

- **`void setBackgroundGridSize(int pSize)`**:
  设置背景网格大小。

- **`void setDrawingMode(bool bModeDesktop)`**:
  设置绘图模式（桌面模式）。

- **`void deselectAllItems()`**:
  取消选择所有项。

- **`WBGraphicsPixmapItem* addPixmap(const QPixmap& pPixmap, QGraphicsItem* replaceFor, const QPointF& pPos = QPointF(0,0), qreal scaleFactor = 1.0, bool pUseAnimation = false, bool useProxyForDocumentPath = false)`**:
  添加一个位图项，指定替换项、位置、缩放因子等参数。

- **`void textUndoCommandAdded(WBGraphicsTextItem *textItem)`**:
  添加文本撤销命令。

- **`void setToolCursor(int tool)`**:
  设置工具的光标。

- **`void selectionChangedProcessing()`**:
  处理选择变化。

- **`void moveMagnifier()`**:
  移动放大镜。

- **`void moveMagnifier(QPoint newPos, bool forceGrab = false)`**:
  移动放大镜到指定位置，可选择强制抓取。

- **`void closeMagnifier()`**:
  关闭放大镜。

- **`void zoomInMagnifier()`**:
  放大放大镜。

- **`void zoomOutMagnifier()`**:
  缩小放大镜。

- **`void changeMagnifierMode(int mode)`**:
  更改放大镜模式。

- **`void resizedMagnifier(qreal newPercent)`**:
  调整放大镜的大小。

### 受保护成员函数

- **`WBGraphicsPolygonItem* lineToPolygonItem(const QLineF& pLine, const qreal& pWidth)`**:
  将线段转换为多边形项，指定宽度。

- **`WBGraphicsPolygonItem* lineToPolygonItem(const QLineF &pLine, const qreal &pStartWidth, const qreal &pEndWidth)`**:
  将线段转换为多边形项，指定起始和结束宽度。

- **`WBGraphicsPolygonItem* arcToPolygonItem(const QLineF& pStartRadius, qreal pSpanAngle, qreal pWidth)`**:
  将弧形转换为多边形项，指定起始半径、跨度角度和宽度。

- **`WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPair<QPointF, qreal> > &points)`**:
  将曲线转换为多边形项，点包含位置和宽度。

- **`WBGraphicsPolygonItem* curveToPolygonItem(const QList<QPointF> &points, qreal startWidth, qreal endWidth)`**:
  将曲线转换为多边形项，点只包含位置，指定起始和结束宽度。

- **`void addPolygonItemToCurrentStroke(WBGraphicsPolygonItem* polygonItem)`**:
  将多边形项添加到当前笔画中。

- **`void initPolygonItem(WBGraphicsPolygonItem*)`**:
  初始化多边形项。

- **`void drawEraser(const QPointF& pEndPoint, bool pressed = true)`**:
  绘制橡皮擦到指定位置，可选择是否按下。

- **`void redrawEraser(bool pressed)`**:
  重新绘制橡皮擦，指定是否按下。

- **`void hideEraser()`**:
  隐藏橡皮擦。

- **`void drawPointer(const QPointF& pEndPoint, bool isFirstDraw = false)`**:
  绘制指针到指定位置，可选择是否为第一次绘制。

- **`void drawMarkerCircle(const QPointF& pEndPoint)`**:
  绘制标记圆圈到指定位置。

- **`void drawPenCircle(const QPointF& pEndPoint)`**:
  绘制笔圈到指定位置。

- **`void hideMarkerCircle()`**:
  隐藏标记圆圈。

- **`void hidePenCircle()`**:
  隐藏笔圈。

- **`void DisposeMagnifierQWidgets()`**:
  处理放大镜的 Qt 小部件资源释放。

- **`virtual void keyReleaseEvent(QKeyEvent * keyEvent)`**:
  处理键释放事件。

- **`void recolorAllItems()`**:
  重新着色所有项。

- **`virtual void drawItems (QPainter * painter, int numItems, QGraphicsItem * items[], const QStyleOptionGraphicsItem options[], QWidget * widget = 0)`**:
  绘制项，

使用指定的绘图器、项数组和样式选项。

- **`QGraphicsItem* rootItem(QGraphicsItem* item) const`**:
  获取图形项的根项。

- **`virtual void drawBackground(QPainter *painter, const QRectF &rect)`**:
  绘制背景，使用指定的绘图器和矩形区域。

### 私有成员变量

- **`QGraphicsEllipseItem* mEraser`**:
  橡皮擦图形项。

- **`QGraphicsEllipseItem* mPointer`**:
  指针图形项。

- **`QGraphicsEllipseItem* mMarkerCircle`**:
  标记圆圈图形项。

- **`QGraphicsEllipseItem* mPenCircle`**:
  笔圈图形项。

- **`QSet<QGraphicsItem*> mAddedItems`**:
  已添加的图形项集合。

- **`QSet<QGraphicsItem*> mRemovedItems`**:
  已移除的图形项集合。

- **`WBDocumentProxy* mDocument`**:
  文档代理。

- **`bool mDarkBackground`**:
  是否使用深色背景。

- **`WBPageBackground mPageBackground`**:
  页面背景类型。

- **`int mBackgroundGridSize`**:
  背景网格大小。

- **`bool mIsDesktopMode`**:
  是否为桌面模式。

- **`qreal mZoomFactor`**:
  缩放因子。

- **`QGraphicsItem* mBackgroundObject`**:
  背景对象。

- **`QPointF mPreviousPoint`**:
  上一个点的位置。

- **`qreal mPreviousWidth`**:
  上一个笔画的宽度。

- **`qreal mDistanceFromLastStrokePoint`**:
  从上一个笔画点的距离。

- **`QList<WBGraphicsPolygonItem*> mPreviousPolygonItems`**:
  上一个多边形项的列表。

- **`SceneViewState mViewState`**:
  视图状态。

- **`bool mInputDeviceIsPressed`**:
  输入设备是否按下。

- **`QSet<QGraphicsItem*> mTools`**:
  工具集合。

- **`WBGraphicsPolygonItem *mArcPolygonItem`**:
  弧形多边形项。

- **`QSize mNominalSize`**:
  名义大小。

- **`RenderingContext mRenderingContext`**:
  渲染上下文。

- **`WBGraphicsStroke* mCurrentStroke`**:
  当前笔画。

- **`int mItemCount`**:
  项计数。

- **`QList<QGraphicsItem*> mFastAccessItems`**:
  快速访问的图形项列表。

- **`bool mHasCache`**:
  是否有缓存。

- **`bool mUndoRedoStackEnabled`**:
  撤销/重做栈是否启用。

- **`WBMagnifier *magniferControlViewWidget`**:
  控制视图的放大镜小部件。

- **`WBMagnifier *magniferDisplayViewWidget`**:
  显示视图的放大镜小部件。

- **`WBZLayerController *mZLayerController`**:
  Z 轴层级控制器。

- **`WBGraphicsPolygonItem* mpLastPolygon`**:
  最后一个多边形项。

- **`WBGraphicsPolygonItem* mTempPolygon`**:
  临时多边形项。

- **`bool mDrawWithCompass`**:
  是否使用圆规绘制。

- **`WBGraphicsPolygonItem *mCurrentPolygon`**:
  当前多边形项。

- **`WBSelectionFrame *mSelectionFrame`**:
  选择框。

这段代码提供了一个丰富的接口来处理图形场景中的各种操作，包括图形项的管理、绘制操作、背景设置、视图状态管理等功能。
它使得开发者能够在图形场景中创建、修改、删除和操作不同类型的图形项，同时支持撤销/重做操作、渲染质量设置和多种背景选项。

*/
