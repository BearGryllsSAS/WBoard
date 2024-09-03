#ifndef WBCOREGRAPHICSSCENE_H_
#define WBCOREGRAPHICSSCENE_H_

/*这段代码定义了一个名为 WBCoreGraphicsScene 的自定义子类，继承自 QGraphicsScene，用于管理图形项的场景，适合用于需要对图形项进行复杂管理和交互的应用程序，如图形编辑器或数据可视化工具。*/

#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsItem>

// WBCoreGraphicsScene 类通过重写 QGraphicsScene 的部分函数，实现了更灵活的图形项管理功能。
// 允许添加、删除图形项，并支持延迟删除的操作。
// 提供了一个标志 mIsModified 来追踪场景的修改状态。
// 通过 addItemToDeletion 和 removeItemFromDeletion 函数，可以管理待删除的图形项集合，从而实现更加安全和可控的场景管理。

// 该类是对 QGraphicsScene 的扩展, 在 QGraphicsScene 的基础上增加接口来对图形项进行添加删除管理和场景修改状态的跟踪功能
// WBGraphicsScene: 是一个自定义的图形场景类，具有丰富的功能用于`管理图形项`、`处理输入事件、执行绘制操作`等。
// 1.提供了多种方法用于管理 撤销 / 重做栈的状态, 清除场景内容（如项目、注释等）`、处理输入设备的操作（按下、移动、释放。)
// 2.添加和移除图形项等方法, `能够创建和添加各种类型的图形项`，如小部件、媒体、SVG 图像、文本、组等, 并且提供了一些方法用于处理背景对象的设置和获取，以及对`图形项进行缩放、适应文档大小`等操作。
// 3.包含一些与绘制相关的方法，如`画线、画弧、画曲线`等，并能`处理橡皮擦、指针、标记圆`等的绘制, 还能支持获取场景的视图状态、
// 设置渲染质量、获取依赖项、处理选择框的更新等。
class WBCoreGraphicsScene : public QGraphicsScene
{
    public:
        // 构造函数，可以传入一个父对象指针，默认为 nullptr。在构造函数中，可能会进行一些初始化操作。
        WBCoreGraphicsScene(QObject * parent = 0);
        // 虚析构函数，用于释放对象时执行清理工作。通常是空的，除非需要在对象销毁时执行特定的清理操作。
        virtual ~WBCoreGraphicsScene();
        // 重写了 QGraphicsScene 的 addItem 函数。该函数用于向场景中添加一个图形项 item。
        virtual void addItem(QGraphicsItem* item);
        // 重写了 QGraphicsScene 的 removeItem 函数。根据参数 forceDelete 的值，可以选择是否立即删除图形项 item。
        virtual void removeItem(QGraphicsItem* item, bool forceDelete = false);
        // 删除指定的图形项 item，并返回操作是否成功的布尔值。
        virtual bool deleteItem(QGraphicsItem* item);
        // 从待删除列表 mItemsToDelete 中移除指定的图形项 item。
        void removeItemFromDeletion(QGraphicsItem* item);
        // 将指定的图形项 item 添加到待删除列表 mItemsToDelete 中。
        void addItemToDeletion(QGraphicsItem *item);
        // isModified 和 setModified 用于获取和设置场景是否被修改过的状态。
        bool isModified() const
        {
            return mIsModified;
        }
        void setModified(bool pModified)
        {
            mIsModified = pModified;
        }

    private:
        // 这是一个 QSet 容器，用于存储需要删除的 QGraphicsItem 对象的指针。通过使用 QSet，可以确保不会重复存储同一个对象的指针。
        QSet<QGraphicsItem*> mItemsToDelete;
        // 表示场景是否被修改过的标志。如果 mIsModified 为 true，则表明场景已经被修改过；否则为 false。
        bool mIsModified;
};

#endif /* WBCOREGRAPHICSSCENE_H_ */
