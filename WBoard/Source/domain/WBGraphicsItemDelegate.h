#ifndef WBGRAPHICSITEMDELEGATE_H_
#define WBGRAPHICSITEMDELEGATE_H_

/*��Ҫ���ڴ���ͼ�����ί�в�������ؿ���,�䵱��ͼ����Ĵ�����������ͼ������صĸ��ֽ�����
����״̬����Ϳ���Ԫ�ص���ʾ�������
1.�ṩ��һϵ�з������ڴ������ͷź���ʾ����Ԫ�أ����������ꡢ���̺���ͣ�¼�������ͼ����ı仯��ִ�г����������Լ���
��ͼ�������������ʾ���ء����ơ�˳������Ȳ�����
2.������һЩ�źţ�����֪ͨ��ʾ״̬������״̬�ĸı䡣�����ۺ�������ִ���Ƴ�����ʾ�˵�����ʾ���ء����������ơ�����˳��
�������ű仯�Ȳ�����
3.�����������ڹ������ͷŰ�ť��װ�β˵������²˵�����״̬���Լ�����ݹ����ʾ���غ�����������˽�з������ڸ��¿�ܡ���
ť��������ݡ�
3.��Ա�������ڴ洢��ί�е�ͼ������ְ�ť���˵�����ܡ��任��Ϣ����־���Ϸ���ص����ݵȡ�*/


// `WB_FREE_CONTROL` ��һ�����ڰ�ȫɾ������ĺꡣ
// �����ȼ�� `Object` �Ƿ���ڣ�Ȼ����� `Scene` Ҳ���ڣ���� `Scene` ���Ƴ� `Object`��
// ���ţ����� `Object` �� `deleteLater()` ���������ӳ�ɾ�������ָ�� `Object` ��Ϊ `0`��

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

// ǰ������
// ��Щǰ������������ͷ�ļ�֮����໥����������˱����ٶȡ�
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
        // ���캯�� `DelegateButton` ���ڳ�ʼ����ť�������ļ�������ί�������Ͷ���λ�á� 
        DelegateButton(const QString & fileName, QGraphicsItem* pDelegated, QGraphicsItem * parent = 0, Qt::WindowFrameSection section = Qt::TopLeftSection);

        virtual ~DelegateButton();

        enum { Type = WBGraphicsItemType::DelegateButtonType };
        virtual int type() const { return Type; }                                                           // ���ذ�ť���͡�

        void setTransparentToMouseEvent(bool tr)                                                            // ���ð�ť�Ƿ������¼�͸����
        {
            mIsTransparentToMouseEvent = tr;
        }

        void setFileName(const QString & fileName);                                                         // ���ð�ť���ļ�����

        void setShowProgressIndicator(bool pShow) {mShowProgressIndicator = pShow;}                         // �����Ƿ���ʾ����ָʾ����
        bool testShowProgresIndicator() const {return mShowProgressIndicator;}                              // �����Ƿ���ʾ����ָʾ����

        void setSection(Qt::WindowFrameSection section) {mButtonAlignmentSection =  section;}               // ���ð�ť�Ķ���λ�á�
        Qt::WindowFrameSection getSection() const {return mButtonAlignmentSection;}                         // ��ȡ��ť�Ķ���λ�á�

    protected:
        virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);                                      // ������갴���¼���
        virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);                                    // ��������ͷ��¼���
        virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);     // ���ư�ť��
        void timerEvent(QTimerEvent *event);                                                                // ����ʱ���¼���
        void modified();                                                                                    // �޸İ�ť״̬��

	private slots:
        void startShowProgress();                           // ��ʼ��ʾ����

    private:
        QGraphicsItem* mDelegated;                          // ��ί�ɵ�ͼ���

        QTime mPressedTime;                                 // ���°�ť��ʱ�䡣
        bool mIsTransparentToMouseEvent;                    // ��ť�Ƿ������¼�͸����
        bool mIsPressed;                                    // ��ť�Ƿ񱻰��¡�
        int mProgressTimerId;                               // ���ȼ�ʱ��ID��
        int mPressProgres;                                  // ���½��ȡ�
        bool mShowProgressIndicator;                        // �Ƿ���ʾ����ָʾ����
        Qt::WindowFrameSection mButtonAlignmentSection;     // ��ť�Ķ���λ�á�

    signals:
        void clicked (bool checked = false);                // ��ť��������ź�
        void longClicked();                                 // ��ť���������ź�

};

