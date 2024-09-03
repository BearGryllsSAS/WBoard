#ifndef WBPageSizeUndoCommand_H_
#define WBPageSizeUndoCommand_H_

/*WBPageSizeUndoCommand：是一个用于处理页面大小更改的撤销命令类。*/
/*`getType` 方法返回特定的撤销命令类型，这里是与页面大小相关的类型。
`undo` 方法用于执行撤销操作，将页面大小恢复为之前的状态。
`redo` 方法用于执行重做操作，将页面大小设置为新的状态。
`mScene` ：关联的图形场景。
`mPreviousSize` ：页面更改前的大小。
`mNewSize` ：页面更改后的大小。
`mFirstRedo` ：标记是否是第一次重做。*/

#include <QtWidgets>
#include "WBUndoCommand.h"

class WBGraphicsScene;

// 这段代码实现了一个特定的撤销/重做命令 WBPageSizeUndoCommand，用于处理图形场景中页面尺寸变化的撤销和重做操作。
// 它继承自 WBUndoCommand，可能是一个通用的撤销命令基类。
// 通过使用 Qt 的功能和自定义的命令基类，实现了撤销和重做操作的灵活性和可扩展性。
class WBPageSizeUndoCommand : public WBUndoCommand
{
    public:
        // 构造函数初始化了类的成员变量 mScene、mPreviousSize、mNewSize 和 mFirstRedo。
        WBPageSizeUndoCommand(WBGraphicsScene* pScene, const QSize& previousSize, const QSize& newSize);
        virtual ~WBPageSizeUndoCommand();

        // 虚函数，返回整数值，表示撤销命令的类型。在这里返回 WBUndoType::undotype_PAGESIZE，可能是一个枚举值，表示页面尺寸变化的撤销命令类型。
        virtual int getType() { return WBUndoType::undotype_PAGESIZE; };

    protected:
        // 虚函数，分别用于执行撤销和重做操作。在派生类中需要实现这两个函数来定义具体的撤销和重做逻辑。
        virtual void undo();
        virtual void redo();

    private:
        WBGraphicsScene* mScene;        // 指向 WBGraphicsScene 的指针，表示与撤销命令相关联的图形场景。
        QSize mPreviousSize;            // 表示改变前和页面尺寸。
        QSize mNewSize;                 // 表示改变后和页面尺寸。

        bool mFirstRedo;                // 布尔值，可能用于跟踪是否第一次执行重做操作。
};

#endif /* WBPageSizeUndoCommand_H_ */
