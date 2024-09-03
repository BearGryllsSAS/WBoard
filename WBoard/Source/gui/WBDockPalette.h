#ifndef WBDOCKPALETTE_H
#define WBDOCKPALETTE_H

/*WBDockPalette: ��һ���Զ����ͣ������࣬���ڹ����չʾһϵ����صĲ�����
�ṩ��һ���ɶ��Ƶ�ͣ������ܣ�������֯�͹�������صĲ��������������ǵ���ʾ�������Ͳ��ֵ����ȹ��ܡ�*/

/*WBDockPalette ������ڲ��� WBTabDockPalette �����ڹ������ʾ����ͣ�����Ŀؼ��������ṩ���û�������ͣ�����Ĳ��ֺͽ������ܡ�*/

/**/

class WBDocumentProxy;

#include <QWidget>
#include <QMouseEvent>
#include <QBrush>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QEvent>
#include <QTime>
#include <QPoint>
#include <QPixmap>
#include <QMap>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QVector>

#include "WBDockPaletteWidget.h"

// ������ TABSIZE �� CLICKTIME �꣬���ڿ��Ʊ�ǩ�Ĵ�С�͵��ʱ�䡣
#define TABSIZE 50    
#define CLICKTIME 1000000

/**
 * \brief The dock positions
 */
// ������ͣ�����ͱ�ǩ�ķ���ö�����͡�
typedef enum
{
    eWBDockOrientation_Left, 
    eWBDockOrientation_Right,
    eWBDockOrientation_Top,
    eWBDockOrientation_Bottom
}eWBDockOrientation;

typedef enum
{
    eWBDockTabOrientation_Up,
    eWBDockTabOrientation_Down
}eWBDockTabOrientation;

class WBDockPalette;

// WBTabDockPalette ��һ����ǩͣ����壬�̳��� QWidget��
class WBTabDockPalette : public QWidget
{
    Q_OBJECT
    // friend class WBDockPalette; ʹ WBDockPalette ����Է��� WBTabDockPalette ��˽�г�Ա��
    friend class WBDockPalette;

public:
    WBTabDockPalette(WBDockPalette *dockPalette, QWidget *parent = 0);
    ~WBTabDockPalette();

protected:
    // ��������¼�
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    // ����滭�¼� 
    virtual void paintEvent(QPaintEvent *event);

private:
    // ˽�г�Ա���� dock ָ�������� WBDockPalette
    WBDockPalette *dock;
    // ���ƴ�ֱƫ��
    int mVerticalOffset;
    // ���Ʊ�ǩ�Ƿ���Ը���
    bool mFlotable;
};

typedef enum
{
    eWBDockPaletteType_LEFT,
    eWBDockPaletteType_RIGHT
} eWBDockPaletteType;

// WBDockPalette ����һ�����ڹ������ʾ����ͣ�����Ŀؼ������ṩ���û�������ͣ�����Ĳ��ֺͽ������ܡ�
class WBDockPalette : public QWidget
{
    Q_OBJECT
    friend class WBTabDockPalette;

public:
    // ��ʼ�������ٶ�������ͣ���������ͺ͸��ؼ���
    WBDockPalette(eWBDockPaletteType paletteType, QWidget* parent=0, const char* name="WBDockPalette");
    ~WBDockPalette();

    // ��ȡ������ͣ�����ķ��򼰱�ǩ����
    eWBDockOrientation orientation();                                                        
    void setOrientation(eWBDockOrientation orientation);
    void setTabsOrientation(eWBDockTabOrientation orientation);     
    
    // ��ʾָ�������ı�ǩҳ�� 
    void showTabWidget(int tabIndex);        

    // ��ȡ��ǩ����������
    QRect getTabPaletteRect();                                                               

    // ���ø��ؼ�
    virtual void assignParent(QWidget *widget);      
    // ���ÿɼ���
    virtual void setVisible(bool visible);
                                         
    // �����¼�
    virtual void paintEvent(QPaintEvent* event);               

    // ����¼�
    virtual void enterEvent(QEvent*);                                                       
    virtual void leaveEvent(QEvent *);                                                       

    // ���ñ�����ˢ
    void setBackgroundBrush(const QBrush& brush);                                            
    void registerWidget(WBDockPaletteWidget* widget);                                        
    
    // ע������/�Ƴ���ǩҳ
    void addTab(WBDockPaletteWidget* widget);                                                
    void removeTab(WBDockPaletteWidget* widget);                                             

    // �����ź�
    void connectSignals();                                                                   

    // �л�ģʽ
    bool switchMode(eWBDockPaletteWidgetMode mode);                                          
    
    // ��ǰ��ͣ�����ģʽ��
    eWBDockPaletteWidgetMode mCurrentMode;                                                  

