#ifndef WBGRAPHICSITEMDELEGATE_H_
#define WBGRAPHICSITEMDELEGATE_H_

/*主要用于处理图形项的委托操作和相关控制,充当了图形项的代理，负责处理与图形项相关的各种交互操
作、状态管理和控制元素的显示与操作。
1.提供了一系列方法用于创建、释放和显示控制元素，处理各种鼠标、键盘和悬停事件，处理图形项的变化，执行撤销操作，以及处
理图形项的锁定、显示隐藏、复制、顺序调整等操作。
2.包含了一些信号，用于通知显示状态和锁定状态的改变。公共槽函数用于执行移除、显示菜单、显示隐藏、锁定、复制、调整顺序、
处理缩放变化等操作。
3.保护方法用于构建和释放按钮、装饰菜单、更新菜单动作状态，以及处理递归的显示隐藏和锁定操作。私有方法用于更新框架、按
钮和相关数据。
3.成员变量用于存储被委托的图形项、各种按钮、菜单、框架、变换信息、标志、拖放相关的数据等。*/


// `WB_FREE_CONTROL` 是一个用于安全删除对象的宏。
// 它首先检查 `Object` 是否存在，然后如果 `Scene` 也存在，则从 `Scene` 中移除 `Object`。
// 接着，调用 `Object` 的 `deleteLater()` 方法进行延迟删除，最后将指针 `Object` 设为 `0`。

#define WB_FREE_CONTROL(Object, Scene) \
    if (Object) {                      \
        if (Scene) {                   \
            Scene->removeItem(Object); \
        }                              \
        Object->deleteLater();         \
        Object = 0;                    \
    }                                  \

#include <QtWidgets>
#include <QtSvg>
#include <QMimeData>
#include <QGraphicsVideoItem>

#include "core/WB.h"
#include "core/WBSettings.h"

// 前置声明
// 这些前置声明减少了头文件之间的相互依赖，提高了编译速度。
class QGraphicsSceneMouseEvent;
class QGraphicsItem;
class WBGraphicsScene;
class WBGraphicsProxyWidget;
class WBGraphicsDelegateFrame;
class WBGraphicsWidgetItem;
class WBGraphicsMediaItem;

class DelegateButton: public QGraphicsSvgItem
{
    Q_OBJECT

    public:
        // 构造函数 `DelegateButton` 用于初始化按钮，设置文件名、被委派项、父项和对齐位置。 
        DelegateButton(const QString & fileName, QGraphicsItem* pDelegated, QGraphicsItem * parent = 0, Qt::WindowFrameSection section = Qt::TopLeftSection);

        virtual ~DelegateButton();

        enum { Type = WBGraphicsItemType::DelegateButtonType };
        virtual int type() const { return Type; }                                                           // 返回按钮类型。

        void setTransparentToMouseEvent(bool tr)                                                            // 设置按钮是否对鼠标事件透明。
        {
            mIsTransparentToMouseEvent = tr;
        }

        void setFileName(const QString & fileName);                                                         // 设置按钮的文件名。

        void setShowProgressIndicator(bool pShow) {mShowProgressIndicator = pShow;}                         // 设置是否显示进度指示器。
        bool testShowProgresIndicator() const {return mShowProgressIndicator;}                              // 测试是否显示进度指示器。

        void setSection(Qt::WindowFrameSection section) {mButtonAlignmentSection =  section;}               // 设置按钮的对齐位置。
        Qt::WindowFrameSection getSection() const {return mButtonAlignmentSection;}                         // 获取按钮的对齐位置。

    protected:
        virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);                                      // 处理鼠标按下事件。
        virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);                                    // 处理鼠标释放事件。
        virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);     // 绘制按钮。
        void timerEvent(QTimerEvent *event);                                                                // 处理定时器事件。
        void modified();                                                                                    // 修改按钮状态。

	private slots:
        void startShowProgress();                           // 开始显示进度

    private:
        QGraphicsItem* mDelegated;                          // 被委派的图形项。

        QTime mPressedTime;                                 // 按下按钮的时间。
        bool mIsTransparentToMouseEvent;                    // 按钮是否对鼠标事件透明。
        bool mIsPressed;                                    // 按钮是否被按下。
        int mProgressTimerId;                               // 进度计时器ID。
        int mPressProgres;                                  // 按下进度。
        bool mShowProgressIndicator;                        // 是否显示进度指示器。
        Qt::WindowFrameSection mButtonAlignmentSection;     // 按钮的对齐位置。

    signals:
        void clicked (bool checked = false);                // 按钮被点击的信号
        void longClicked();                                 // 按钮被长按的信号

};

