#ifndef WBDOCKPALETTE_H
#define WBDOCKPALETTE_H

/*WBDockPalette: 是一个自定义的停靠面板类，用于管理和展示一系列相关的部件。
提供了一个可定制的停靠面板框架，用于组织和管理多个相关的部件，并处理它们的显示、交互和布局调整等功能。*/

/*WBDockPalette 类和其内部类 WBTabDockPalette 是用于管理和显示各种停靠面板的控件。它们提供了用户界面中停靠面板的布局和交互功能。*/

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

// 定义了 TABSIZE 和 CLICKTIME 宏，用于控制标签的大小和点击时间。
#define TABSIZE 50    
#define CLICKTIME 1000000

/**
 * \brief The dock positions
 */
// 定义了停靠面板和标签的方向枚举类型。
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

// WBTabDockPalette 是一个标签停靠面板，继承自 QWidget。
class WBTabDockPalette : public QWidget
{
    Q_OBJECT
    // friend class WBDockPalette; 使 WBDockPalette 类可以访问 WBTabDockPalette 的私有成员。
    friend class WBDockPalette;

public:
    WBTabDockPalette(WBDockPalette *dockPalette, QWidget *parent = 0);
    ~WBTabDockPalette();

protected:
    // 处理鼠标事件
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    // 处理绘画事件 
    virtual void paintEvent(QPaintEvent *event);

private:
    // 私有成员变量 dock 指向所属的 WBDockPalette
    WBDockPalette *dock;
    // 控制垂直偏移
    int mVerticalOffset;
    // 控制标签是否可以浮动
    bool mFlotable;
};

typedef enum
{
    eWBDockPaletteType_LEFT,
    eWBDockPaletteType_RIGHT
} eWBDockPaletteType;

// WBDockPalette 类是一个用于管理和显示各种停靠面板的控件。它提供了用户界面中停靠面板的布局和交互功能。
class WBDockPalette : public QWidget
{
    Q_OBJECT
    friend class WBTabDockPalette;

public:
    // 初始化和销毁对象，设置停靠面板的类型和父控件。
    WBDockPalette(eWBDockPaletteType paletteType, QWidget* parent=0, const char* name="WBDockPalette");
    ~WBDockPalette();

    // 获取和设置停靠面板的方向及标签方向。
    eWBDockOrientation orientation();                                                        
    void setOrientation(eWBDockOrientation orientation);
    void setTabsOrientation(eWBDockTabOrientation orientation);     
    
    // 显示指定索引的标签页。 
    void showTabWidget(int tabIndex);        

    // 获取标签面板矩形区域
    QRect getTabPaletteRect();                                                               

    // 设置父控件
    virtual void assignParent(QWidget *widget);      
    // 设置可见性
    virtual void setVisible(bool visible);
                                         
    // 绘制事件
    virtual void paintEvent(QPaintEvent* event);               

    // 鼠标事件
    virtual void enterEvent(QEvent*);                                                       
    virtual void leaveEvent(QEvent *);                                                       

    // 设置背景画刷
    void setBackgroundBrush(const QBrush& brush);                                            
    void registerWidget(WBDockPaletteWidget* widget);                                        
    
    // 注册和添加/移除标签页
    void addTab(WBDockPaletteWidget* widget);                                                
    void removeTab(WBDockPaletteWidget* widget);                                             

    // 连接信号
    void connectSignals();                                                                   

    // 切换模式
    bool switchMode(eWBDockPaletteWidgetMode mode);                                          
    
    // 当前的停靠面板模式。
    eWBDockPaletteWidgetMode mCurrentMode;                                                  

    // 返回已注册的小部件列表。
    QVector<WBDockPaletteWidget*> GetWidgetsList() { return mRegisteredWidgets; }            

public:
    bool isTabFlotable() {return mTabPalette->mFlotable;}                                       // 检查标签页是否可浮动。
    void setTabFlotable(bool newFlotable) {mTabPalette->mFlotable = newFlotable;}               // 设置标签页的可浮动性。
    int getAdditionalVOffset() const {return mTabPalette->mVerticalOffset;}                     // 获取标签页的额外垂直偏移量。
    void setAdditionalVOffset(int newOffset) {mTabPalette->mVerticalOffset = newOffset;}        // 设置标签页的额外垂直偏移量。
        