    // ������ע���С�����б�
    QVector<WBDockPaletteWidget*> GetWidgetsList() { return mRegisteredWidgets; }            

public:
    bool isTabFlotable() {return mTabPalette->mFlotable;}                                       // ����ǩҳ�Ƿ�ɸ�����
    void setTabFlotable(bool newFlotable) {mTabPalette->mFlotable = newFlotable;}               // ���ñ�ǩҳ�Ŀɸ����ԡ�
    int getAdditionalVOffset() const {return mTabPalette->mVerticalOffset;}                     // ��ȡ��ǩҳ�Ķ��ⴹֱƫ������
    void setAdditionalVOffset(int newOffset) {mTabPalette->mVerticalOffset = newOffset;}        // ���ñ�ǩҳ�Ķ��ⴹֱƫ������
        
    eWBDockPaletteType paletteType(){return mPaletteType;}                                      // ��ȡ��ǰͣ���������͡�

public slots:
    void onShowTabWidget(WBDockPaletteWidget* widget);                                          // ��ʾָ����С������
    void onHideTabWidget(WBDockPaletteWidget* widget);                                          // ����ָ����С������
    void onAllDownloadsFinished();                                                              // �����������ʱ�Ĳۺ�����
    virtual void onDocumentSet(WBDocumentProxy* documentProxy);                                 // �����ĵ�ʱ�Ĳۺ�����

signals:
    void mouseEntered();                                                                        // ������ͣ�����ʱ�������źš�
    void pageSelectionChangedRequired();                                                        // ҳ��ѡ��仯ʱ�������źš�

protected:
    virtual int border();                                                                       // ���ر߿��ȡ�
    virtual int radius();                                                                       // ����Բ�ǰ뾶��
    virtual int customMargin();                                                                 // �����Զ���߾ࡣ
    virtual void updateMaxWidth();                                                              // ��������ȡ�
    virtual void resizeEvent(QResizeEvent *event);                                              // ������С�¼���������
    virtual int collapseWidth();                                                                // �����۵���ȡ�

    /** The current dock orientation */
    eWBDockOrientation mOrientation;                                                            // ��ǰͣ�����ķ���
    /** The current background brush */
    QBrush mBackgroundBrush;                                                                    // ������ˢ��
    /** The preferred width */
    int mPreferredWidth;                                                                        // ��ѡ��ȡ�
    /** The preferred height */
    int mPreferredHeight;                                                                       // ��ѡ�߶ȡ�
    /** A flag used to allow the resize */
    bool mCanResize;                                                                            // �Ƿ���Ե�����С�ı�־��
    /** A flag indicating if the palette has been resized between a click and a release */
    bool mResized;                                                                              // �Ƿ��ѵ�����С�ı�־��
    /** The width that trig the collapse */
    int mCollapseWidth;                                                                         // �����۵��Ŀ�ȡ�
    /** The last width of the palette */
    int mLastWidth;                                                                             // �ϴεĿ�ȡ�
    /** The click time*/                                                                
    QTime mClickTime;                                                                           // ���ʱ�䡣
    /** The mouse pressed position */
    QPoint mMousePressPos;                                                                      // ��갴��λ�á�
    /** The tab orientation */
    eWBDockTabOrientation mTabsOrientation;                                                     // ��ǩҳ�ķ���
    /** The h position of the tab */
    int mHTab;                                                                                  // ��ǩ��ˮƽλ�á�
    /** The stacked widget */
    QStackedWidget* mpStackWidget;                                                              // �ѵ�С������
    /** The layout */
    QVBoxLayout* mpLayout;                                                                      // ���ֹ�������
    /** The current tab index */
    int mCurrentTab;                                                                            // ��ǰ��ǩҳ������
    /** The visible tab widgets */
    QVector<WBDockPaletteWidget*> mTabWidgets;                                                  // �ɼ���ǩҳС�����б�
    /** The current widget */
    QVector<WBDockPaletteWidget*> mRegisteredWidgets;                                           // ��ע���С�����б�
    /** The current tab widget */
    QString mCrntTabWidget;                                                                     // ��ǰ��ǩҳС���������ơ�
    /** Last opened tab index depending on mode */
    QMap<eWBDockPaletteWidgetMode,int> mLastOpenedTabForMode;                                   // ��¼ÿ��ģʽ�����򿪵ı�ǩҳ������

private slots:
    void onToolbarPosUpdated();                                                                 // ������λ�ø���ʱ�Ĳۺ�����
    void onResizeRequest(QResizeEvent* event);                                                  // ������С����Ĳۺ�����

private:
    void tabClicked(int tabIndex);                                                              // ��ǩҳ�����ʱ�Ĵ�������
    int tabSpacing();                                                                           // ���ر�ǩ��ࡣ
    void toggleCollapseExpand();                                                                // �л��۵�/չ��״̬��
    void moveTabs();                                                                            // �ƶ���ǩҳ��
    void resizeTabs();                                                                          // ������ǩҳ��С��

private:
    eWBDockPaletteType mPaletteType;                                                            // ͣ��������͡�
    WBTabDockPalette *mTabPalette;                                                              // ��ǩ������
};

#endif // WBDOCKPALETTE_H
