#ifndef WBUNINOTESWINDOW_H_
#define WBUNINOTESWINDOW_H_

/*WBDesktopPalette：是一个与桌面操作相关的调色板类。这个类主要负责管理和控制与桌面操作相关的调色板的显示、隐藏、按钮操作以及与其他组件的交互。*/

#include <QtWidgets>
#include <QShowEvent>
#include <QHideEvent>

#include "gui/WBActionPalette.h"
#include "gui/WBRightPalette.h"

// 这段代码定义了一个名为 WBDesktopPalette 的类，它是 WBActionPalette 的子类，用于管理桌面相关的操作界面。
// WBDesktopPalette 类是一个扩展自 WBActionPalette 的桌面调色板，用于管理和响应与桌面操作相关的界面和事件。
// 它定义了多个信号和槽函数，用于与用户交互、处理界面事件、管理界面状态等。
// 通过继承和重载事件处理函数，它有效地与 Qt 框架集成，提供了丰富的桌面操作接口和功能。
class WBDesktopPalette : public WBActionPalette
{
    Q_OBJECT

    public:
        // 构造函数，接受一个父部件 parent 和一个 WBRightPalette* 类型的参数 rightPalette。初始化时会调用父类的构造函数，并初始化一些成员变量。
        WBDesktopPalette(QWidget *parent, WBRightPalette* rightPalette);
        // 虚析构函数，用于正确释放资源，通常在基类有虚函数时使用。
        virtual ~WBDesktopPalette();

        // 控制调色板的显示和隐藏状态，可能与截图或捕获操作相关。
        void disappearForCapture();                          
        void appear();

        // 返回指定操作按钮的位置，可能用于界面布局和交互逻辑。
        QPoint buttonPos(QAction* action);                   

    signals:
        // 这些信号表明与不同操作相关的事件，例如点击不同的操作按钮时触发。
        void uniboardClick();                                
        void customClick();                                  
        void windowClick();                                  
        void screenClick();                                  

//#ifdef Q_OS_LINUX //TODO: check why this produces an error on linux if uncommented
        // 这个信号在 Q_OS_LINUX 宏定义下被声明，用于刷新蒙版。宏定义的部分注释掉了，可能是因为在 Linux 下产生了错误，需要进一步调试和处理。
        void refreshMask();
//#endif

    public slots:
        // 这些槽函数用于响应界面操作或状态变化，例如显示/隐藏操作、最小化/最大化、父窗口大小变化等。
        void showHideClick(bool checked);                    
        void updateShowHideState(bool pShowEnabled);         
        void setShowHideButtonVisible(bool visible);         
        void setDisplaySelectButtonVisible(bool show);       
        void minimizeMe(eMinimizedLocation location);        
        void maximizeMe();
        void parentResized();

	protected:
        // 重载的事件处理函数，用于处理调色板显示和隐藏事件。
        void showEvent(QShowEvent *event);                   
        void hideEvent(QHideEvent *event);                   

        // 虚函数，返回父窗口右侧的偏移量，可以根据具体需求在子类中进行实现。
        virtual int getParentRightOffset();                  

	private:
        // 类型的几个成员变量，如 mShowHideAction、mDisplaySelectAction 等，用于管理与操作相关的动作。
        QAction *mShowHideAction;                            
        QAction *mDisplaySelectAction;                       
        QAction *mMaximizeAction;                            
        QAction *mActionUniboard;                            
        QAction *mActionCustomSelect;                        
        QAction* mActionTest;                                

        // 指向 WBRightPalette 对象的指针，可能用于与右侧调色板进行交互。
        WBRightPalette* rightPalette;        
        // 调整调色板的位置，可能根据具体情况动态调整界面元素的布局和位置。
        void adjustPosition();                               

    signals:

        void stylusToolChanged(int tool);                    

};

#endif /* WBUNINOTESWINDOW_H_ */
