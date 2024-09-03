#ifndef UBGRAPHICSPROTRACTOR_H_
#define UBGRAPHICSPROTRACTOR_H_

// 重写了多种图形项相关的方法，包括绘制（`paint` ）、处理图形项变化（`itemChange` ）、鼠标事（`mousePressEvent` 、
// `mouseMoveEvent` 、 `mouseReleaseEvent` 等）以及形状计算（ `shape` 、 `boundingRect` ）等。
// 2.包含一些私有方法用于处理内部的绘制细节（如绘制按钮、角度标记）、确定工具类型、计算反缩放等。
// 3.定义了一些私有成员变量来存储工具状态、角度值、缩放因子、SVG 项等。包含一些常量用于控制绘制的透明度和默认的矩形范围。
// 用在图形场景中创建和操作一个量角器图形项，能够处理各种交互操作并进行相应的绘制和状态更新。

#include <QtWidgets>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsView>
#include <QtSvg>

#include "core/WB.h"
#include "tools/WBAbstractDrawRuler.h"
#include "domain/WBItem.h"

#include "frameworks/WBGeometryUtils.h"


class WBGraphicsScene;

// 这段代码定义了一个名为 WBGraphicsProtractor 的类，它继承自多个类并实现了一系列函数和成员变量
// WBGraphicsProtractor 类是一个复杂的图形项类，继承自多个 Qt 类，并实现了多个函数来实现标尺的绘制、交互和用户操作响应。
// 它结合了图形绘制、SVG 图标的使用和鼠标事件处理，是一个典型的图形界面组件类的实现示例。
class WBGraphicsProtractor : public WBAbstractDrawRuler, public QGraphicsEllipseItem, public WBItem
{
    // WBAbstractDrawRuler：作为标尺绘制的抽象基类。
    // QGraphicsEllipseItem：用于在图形场景中显示椭圆形的图形项。
    // WBItem：某种自定义图形项的基类，具体细节在代码片段中未详细展示。

    Q_OBJECT

public:
    // 初始化各种成员变量，包括角度、工具类型等。
    WBGraphicsProtractor ();
    // 定义了不同的工具类型，如移动、调整大小、旋转、重置等。
    enum Tool {None, Move, Resize, Rotate, Reset, Close, MoveMarker};

    qreal angle () { return mStartAngle; }
    qreal markerAngle () { return mCurrentAngle; }
    void  setAngle (qreal angle) { mStartAngle = angle; setStartAngle(mStartAngle * 16); }
    void  setMarkerAngle (qreal angle) { mCurrentAngle = angle; }

    virtual WBItem* deepCopy() const;
    virtual void copyItemParameters(WBItem *copy) const;

    enum { Type = WBGraphicsItemType::ProtractorItemType };

    virtual int type() const
    {
        return Type;
    }

protected:
    // 重载了 paint、itemChange、各种鼠标事件处理函数如 mousePressEvent、mouseMoveEvent 等，以及 shape、boundingRect 函数。
    virtual void paint (QPainter *painter, const QStyleOptionGraphicsItem *styleOption, QWidget *widget);

    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);

    virtual void   mousePressEvent (QGraphicsSceneMouseEvent *event);
    virtual void    mouseMoveEvent (QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent (QGraphicsSceneMouseEvent *event);
    virtual void   hoverEnterEvent (QGraphicsSceneHoverEvent *event);
    virtual void   hoverLeaveEvent (QGraphicsSceneHoverEvent *event);
    virtual void    hoverMoveEvent (QGraphicsSceneHoverEvent *event);
    virtual QPainterPath shape() const;
    QRectF boundingRect() const;
    void paintGraduations(QPainter *painter);        


private:
    void paintButtons (QPainter *painter);
    void paintAngleMarker (QPainter *painter);
    Tool toolFromPos (QPointF pos);
    qreal antiScale () const;
    WBGraphicsScene*            scene() const;
    QBrush                  fillBrush() const;

    QSizeF buttonSizeReference () const{return QSizeF(radius() / 10, mCloseSvgItem->boundingRect().height() * radius()/(10 * mCloseSvgItem->boundingRect().width()));}
    QSizeF markerSizeReference () const{return QSizeF(radius() / 10, mMarkerSvgItem->boundingRect().height() * radius()/(10 * mMarkerSvgItem->boundingRect().width()));}
    QRectF    resetButtonRect () const;

    QRectF    closeButtonRect () const;
    QRectF    resizeButtonRect () const;
    QRectF    rotateButtonRect () const;
    QRectF    markerButtonRect () const;

    inline qreal radius () const{return rect().height() / 2 - 20;}

    // 用于记录鼠标位置和当前工具状态等信息。
    QPointF mPreviousMousePos;
    Tool    mCurrentTool;
    // 标志位，表示是否显示按钮。
    bool    mShowButtons;
    qreal   mSpan;
    qreal   mScaleFactor;
    // 用于存储起始角度和当前角度。
    qreal   mStartAngle;
    qreal   mCurrentAngle;
    
    // QGraphicsSvgItem 类型的指针，用于显示不同按钮的 SVG 图标。
    QGraphicsSvgItem* mResetSvgItem;
    QGraphicsSvgItem* mResizeSvgItem;
    QGraphicsSvgItem* mMarkerSvgItem;
    QGraphicsSvgItem* mRotateSvgItem;
    
    // 定义了静态常量，用于设置默认矩形区域和最小半径。
    static const QRectF sDefaultRect;
    static const qreal minRadius;

    // 实现了 WBAbstractDrawRuler 中定义的纯虚函数，如 paintGraduations、rotateAroundCenter、rotationCenter 等。
    virtual void rotateAroundCenter(qreal angle);
    virtual QPointF    rotationCenter() const;

    int    sFillTransparency;
    int    sDrawTransparency;
};

#endif /* UBGRAPHICSPROTRACTOR_H_ */
