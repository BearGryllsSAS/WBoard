#ifndef WBBACKGROUNDPALETTE_H
#define WBBACKGROUNDPALETTE_H

/*WBBackgroundPalette：是从 `WBActionPalette` 派生的类，用于处理与背景相关的操作和显示，为用户提供了与背景设置和操作相关的交互界面。*/

#include "gui/WBActionPalette.h"
#include "core/WBApplication.h"
#include "board/WBBoardController.h"
#include "domain/WBGraphicsScene.h"

// 这段代码定义了一个名为 WBBackgroundPalette 的类，它是 WBActionPalette 的子类，用于管理背景相关的操作和界面元素。
// WBBackgroundPalette 类继承自 WBActionPalette，专门用于管理和显示与背景相关的操作。
// 它包含了添加操作、设置操作列表、清除布局等公共方法，以及处理显示事件、背景变更、刷新界面等槽函数。
// 通过布局管理器和界面元素成员变量，它可以有效地管理和展示背景调色板的功能和界面元素。
class WBBackgroundPalette : public WBActionPalette
{
Q_OBJECT

public:
    // 构造函数，接受一个包含 QAction* 的列表 actions 和一个可选的父部件 parent。这种构造函数可能用于初始化背景调色板并添加初始的操作。
    WBBackgroundPalette(QList<QAction*> actions, QWidget* parent = 0);
    // 另一个构造函数，接受一个可选的父部件 parent，并可能用默认的方式初始化背景调色板。
    WBBackgroundPalette(QWidget* parent = 0);

    void addAction(QAction *action);                        // 添加一个操作 action 到背景调色板中。
    void setActions(QList<QAction *> actions);              // 设置背景调色板的操作列表为 actions 中的操作。
    void clearLayout();                                     // 清除背景调色板的布局，可能用于重置或清理界面上的元素。

public slots:
    void showEvent(QShowEvent* event);                      // 处理显示事件的槽函数，当背景调色板显示时调用。
    void backgroundChanged();                               // 处理背景变更的槽函数，可能在背景发生变化时被调用。
    void refresh();                                         // 刷新背景调色板的槽函数，可能用于更新界面状态或内容。

protected slots:
    void sliderValueChanged(int value);                     // 处理滑动条数值变化的槽函数，接受新的数值 value 并作出响应。
    void defaultBackgroundGridSize();                       // 处理恢复默认背景网格大小的槽函数。

protected:
    virtual void updateLayout();                            // 虚函数，用于更新背景调色板的布局。子类可以重写这个函数以实现自定义的布局更新逻辑。
    void init();                                            // 初始化背景调色板，可能设置初始状态和界面元素。

    QVBoxLayout* mVLayout;                                  // 垂直布局管理器。
    QHBoxLayout* mTopLayout;                                // 顶部水平布局管理器。
    QHBoxLayout* mBottomLayout;                             // 底部水平布局管理器。
            
    QSlider* mSlider;                                       // 滑动条控件。
    QLabel* mSliderLabel;                                   // 用于显示滑动条信息的标签控件。
    WBActionPaletteButton* mResetDefaultGridSizeButton;     // 自定义按钮类，可能用于恢复默认背景网格大小。

};

#endif // WBBACKGROUNDPALETTE_H