    eWBDockPaletteType paletteType(){return mPaletteType;}                                      // 获取当前停靠面板的类型。

public slots:
    void onShowTabWidget(WBDockPaletteWidget* widget);                                          // 显示指定的小部件。
    void onHideTabWidget(WBDockPaletteWidget* widget);                                          // 隐藏指定的小部件。
    void onAllDownloadsFinished();                                                              // 所有下载完成时的槽函数。
    virtual void onDocumentSet(WBDocumentProxy* documentProxy);                                 // 设置文档时的槽函数。

signals:
    void mouseEntered();                                                                        // 鼠标进入停靠面板时发出的信号。
    void pageSelectionChangedRequired();                                                        // 页面选择变化时发出的信号。

protected:
    virtual int border();                                                                       // 返回边框宽度。
    virtual int radius();                                                                       // 返回圆角半径。
    virtual int customMargin();                                                                 // 返回自定义边距。
    virtual void updateMaxWidth();                                                              // 更新最大宽度。
    virtual void resizeEvent(QResizeEvent *event);                                              // 调整大小事件处理函数。
    virtual int collapseWidth();                                                                // 返回折叠宽度。

    /** The current dock orientation */
    eWBDockOrientation mOrientation;                                                            // 当前停靠面板的方向。
    /** The current background brush */
    QBrush mBackgroundBrush;                                                                    // 背景画刷。
    /** The preferred width */
    int mPreferredWidth;                                                                        // 首选宽度。
    /** The preferred height */
    int mPreferredHeight;                                                                       // 首选高度。
    /** A flag used to allow the resize */
    bool mCanResize;                                                                            // 是否可以调整大小的标志。
    /** A flag indicating if the palette has been resized between a click and a release */
    bool mResized;                                                                              // 是否已调整大小的标志。
    /** The width that trig the collapse */
    int mCollapseWidth;                                                                         // 触发折叠的宽度。
    /** The last width of the palette */
    int mLastWidth;                                                                             // 上次的宽度。
    /** The click time*/                                                                
    QTime mClickTime;                                                                           // 点击时间。
    /** The mouse pressed position */
    QPoint mMousePressPos;                                                                      // 鼠标按下位置。
    /** The tab orientation */
    eWBDockTabOrientation mTabsOrientation;                                                     // 标签页的方向。
    /** The h position of the tab */
    int mHTab;                                                                                  // 标签的水平位置。
    /** The stacked widget */
    QStackedWidget* mpStackWidget;                                                              // 堆叠小部件。
    /** The layout */
    QVBoxLayout* mpLayout;                                                                      // 布局管理器。
    /** The current tab index */
    int mCurrentTab;                                                                            // 当前标签页索引。
    /** The visible tab widgets */
    QVector<WBDockPaletteWidget*> mTabWidgets;                                                  // 可见标签页小部件列表。
    /** The current widget */
    QVector<WBDockPaletteWidget*> mRegisteredWidgets;                                           // 已注册的小部件列表。
    /** The current tab widget */
    QString mCrntTabWidget;                                                                     // 当前标签页小部件的名称。
    /** Last opened tab index depending on mode */
    QMap<eWBDockPaletteWidgetMode,int> mLastOpenedTabForMode;                                   // 记录每种模式下最后打开的标签页索引。

private slots:
    void onToolbarPosUpdated();                                                                 // 工具栏位置更新时的槽函数。
    void onResizeRequest(QResizeEvent* event);                                                  // 调整大小请求的槽函数。

private:
    void tabClicked(int tabIndex);                                                              // 标签页被点击时的处理函数。
    int tabSpacing();                                                                           // 返回标签间距。
    void toggleCollapseExpand();                                                                // 切换折叠/展开状态。
    void moveTabs();                                                                            // 移动标签页。
    void resizeTabs();                                                                          // 调整标签页大小。

private:
    eWBDockPaletteType mPaletteType;                                                            // 停靠面板类型。
    WBTabDockPalette *mTabPalette;                                                              // 标签面板对象。
};

#endif // WBDOCKPALETTE_H