class MediaTimer: public QGraphicsRectItem
{
public:
    // ���ڳ�ʼ����ʱ�������ø��
    MediaTimer(QGraphicsItem * parent = 0);
    ~MediaTimer();

    void positionHandles();                                                                 // λ�þ����
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,                   // ���Ƽ�ʱ����
                QWidget *widget);

    void display(const QString &str);                                                       // ��ʾ�ַ�����
    void setNumDigits(int nDigits);                                                         // ������ʾ������λ����

private:
    static const char* getSegments(char);                                                   // ��ȡ�ַ��Ķα�ʾ��
    void drawString(const QString& s, QPainter &, QBitArray * = 0, bool = true);            // �����ַ�����
    void drawDigit(const QPoint &, QPainter &, int, char, char = ' ');                      // �������֡�
    void drawSegment(const QPoint &, char, QPainter &, int, bool = false);                  // ���ƶΡ�
    void addPoint(QPolygon&, const QPoint&);                                                // ��ӵ㡣
    void internalSetString(const QString& s);                                               // �ڲ������ַ�����

    static char segments [][8];

    int ndigits;                // ��ʾ������λ����
    QString digitStr;           // ��ʾ�������ַ�����
    QBitArray points;           // ����ͼ��
    double val;                 // ��ǰֵ��

    uint shadow : 1;            // �Ƿ�����Ӱ��
    uint smallPoint : 1;        // �Ƿ���ʾС�㡣

    int digitSpace;             // ���ּ�ࡣ
    int xSegLen;                // x����γ��ȡ�
    int ySegLen;                // y����γ��ȡ�
    int segLen;                 // �γ��ȡ�
    int xAdvance;               // x����ǰ������
    int xOffset;                // x����ƫ������
    int yOffset;                // y����ƫ������
};


// DelegateMediaControl ����Ҫ������ͼ�ν����п���ý�岥�ţ������˻��ơ�����¼�����ʱ����µȹ��ܡ�
// ͨ���̳� QObject �� QGraphicsRectItem������������Qt���źŲۻ��Ʋ���ͼ�γ����н�����Ⱦ�ͽ�����
class DelegateMediaControl: public QObject, public QGraphicsRectItem
{
    // DelegateMediaControl �̳��� QObject �� QGraphicsRectItem�����������ʹ��Qt���źźͲۻ��ƣ����ҿ�����Ϊһ��ͼ�����ӵ�ͼ�γ����С�
    Q_OBJECT

    public:
        DelegateMediaControl(WBGraphicsMediaItem* pDelegated, QGraphicsItem * parent = 0);

        virtual ~DelegateMediaControl()
        {

		}