class MediaTimer: public QGraphicsRectItem
{
public:
    // 用于初始化计时器，设置父项。
    MediaTimer(QGraphicsItem * parent = 0);
    ~MediaTimer();

    void positionHandles();                                                                 // 位置句柄。
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,                   // 绘制计时器。
                QWidget *widget);

    void display(const QString &str);                                                       // 显示字符串。
    void setNumDigits(int nDigits);                                                         // 设置显示的数字位数。

private:
    static const char* getSegments(char);                                                   // 获取字符的段表示。
    void drawString(const QString& s, QPainter &, QBitArray * = 0, bool = true);            // 绘制字符串。
    void drawDigit(const QPoint &, QPainter &, int, char, char = ' ');                      // 绘制数字。
    void drawSegment(const QPoint &, char, QPainter &, int, bool = false);                  // 绘制段。
    void addPoint(QPolygon&, const QPoint&);                                                // 添加点。
    void internalSetString(const QString& s);                                               // 内部设置字符串。

    static char segments [][8];

    int ndigits;                // 显示的数字位数。
    QString digitStr;           // 显示的数字字符串。
    QBitArray points;           // 点阵图。
    double val;                 // 当前值。

    uint shadow : 1;            // 是否有阴影。
    uint smallPoint : 1;        // 是否显示小点。

    int digitSpace;             // 数字间距。
    int xSegLen;                // x方向段长度。
    int ySegLen;                // y方向段长度。
    int segLen;                 // 段长度。
    int xAdvance;               // x方向前进量。
    int xOffset;                // x方向偏移量。
    int yOffset;                // y方向偏移量。
};


// DelegateMediaControl 类主要用于在图形界面中控制媒体播放，包含了绘制、鼠标事件处理、时间更新等功能。
// 通过继承 QObject 和 QGraphicsRectItem，它可以利用Qt的信号槽机制并在图形场景中进行渲染和交互。
class DelegateMediaControl: public QObject, public QGraphicsRectItem
{
    // DelegateMediaControl 继承自 QObject 和 QGraphicsRectItem，因此它可以使用Qt的信号和槽机制，并且可以作为一个图形项被添加到图形场景中。
    Q_OBJECT

    public:
        DelegateMediaControl(WBGraphicsMediaItem* pDelegated, QGraphicsItem * parent = 0);

        virtual ~DelegateMediaControl()
        {

		}

        // 重写的 paint 函数，用于绘制图形项。
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);

        // 返回该图形项的形状，用于碰撞检测。
        QPainterPath shape() const;

        // 重写的鼠标事件处理函数，用于处理鼠标按下、移动和释放事件。
        virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
        virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

        // 重写的 update 函数，用于更新图形项。
        virtual void update();

        void positionHandles();                             // 调整控件的位置。
        void updateTicker(qint64 time);                     // 更新当前时间。
        void totalTimeChanged(qint64 newTotalTime);         // 当总时间变化时更新相关数据。

    signals:
        void used();                                        // 定义了一个信号 used，可以在类的其他部分或其他对象中连接和响应。

    protected:  
        void seekToMousePos(QPointF mousePos);              // 受保护的成员函数 seekToMousePos，用于根据鼠标位置进行调整。
            
        WBGraphicsMediaItem* mDelegate;                     // 指向被委托的媒体项。
        bool mDisplayCurrentTime;                           // 布尔值，指示是否显示当前时间。

        qint64 mCurrentTimeInMs;                            // 当前时间，以毫秒为单位。
        qint64 mTotalTimeInMs;                              // 总时间，以毫秒为单位。
            
    private:    
        int mStartWidth;                                    // 起始宽度。
        int mSeecAreaBorderHeight;                          // 搜索区域的边框高度。

        QRectF mSeecArea;                                   // 表示矩形区域。
        QRectF mLCDTimerArea;                               // 表示矩形区域。

        MediaTimer *lcdTimer;                               // 指向 MediaTimer 对象的指针。
            
        QString mDisplayFormat;                             // 显示格式的字符串。
};

