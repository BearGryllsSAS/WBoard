#ifndef WBGRAPHICSCURTAINITEMDELEGATE_H_
#define WBGRAPHICSCURTAINITEMDELEGATE_H_

/*用于为 `WBGraphicsCurtainItem` 提供特定的事件处理和操作逻辑。*/

#include <QtWidgets>

#include <QtSvg>

#include "core/WB.h"
#include "domain/WBGraphicsItemDelegate.h"

class QGraphicsSceneMouseEvent;
class QGraphicsItem;
class WBGraphicsCurtainItem;

// WBGraphicsCurtainItemDelegate 类继承自 WBGraphicsItemDelegate，专门为 WBGraphicsCurtainItem 提供委托功能。
// 此类处理 WBGraphicsCurtainItem 的用户交互和控制，如鼠标事件和位置更新。
// WBGraphicsCurtainItemDelegate 类通过委托模式扩展了 WBGraphicsItemDelegate 的功能，专门处理 WBGraphicsCurtainItem 的用户交互逻辑。
// 此类提供了接口和事件处理方法，使得幕布项的交互操作更加灵活和易用。
// 通过这种方式，可以更好地分离核心逻辑和用户界面逻辑，提高代码的可维护性和可扩展性。
class WBGraphicsCurtainItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

public:
    // 初始化 WBGraphicsCurtainItemDelegate，将 WBGraphicsCurtainItem 作为委托对象，并设置父对象。
    WBGraphicsCurtainItemDelegate(WBGraphicsCurtainItem* pDelegated, QObject * parent = 0);
    virtual ~WBGraphicsCurtainItemDelegate();

    virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);                                      // 处理鼠标按下事件。
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value);       // 处理图形项的变化，例如位置、大小等。
    virtual void positionHandles();                                                                     // 用于定位控件句柄。

    virtual void init();                                                                                // 初始化委托对象，设置初始状态和属性。

public slots:
    virtual void remove(bool checked, bool canUndo = true);                                             // 移除 WBGraphicsCurtainItem 对象，可选择是否支持撤销操作。

};

#endif /* WBGRAPHICSCURTAINITEMDELEGATE_H_ */
