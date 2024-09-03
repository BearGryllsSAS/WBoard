#ifndef WBGRAPHICSTRIANGLE_H_
#define WBGRAPHICSTRIANGLE_H_

/*用于在图形场景中创建和操作三角形图形项，能够处理各种交互操作、方向设置、绘制细节等，并具有复制和
自定义属性的功能。
1.重写了一系列图形项相关的方法，如绘制（`paint` ）、形状计算（ `shape` ）、鼠标事件处理（ `mousePressEvent` 等）、旋转相
关方法等。
2.包含了一些私有方法用于计算内部的点、变换、游标更新、边界框等。定义了一些私有成员变量来存储状态、方向、SVG 项、点的
坐标等。定义了一些常量用于控制图形的默认值和一些尺寸限制。*/

#include <QtWidgets>
#include <QtSvg>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsPolygonItem>

#include "core/WB.h"
#include "domain/WBItem.h"
#include "tools/WBAbstractDrawRuler.h"

class WBGraphicsScene;
class WBItem;

// 这段代码定义了一个名为 WBGraphicsTriangle 的类，这是一个自定义的三角形图形项目，用于基于 Qt 的图形界面应用程序中。
// 该类继承了 QGraphicsPolygonItem 和 WBItem 类，并实现了 WBAbstractDrawRuler 接口。
// WBGraphicsTriangle 类是一个自定义的三角形图形项目，具有丰富的功能，如绘制、旋转、变换、事件处理等。
// 它可以在图形场景中使用，并且支持深拷贝和参数复制。通过枚举和字符串转换，可以灵活地设置和获取三角形的方向。
class WBGraphicsTriangle : public WBAbstractDrawRuler, public QGraphicsPolygonItem, public WBItem
{
    // WBGraphicsTriangle 继承了 QGraphicsPolygonItem，使其能够在 QGraphicsScene 中作为一个多边形图形项目。
    // 它还继承了 WBItem，这是一个自定义的基类（假设），可能包含一些通用的项目属性和方法。
    // 它实现了 WBAbstractDrawRuler 接口，表明它具备一些绘制标尺的功能。

    Q_OBJECT

public:
    WBGraphicsTriangle();
    virtual ~WBGraphicsTriangle();

    // 定义了一个枚举类型 Type，用于标识该图形项目的具体类型。
    enum { Type = WBGraphicsItemType::TriangleItemType };

    virtual int type() const
    {
        return Type;
    }

    // deepCopy 方法用于创建该对象的深拷贝。
    // copyItemParameters 方法用于复制对象的参数到另一个对象。
    virtual WBItem* deepCopy(void) const;
    virtual void copyItemParameters(WBItem *copy) const;

    // 这些方法用于在图形项目上绘制线段，可能与标尺功能相关。
    virtual void StartLine(const QPointF& scenePos, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

    // 定义了一个枚举 UBGraphicsTriangleOrientation，用于表示三角形的不同方向。
    // 提供了两个静态方法用于枚举和字符串之间的转换。
    enum UBGraphicsTriangleOrientation
    {
        BottomLeft = 0,
        BottomRight,
        TopLeft,
        TopRight
    };

    static UBGraphicsTriangleOrientation orientationFromStr(QStringRef& str)
    {
        if (str == "BottomLeft") return BottomLeft;
        if (str == "BottomRight") return BottomRight;
        if (str == "TopLeft") return TopLeft;
        if (str == "TopRight") return TopRight;
        return sDefaultOrientation;
    }
    static QString orientationToStr(UBGraphicsTriangleOrientation orientation)
    {
        QString result;
        if (orientation == 0) result = "BottomLeft";
        else if (orientation == 1) result = "BottomRight";
        else if (orientation == 2) result = "TopLeft";
        else if (orientation == 3) result = "TopRight";

        return result;
    }

    // 提供了方法用于设置三角形的矩形边界和方向。
    // getOrientation 和 rect 方法分别用于获取方向和矩形边界。
    void setRect(const QRectF &rect, UBGraphicsTriangleOrientation orientation)
    {
        setRect(rect.x(), rect.y(), rect.width(), rect.height(), orientation);
    }
    void setRect(qreal x, qreal y, qreal w, qreal h, UBGraphicsTriangleOrientation orientation);
    void setOrientation(UBGraphicsTriangleOrientation orientation);
    UBGraphicsTriangleOrientation getOrientation() const {return mOrientation;}
    QRectF rect() const {return boundingRect();}

    WBGraphicsScene* scene() const;

protected:
    // 这些方法主要用于处理各种事件（如鼠标事件）和绘制三角形项目。
    // paint 方法用于绘制三角形。
    // shape 方法返回三角形的形状。
    // rotateAroundCenter 方法用于围绕中心点旋转三角形。
    void updateResizeCursor();

    virtual void paint (QPainter *painter, const QStyleOptionGraphicsItem *styleOption, QWidget *widget);
    virtual QPainterPath shape() const;

    virtual void rotateAroundCenter(qreal angle);

    virtual QPointF rotationCenter() const;

    virtual QRectF closeButtonRect() const;
    QPolygonF resize1Polygon() const;
    QPolygonF resize2Polygon() const;
    QRectF hFlipRect() const;
    QRectF vFlipRect() const;
    QRectF rotateRect() const;

    QRectF bounding_Rect() const;

    QCursor resizeCursor1() const;
    QCursor resizeCursor2() const;

    QCursor flipCursor() const;

    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
    void paintGraduations(QPainter *painter);

private:
    // 私有成员变量用于存储三角形的各种属性和状态。
    // calculateRotationTransform、rotateAroundCenter 等辅助方法用于处理旋转和变换。
    // calculatePoints 方法用于计算三角形的顶点。
    // contains 方法用于检查矩形是否包含在三角形内。
    QCursor mResizeCursor1;
    QCursor mResizeCursor2;

    QTransform calculateRotationTransform();
    qreal angle;
    void rotateAroundCenter(QTransform& transform, QPointF center);

    bool mResizing1;
    bool mResizing2;
    bool mRotating;
    QRect lastRect;

    QPoint lastPos;

    // Save the last bounds rect
    QRectF bounds_rect;

    QGraphicsSvgItem* mHFlipSvgItem;
    QGraphicsSvgItem* mVFlipSvgItem;
    QGraphicsSvgItem* mRotateSvgItem;

    static const QRect sDefaultRect;
    static const UBGraphicsTriangleOrientation sDefaultOrientation;

    UBGraphicsTriangleOrientation mOrientation;

    QPointF A1, B1, C1, A2, B2, C2;
    qreal C;
    qreal W1, H1;
    QPointF CC;
    void calculatePoints(const QRectF& rect);

    bool mShouldPaintInnerTriangle;

    static const int d = 70;
    static const int sArrowLength = 30;
    static const int sMinWidth = 240;
    static const int sMinHeight = 120;
    qreal mStrokeWidth;

    bool contains(const QRectF &rect, bool strict = true);
};

#endif /* WBGRAPHICSTRIANGLE_H_ */
