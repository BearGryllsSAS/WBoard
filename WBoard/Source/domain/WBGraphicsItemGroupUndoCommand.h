#ifndef WBGRAPHICSITEMGROUPUNDOCOMMAND_H
#define WBGRAPHICSITEMGROUPUNDOCOMMAND_H

/*WBGraphicsItemGroupUndoCommand：是一个用于处理图形项分组操作的撤销命令类。*/
/*`getType` 方法返回该撤销命令的类型，以便在撤销系统中进行识别和处理。
`undo` 方法执行撤销操作，可能会将分组操作还原，即将分组中的图形项恢复到分组前的状态。
`redo` 方法执行重做操作，重新应用分组操作。*/

#include <QList>
#include "WBUndoCommand.h"

class WBGraphicsScene;
class WBGraphicsGroupContainerItem;

// 这段代码定义了一个名为 WBGraphicsItemGroupUndoCommand 的类，用于管理图形场景中图形项分组的撤销和重做操作。
// 这段代码实现了一个特定的撤销/重做命令 WBGraphicsItemGroupUndoCommand，用于管理图形场景中图形项分组的操作。
// 它通过继承自 WBUndoCommand 类，利用虚函数和成员变量来实现撤销和重做逻辑。
// 主要功能包括在 undo 中解散图形项分组并在 redo 中重新创建分组，通过 mItems 记录分组的成员。
class WBGraphicsItemGroupUndoCommand : public WBUndoCommand
{
public:
    // 构造函数初始化了类的成员变量 mScene、mGroup 和 mFirstRedo，并且没有直接初始化 mItems，这可能在 redo 和 undo 方法中被填充。
    WBGraphicsItemGroupUndoCommand(WBGraphicsScene *pScene, WBGraphicsGroupContainerItem *pGroupCreated);
    virtual ~WBGraphicsItemGroupUndoCommand();

    // 虚函数，返回整数值，表示撤销命令的类型。在这里返回 WBUndoType::undotype_GRAPHICSGROUPITEM，可能是一个枚举值，表示图形项分组的撤销命令类型。
    virtual int getType() const { return WBUndoType::undotype_GRAPHICSGROUPITEM; }

protected:
    // 虚函数，分别用于执行撤销和重做操作。在派生类中需要实现这两个函数来定义具体的撤销和重做逻辑。根据命令的设计，undo 可能会将图形项从分组中解散，而 redo 则将它们重新组合成分组。
    virtual void undo();
    virtual void redo();

private:
    WBGraphicsScene *mScene;                    // 指向 WBGraphicsScene 的指针，表示与撤销命令相关联的图形场景。
    WBGraphicsGroupContainerItem *mGroup;       // 指向 WBGraphicsGroupContainerItem 的指针，表示在撤销命令中创建的图形项分组。
    QList<QGraphicsItem*> mItems;               // QList<QGraphicsItem*> 类型，用于存储在创建分组时包含的图形项。

    bool mFirstRedo;                            // 布尔值，可能用于跟踪是否第一次执行重做操作。
};

#endif // WBGRAPHICSITEMGROUPUNDOCOMMAND_H