// WBGraphicsToolBarItem 的类，它继承自 QObject 和 QGraphicsRectItem。
// 这个类的主要作用是创建一个自定义的图形工具栏项，可以在Qt图形视图框架中使用。
// WBGraphicsToolBarItem 类是一个自定义的图形工具栏项，允许使用信号槽机制，可以被添加到图形场景中。
// 它提供了控制可见性、移动状态、包含的图形项以及尺寸和间距的方法，并且可以通过重载 paint 方法自定义绘制逻辑。
class WBGraphicsToolBarItem : public QObject, public QGraphicsRectItem 
{
    // WBGraphicsToolBarItem 类继承了 QObject 和 QGraphicsRectItem。
    // 这意味着它既可以使用Qt的信号槽机制（通过 QObject 继承），又可以作为一个图形项添加到 QGraphicsScene 中（通过 QGraphicsRectItem 继承）。
    public:
        WBGraphicsToolBarItem(QGraphicsItem * parent = 0);
        virtual ~WBGraphicsToolBarItem() {;}
        
        // 分别用于获取和设置工具栏项的可见性状态。mVisible 是一个私有成员变量，用于存储可见性状态。
        bool isVisibleOnBoard() const { return mVisible; }
        void setVisibleOnBoard(bool visible) { mVisible = visible; }
        
        // 分别用于获取和设置工具栏项的移动状态。mShifting 是一个私有成员变量，用于存储移动状态。
        bool isShifting() const { return mShifting; }
        void setShifting(bool shifting) { mShifting = shifting; }

        //  分别用于获取和设置工具栏上的图形项列表。mItemsOnToolBar 是一个私有成员变量，用于存储这些图形项。
        QList<QGraphicsItem*> itemsOnToolBar() const { return mItemsOnToolBar; }
        void setItemsOnToolBar(QList<QGraphicsItem*> itemsOnToolBar) { mItemsOnToolBar = itemsOnToolBar;}

        // 返回工具栏项的最小宽度。mMinWidth 是一个私有成员变量。
        int minWidth() { return mMinWidth; }

        // 分别用于定位工具栏项的控制点和更新工具栏项的显示。
        void positionHandles();
        void update();

        // 返回工具栏项的元素间距。mElementsPadding 是一个私有成员变量。
        int getElementsPadding(){return mElementsPadding;}

    private:
        // 用于绘制工具栏项的外观。它重载了 QGraphicsRectItem 的 paint 方法。
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);

    private:
        bool mShifting;                             // 存储工具栏项的移动状态。
        bool mVisible;                              // 存储工具栏项的可见性状态。
        int mMinWidth;                              // 存储工具栏项的最小宽度。
        int mInitialHeight;                         // 存储工具栏项的初始高度。
        int mElementsPadding;                       // 存储工具栏项的元素间距。
        QList<QGraphicsItem*> mItemsOnToolBar;      // 存储工具栏上的图形项列表。
};

// 这段代码定义了一个名为 WBGraphicsItemDelegate 的类，它继承自 QObject，并使用了一些Qt特性（例如信号和槽）。
// 这个类的主要作用是作为委托（delegate），管理和控制一个 QGraphicsItem 对象的行为和外观。
// WBGraphicsItemDelegate 类是一个委托类，用于管理和控制 QGraphicsItem 对象的行为和外观。
// 它提供了丰富的方法来处理鼠标和键盘事件、显示和隐藏控件、管理按钮和菜单、处理图形项的变化等。
// 通过信号和槽机制，该类可以与其他Qt对象进行交互，实现复杂的用户界面功能。
class WBGraphicsItemDelegate : public QObject
{
    // WBGraphicsItemDelegate 类继承自 QObject，允许它使用Qt的信号和槽机制。
    Q_OBJECT

    public:
        // 用于初始化对象，其中 pDelegated 是被委托的 QGraphicsItem 对象，parent 是父对象，fls 是一些标志位。
		WBGraphicsItemDelegate(QGraphicsItem* pDelegated, QObject * parent = 0, WBGraphicsFlags fls = 0);

        virtual ~WBGraphicsItemDelegate();

        virtual void createControls();              // 创建控件。
        virtual void freeControls();                // 释放控件。
        virtual void showControls();                // 显示控件。
        virtual bool controlsExist() const;         // 检查控件是否存在。

