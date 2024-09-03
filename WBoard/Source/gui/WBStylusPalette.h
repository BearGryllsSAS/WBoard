#ifndef WBSTYLUSPALLETTE_H_
#define WBSTYLUSPALLETTE_H_

/*WBStylusPalette：它继承自 `WBActionPalette` ，当触笔工具被双击时，会触发 `stylusToolDoubleClicked` 槽函数，并通过信号将相关信息传递给其他连接的对象，以执行相应的操作。*/

#include <QButtonGroup>

#include "WBActionPalette.h"

// 定义了一个名为 WBStylusPalette 的类，它继承自 WBActionPalette，并添加了特定于触笔工具的功能和信号。
// WBStylusPalette 类是一个扩展自 WBActionPalette 的特定功能调色板，专门用于管理触笔工具。
// 它提供了初始化位置的功能和处理触笔工具双击事件的槽函数，通过信号 stylusToolDoubleClicked 向外部发送触笔工具双击事件的信息。
// 这种设计使得在用户界面中集成和管理触笔工具的交互变得更加方便和模块化。
class WBStylusPalette : public WBActionPalette
{
    Q_OBJECT

public:
    // 初始化 WBStylusPalette 类的对象。它接受一个父部件 parent 和一个枚举类型 orient，用于设置调色板的方向（垂直或水平）。
    WBStylusPalette(QWidget *parent = 0, Qt::Orientation orient = Qt::Vertical);
    // 虚析构函数，用于正确释放资源，确保在删除 WBStylusPalette 对象时正确调用派生类的析构函数。
    virtual ~WBStylusPalette();

    // 初始化调色板的位置。这个方法可能会设置调色板在界面中的初始位置或状态。
    void initPosition();
		
private slots:
    // 处理触笔工具双击事件的槽函数。当用户双击触笔工具按钮时，会触发这个槽函数执行相应的操作。
    void stylusToolDoubleClicked();

private:
    // 记录上次选中的触笔工具的ID。这个变量可能用于在选择触笔工具时进行状态管理或其他操作。
    int mLastSelectedId;

signals:
    // 当触笔工具被双击时发出的信号。信号的参数 tool 是被双击触发的具体触笔工具的标识或ID，用于通知外部处理程序。
    void stylusToolDoubleClicked(int tool);
};

#endif /* WBSTYLUSPALLETTE_H_ */
