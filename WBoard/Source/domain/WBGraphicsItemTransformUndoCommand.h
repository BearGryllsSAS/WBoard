#ifndef WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_
#define WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_

/*WBGraphicsItemTransformUndoCommand：是一个特定的撤销命令类，用于处理图形项的变换操作（如位置、大小、旋转、Z值等）的撤销和重做。*/

#include <QtWidgets>

#include "WBUndoCommand.h"

// 这段代码定义了一个名为 WBGraphicsItemTransformUndoCommand 的类，它继承自 WBUndoCommand 类，用于管理图形项的变换（transform）操作的撤销和重做。
// 这段代码实现了一个用于管理图形项变换操作的撤销和重做命令 WBGraphicsItemTransformUndoCommand 类。
// 它记录了图形项在执行变换前后的位置、变换矩阵、Z 值和大小，并提供了 undo 和 redo 函数来撤销和重新应用这些变换。
// 这种设计适用于需要对图形项进行复杂变换操作并支持撤销和重做的应用场景。
class WBGraphicsItemTransformUndoCommand : public WBUndoCommand
{
    public:
        WBGraphicsItemTransformUndoCommand(QGraphicsItem* pItem,
                                                const QPointF& prevPos,
                                                const QTransform& prevTransform,
                                                const qreal& prevZValue,
                                                const QSizeF& prevSize = QSizeF(),
                                                bool setToBackground = false);
        virtual ~WBGraphicsItemTransformUndoCommand();

        // 返回撤销命令的类型，这里可能是一个枚举值 undotype_GRAPHICITEMTRANSFORM，表示图形项变换的撤销命令类型。
        virtual int getType() const { return WBUndoType::undotype_GRAPHICITEMTRANSFORM; }

    protected:
        // 将图形项的位置、变换矩阵、Z 值以及大小恢复到之前记录的状态 (mPrevious* 变量)。ai乱编?
        virtual void undo();
        // 将图形项的位置、变换矩阵、Z 值以及大小设置为当前记录的状态 (mCurrent* 变量)。ai乱编?
        virtual void redo();

    private:
        // 指向 QGraphicsItem 的指针，表示这个撤销命令作用的图形项。
        QGraphicsItem* mItem;

        // 记录了图形项在撤销前后的变换矩阵。
        QTransform mPreviousTransform;           
        QTransform mCurrentTransform;

        // 分别记录了图形项在撤销前后的位置。
        QPointF mPreviousPosition;               
        QPointF mCurrentPosition;               

        // 记录了图形项在撤销前后的大小。
        QSizeF mPreviousSize;                    
        QSizeF mCurrentSize;                     

        // 记录了图形项在撤销前后的 Z 值。
        qreal mPreviousZValue;                   
        qreal mCurrentZValue;                    

        // 一个布尔值，表示是否将图形项置于背景。
        bool mSetToBackground;                   

};

#endif /* WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_ */
