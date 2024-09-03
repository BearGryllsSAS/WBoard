#ifndef WBGRAPHICSRULER_H_
#define WBGRAPHICSRULER_H_

// 用于在图形场景中创建和操作一个尺子图形项，能够响应各种交互事件并进行相应的绘制和状态更新。
// 1.重写了一些方法来`处理线条的起始、绘制和结束`，以及各种图形项相关的`事件处理方法（如鼠标事件、悬停事件）和绘制方法`。
// 2.包含一些私有成员变量来表示状态（如是否正在调整大小、旋转）和一些 SVG 项、游标等。定义了一些私有方法用于内部的绘制
// 和操作，如填充背景、绘制旋转中心、更新调整大小的游标等。
// 3.定义了一些常量用于控制默认矩形和一些长度限制。

#include <QtWidgets>
#include <QtSvg>

#include "core/WB.h"
#include "domain/WBItem.h"
#include "tools/WBAbstractDrawRuler.h"

class WBGraphicsScene;

// 这段代码定义了一个名为 WBGraphicsRuler 的类，它继承自多个类和接口，包括 WBAbstractDrawRuler、QGraphicsRectItem 和 WBItem。
// 实现了一个可在Qt图形场景中显示的标尺图形项，支持调整大小、旋转和绘制功能。
// 它利用Qt的图形框架提供的功能来管理其外观、行为和交互，通过多重继承和重写虚函数实现了对图形项的高度定制化。
class WBGraphicsRuler : public WBAbstractDrawRuler, public QGraphicsRectItem, public WBItem
{
    // WBAbstractDrawRuler: 这是一个抽象基类，可能定义了绘制标尺的基本功能接口。
    // QGraphicsRectItem: 这是Qt中用于在图形场景中显示矩形的类，通过继承可以使 WBGraphicsRuler 成为可在 QGraphicsScene 中显示和交互的图形项。
    // WBItem : 这可能是自定义的一个基类，用于与特定应用程序或框架相关的图形项的基本功能。

    Q_OBJECT

public:
    WBGraphicsRuler();
    virtual ~WBGraphicsRuler();

    // 定义了该图形项的类型为 RulerItemType，可能用于标识特定类型的图形项。
    enum { Type = WBGraphicsItemType::RulerItemType };

    // 重写自 QGraphicsItem，返回图形项的类型。
    virtual int type() const
    {
        return Type;
    }

    // 用于复制和复制图形项的参数。
    virtual WBItem* deepCopy() const;
    virtual void copyItemParameters(WBItem *copy) const;

    // 可能用于开始、绘制和结束绘制标尺。
    virtual void StartLine(const QPointF& position, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

protected:
    // 用于自定义绘制图形项的外观。
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *styleOption, QWidget *widget);
    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);

    // Events
    // 用于处理鼠标事件。
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
    void paintGraduations(QPainter *painter);

private:
    // 用于跟踪标尺是否正在被调整大小或旋转。
    bool mResizing;
    bool mRotating;

    // 用于处理旋转、背景填充等功能。
    void fillBackground(QPainter *painter);
    void paintRotationCenter(QPainter *painter);
    virtual void rotateAroundCenter(qreal angle);

    // 用于显示旋转和调整大小的SVG图标。
    QGraphicsSvgItem* mRotateSvgItem;
    QGraphicsSvgItem* mResizeSvgItem;

    void updateResizeCursor();
    QCursor resizeCursor() const{return mResizeCursor;}

    virtual QPointF rotationCenter() const;
    virtual QRectF resizeButtonRect() const;
    virtual QRectF closeButtonRect() const;
    virtual QRectF rotateButtonRect() const;
    virtual WBGraphicsScene* scene() const;

    // 用于调整大小时显示的鼠标光标。
    QCursor mResizeCursor;
    // 可能是用于指示绘制线条方向的变量。
    int drawLineDirection;

    // Constants
    // 默认的矩形区域。
    static const QRect sDefaultRect;

    // 定义了标尺的最小和最大长度限制。
    static const int sMinLength = 150;   // 3sm
    static const int sMaxLength = 35000; // 700sm

    qreal mStrokeWidth;
};

#endif /* WBGRAPHICSRULER_H_ */