        // 这些函数处理鼠标事件，包括按下、移动、释放和滚轮事件。
        virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);
        virtual bool mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        virtual bool mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        virtual bool wheelEvent(QGraphicsSceneWheelEvent *event);

        // 处理鼠标悬停事件。
        virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

        // 处理键盘事件。
        virtual bool keyPressEvent(QKeyEvent *event);
        virtual bool keyReleaseEvent(QKeyEvent *event);

        virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change,
                const QVariant &value);                                                                             // 处理图形项的变化。
        virtual WBGraphicsScene *castUBGraphicsScene();                                                             // 将当前场景转换为 WBGraphicsScene。
        virtual void postpaint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);         // 在绘制后进行额外的绘制操作。

        // 提供了各种操作委托对象的方法，如显示消息、获取被委托的图形项、处理控件的位置、设置按钮的可见性等。
        void printMessage(const QString &mess) {qDebug() << mess;}

		QGraphicsItem* delegated();

        virtual void positionHandles();
        void setZOrderButtonsVisible(bool visible);

        void startUndoStep();
        void commitUndoStep();

        WBGraphicsDelegateFrame* frame() {return mFrame;}

        bool isLocked() const;

        QMimeData* mimeData(){ return mMimeData; }
        void setMimeData(QMimeData* mimeData);
        void setDragPixmap(const QPixmap &pix) {mDragPixmap = pix;}

        void setLocked(bool pLocked);
        void setButtonsVisible(bool visible);

        WBGraphicsToolBarItem* getToolBarItem() const { return mToolBarItem; }

        qreal antiScaleRatio() const { return mAntiScaleRatio; }
        virtual void update() {positionHandles();}

        WBGraphicsFlags ubflags() const {return mFlags;}
        bool testUBFlags(WBGraphicsFlags pf) const {return mFlags & pf;}
        void setUBFlags(WBGraphicsFlags pf);
        void setUBFlag(WBGraphicsFlags pf, bool set = true);

        virtual void showToolBar(bool autohide = true) {Q_UNUSED(autohide);}

    signals:
        // 定义了两个信号，用于在显示状态或锁定状态改变时发出通知。
        void showOnDisplayChanged(bool shown);
        void lockChanged(bool locked);

    public slots:
        // 定义了一些槽函数，用于处理各种操作，如删除、显示菜单、显示或隐藏、锁定、复制、调整Z轴顺序和缩放变化。
        virtual void remove(bool canUndo = true);
        void showMenu();

        virtual void showHide(bool show);
        virtual void lock(bool lock);
        virtual void duplicate();

        void increaseZLevelUp();
        void increaseZLevelDown();
        void increaseZlevelTop();
        void increaseZlevelBottom();

        void onZoomChanged();

    protected:
        // 这些受保护的成员函数和槽用于构建和管理按钮、装饰菜单、更新菜单动作状态，以及递归地显示/隐藏或锁定图形项。
        virtual void buildButtons();
        virtual void freeButtons();
        virtual void decorateMenu(QMenu *menu);
        virtual void updateMenuActionState();

        void showHideRecurs(const QVariant &pShow, QGraphicsItem *pItem);
        void setLockedRecurs(const QVariant &pLock, QGraphicsItem *pItem);

        QList<DelegateButton*> buttons() {return mButtons;}
        QGraphicsItem* mDelegated;

        //buttons from the top left section of delegate frame
        DelegateButton* mDeleteButton;
        DelegateButton* mDuplicateButton;
        DelegateButton* mMenuButton;

        //buttons from the bottom left section of delegate frame
        DelegateButton *mZOrderUpButton;
        DelegateButton *mZOrderDownButton;

        QMenu* mMenu;

        QAction* mLockAction;
        QAction* mShowOnDisplayAction;
        QAction* mSetAsBackgroundAction;
        QAction* mGotoContentSourceAction;

        WBGraphicsDelegateFrame* mFrame;
        qreal mFrameWidth;
        qreal mAntiScaleRatio;

        QList<DelegateButton*> mButtons;
        QList<DelegateButton*> mToolBarButtons;
        WBGraphicsToolBarItem* mToolBarItem;

	protected slots:
        virtual void setAsBackground();
        virtual void gotoContentSource();

	private:
        // 用于更新框架和按钮的状态。
        void updateFrame();
        void updateButtons(bool showUpdated = false);

        // 私有成员变量用于存储偏移量、先前的变换、位置、拖动起始位置、Z值、大小、MIME数据、拖动图标等信息，以及一些标志位。
        QPointF mOffset;
        QTransform mPreviousTransform;
        QPointF mPreviousPosition;
        QPointF mDragStartPosition;
        qreal mPreviousZValue;
        QSizeF mPreviousSize;
        QMimeData* mMimeData;
        QPixmap mDragPixmap;

        bool mMoved;
        WBGraphicsFlags mFlags;
};

#endif /* WBGRAPHICSITEMDELEGATE_H_ */