        // ��д�� paint ���������ڻ���ͼ���
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);

        // ���ظ�ͼ�������״��������ײ��⡣
        QPainterPath shape() const;

        // ��д������¼������������ڴ�����갴�¡��ƶ����ͷ��¼���
        virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
        virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

        // ��д�� update ���������ڸ���ͼ���
        virtual void update();

        void positionHandles();                             // �����ؼ���λ�á�
        void updateTicker(qint64 time);                     // ���µ�ǰʱ�䡣
        void totalTimeChanged(qint64 newTotalTime);         // ����ʱ��仯ʱ����������ݡ�

    signals:
        void used();                                        // ������һ���ź� used������������������ֻ��������������Ӻ���Ӧ��

    protected:  
        void seekToMousePos(QPointF mousePos);              // �ܱ����ĳ�Ա���� seekToMousePos�����ڸ������λ�ý��е�����
            
        WBGraphicsMediaItem* mDelegate;                     // ָ��ί�е�ý���
        bool mDisplayCurrentTime;                           // ����ֵ��ָʾ�Ƿ���ʾ��ǰʱ�䡣

        qint64 mCurrentTimeInMs;                            // ��ǰʱ�䣬�Ժ���Ϊ��λ��
        qint64 mTotalTimeInMs;                              // ��ʱ�䣬�Ժ���Ϊ��λ��
            
    private:    
        int mStartWidth;                                    // ��ʼ��ȡ�
        int mSeecAreaBorderHeight;                          // ��������ı߿�߶ȡ�

        QRectF mSeecArea;                                   // ��ʾ��������
        QRectF mLCDTimerArea;                               // ��ʾ��������

        MediaTimer *lcdTimer;                               // ָ�� MediaTimer �����ָ�롣
            
        QString mDisplayFormat;                             // ��ʾ��ʽ���ַ�����
};

// WBGraphicsToolBarItem ���࣬���̳��� QObject �� QGraphicsRectItem��
// ��������Ҫ�����Ǵ���һ���Զ����ͼ�ι������������Qtͼ����ͼ�����ʹ�á�
// WBGraphicsToolBarItem ����һ���Զ����ͼ�ι����������ʹ���źŲۻ��ƣ����Ա���ӵ�ͼ�γ����С�
// ���ṩ�˿��ƿɼ��ԡ��ƶ�״̬��������ͼ�����Լ��ߴ�ͼ��ķ��������ҿ���ͨ������ paint �����Զ�������߼���
class WBGraphicsToolBarItem : public QObject, public QGraphicsRectItem 
{
    // WBGraphicsToolBarItem ��̳��� QObject �� QGraphicsRectItem��
    // ����ζ�����ȿ���ʹ��Qt���źŲۻ��ƣ�ͨ�� QObject �̳У����ֿ�����Ϊһ��ͼ������ӵ� QGraphicsScene �У�ͨ�� QGraphicsRectItem �̳У���
    public:
        WBGraphicsToolBarItem(QGraphicsItem * parent = 0);
        virtual ~WBGraphicsToolBarItem() {;}
        
        // �ֱ����ڻ�ȡ�����ù�������Ŀɼ���״̬��mVisible ��һ��˽�г�Ա���������ڴ洢�ɼ���״̬��
        bool isVisibleOnBoard() const { return mVisible; }
        void setVisibleOnBoard(bool visible) { mVisible = visible; }
        
        // �ֱ����ڻ�ȡ�����ù���������ƶ�״̬��mShifting ��һ��˽�г�Ա���������ڴ洢�ƶ�״̬��
        bool isShifting() const { return mShifting; }
        void setShifting(bool shifting) { mShifting = shifting; }

        //  �ֱ����ڻ�ȡ�����ù������ϵ�ͼ�����б�mItemsOnToolBar ��һ��˽�г�Ա���������ڴ洢��Щͼ���
        QList<QGraphicsItem*> itemsOnToolBar() const { return mItemsOnToolBar; }
        void setItemsOnToolBar(QList<QGraphicsItem*> itemsOnToolBar) { mItemsOnToolBar = itemsOnToolBar;}

        // ���ع����������С��ȡ�mMinWidth ��һ��˽�г�Ա������
        int minWidth() { return mMinWidth; }

        // �ֱ����ڶ�λ��������Ŀ��Ƶ�͸��¹����������ʾ��
        void positionHandles();
        void update();

        // ���ع��������Ԫ�ؼ�ࡣmElementsPadding ��һ��˽�г�Ա������
        int getElementsPadding(){return mElementsPadding;}

