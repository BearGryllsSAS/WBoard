#ifndef WBGRAPHICSTEXTITEMUNDOCOMMAND_H_
#define WBGRAPHICSTEXTITEMUNDOCOMMAND_H_

/*WBGraphicsTextItemUndoCommand：类是一个专门用于处理 `WBGraphicsTextItem` 文本项的撤销命令类。*/
/*这段代码实现了一个用于管理特定文本图形项操作的撤销和重做的命令类 WBGraphicsTextItemUndoCommand。它通过维护一个 QPointer<WBGraphicsTextItem> 成员变量来操作具体的文本图形项对象。主要功能包括：

在构造函数中接受文本图形项对象的指针，并存储起来。
提供 getType() 函数来返回该命令类别。
实现 undo() 和 redo() 函数，分别用于撤销和重做文本图形项的操作状态。
这种设计适用于需要对文本图形项进行复杂操作并支持撤销和重做的应用场景，例如在图形编辑器中管理文本对象的变化。*/

#include <QtWidgets>
#include "WBUndoCommand.h"

#include "WBGraphicsTextItem.h"

// 这段代码定义了一个名为 WBGraphicsTextItemUndoCommand 的类，它是用于管理文本图形项操作的撤销和重做的命令类。
class WBGraphicsTextItemUndoCommand : public WBUndoCommand
{
    public:
        WBGraphicsTextItemUndoCommand(WBGraphicsTextItem *textItem);
        virtual ~WBGraphicsTextItemUndoCommand();

        // 返回撤销命令的类型，这里可能是一个枚举值 undotype_GRAPHICTEXTITEM，用于标识文本图形项的撤销命令类型。
        virtual int getType() const { return WBUndoType::undotype_GRAPHICTEXTITEM; };

    protected:
        // 用于撤销之前的操作状态。
        virtual void undo();
        // 用于重新应用下一个操作状态。
        virtual void redo();

    private:
        QPointer<WBGraphicsTextItem> mTextItem;
};

#endif /* WBGRAPHICSTEXTITEMUNDOCOMMAND_H_ */