    private:
        // ���ڻ��ƹ����������ۡ��������� QGraphicsRectItem �� paint ������
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                QWidget *widget);

    private:
        bool mShifting;                             // �洢����������ƶ�״̬��
        bool mVisible;                              // �洢��������Ŀɼ���״̬��
        int mMinWidth;                              // �洢�����������С��ȡ�
        int mInitialHeight;                         // �洢��������ĳ�ʼ�߶ȡ�
        int mElementsPadding;                       // �洢���������Ԫ�ؼ�ࡣ
        QList<QGraphicsItem*> mItemsOnToolBar;      // �洢�������ϵ�ͼ�����б�
};

// ��δ��붨����һ����Ϊ WBGraphicsItemDelegate ���࣬���̳��� QObject����ʹ����һЩQt���ԣ������źźͲۣ���
// ��������Ҫ��������Ϊί�У�delegate��������Ϳ���һ�� QGraphicsItem �������Ϊ����ۡ�
// WBGraphicsItemDelegate ����һ��ί���࣬���ڹ���Ϳ��� QGraphicsItem �������Ϊ����ۡ�
// ���ṩ�˷ḻ�ķ������������ͼ����¼�����ʾ�����ؿؼ�������ť�Ͳ˵�������ͼ����ı仯�ȡ�
// ͨ���źźͲۻ��ƣ��������������Qt������н�����ʵ�ָ��ӵ��û����湦�ܡ�
class WBGraphicsItemDelegate : public QObject
{
    // WBGraphicsItemDelegate ��̳��� QObject��������ʹ��Qt���źźͲۻ��ơ�
    Q_OBJECT

    public:
        // ���ڳ�ʼ���������� pDelegated �Ǳ�ί�е� QGraphicsItem ����parent �Ǹ�����fls ��һЩ��־λ��
		WBGraphicsItemDelegate(QGraphicsItem* pDelegated, QObject * parent = 0, WBGraphicsFlags fls = 0);

        virtual ~WBGraphicsItemDelegate();

        virtual void createControls();              // �����ؼ���
        virtual void freeControls();                // �ͷſؼ���
        virtual void showControls();                // ��ʾ�ؼ���
        virtual bool controlsExist() const;         // ���ؼ��Ƿ���ڡ�

        // ��Щ������������¼����������¡��ƶ����ͷź͹����¼���
        virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);
        virtual bool mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        virtual bool mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
        virtual bool wheelEvent(QGraphicsSceneWheelEvent *event);

        // ���������ͣ�¼���
        virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
        virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

        // ��������¼���
        virtual bool keyPressEvent(QKeyEvent *event);
        virtual bool keyReleaseEvent(QKeyEvent *event);

        virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change,
                const QVariant &value);                                                                             // ����ͼ����ı仯��
        virtual WBGraphicsScene *castUBGraphicsScene();                                                             // ����ǰ����ת��Ϊ WBGraphicsScene��
        virtual void postpaint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);         // �ڻ��ƺ���ж���Ļ��Ʋ�����

        // �ṩ�˸��ֲ���ί�ж���ķ���������ʾ��Ϣ����ȡ��ί�е�ͼ�������ؼ���λ�á����ð�ť�Ŀɼ��Եȡ�
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
        // �����������źţ���������ʾ״̬������״̬�ı�ʱ����֪ͨ��
        void showOnDisplayChanged(bool shown);
        void lockChanged(bool locked);

    public slots:
        // ������һЩ�ۺ��������ڴ�����ֲ�������ɾ������ʾ�˵�����ʾ�����ء����������ơ�����Z��˳������ű仯��
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
        // ��Щ�ܱ����ĳ�Ա�����Ͳ����ڹ����͹���ť��װ�β˵������²˵�����״̬���Լ��ݹ����ʾ/���ػ�����ͼ���
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
        // ���ڸ��¿�ܺͰ�ť��״̬��
        void updateFrame();
        void updateButtons(bool showUpdated = false);

        // ˽�г�Ա�������ڴ洢ƫ��������ǰ�ı任��λ�á��϶���ʼλ�á�Zֵ����С��MIME���ݡ��϶�ͼ�����Ϣ���Լ�һЩ��־λ��
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