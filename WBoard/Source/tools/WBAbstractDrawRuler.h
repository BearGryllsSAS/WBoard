#ifndef WB_ABSTRACTDRAWRULER_H_
#define WB_ABSTRACTDRAWRULER_H_

/*这个抽象类为具体的绘制尺子类提供了基本的框架和一些通用的操作，子类需要实现特定于场景和旋转等操
作的细节。定义了一些虚函数，如 `StartLine` 、 `DrawLine` 、 `EndLine` ，用于开始、绘制和结束线条。`paint` 方法用于绘制
操作。包含一些纯虚函数，如 `scene` 、 `rotateAroundCenter` 等，需要子类具体实现。有一些保护成员变量用于控制显示、存储
SVG 项、比例等信息。定义了一系列的辅助函数用于获取不同的光标、颜色、字体等。包含一些静态常量用于颜色、边距、角度单位
等的定义*/

#include <QtWidgets>
#include <QGraphicsItem>
#include "frameworks/WBGeometryUtils.h"

class WBGraphicsScene;
class QGraphicsSvgItem;

// 这段代码定义了一个名为 WBAbstractDrawRuler 的类，继承自 QObject，用于绘制标尺的抽象基类。
// WBAbstractDrawRuler 类是一个抽象基类，用于定义标尺的基本行为和属性。
// 提供了一系列纯虚函数，子类必须实现这些函数来具体定义标尺的绘制、旋转、关闭等操作。
// 包含了一些静态常量和保护函数，用于管理标尺的绘制样式、颜色、光标等视觉和交互细节。
// 通过 Qt 的图形和事件处理机制，能够实现复杂的标尺绘制和交互逻辑，例如旋转、关闭、绘制线条等功能。
// 这种设计使得 WBAbstractDrawRuler 可以作为基类，通过子类实现具体的标尺类型，从而实现灵活的标尺绘制和交互功能。
class WBAbstractDrawRuler : public QObject
{
    // WBAbstractDrawRuler 类继承自 QObject，表明它可以利用 Qt 的信号与槽机制进行事件处理和通信。

    Q_OBJECT

public:
    WBAbstractDrawRuler();
    ~WBAbstractDrawRuler();

    // 创建标尺，接收一个 QGraphicsItem 对象作为参数。
    void create(QGraphicsItem& item);

    // 虚函数，用于开始绘制线条、绘制线条、结束绘制线条的操作。
    virtual void StartLine(const QPointF& position, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

protected:
    // 绘制方法，可能是一个保护方法，用于在子类中实现具体的绘制逻辑。
    void paint();
    // 返回标尺所属的场景对象的纯虚函数，子类必须实现。
    virtual WBGraphicsScene* scene() const = 0;
    // 绕中心旋转的纯虚函数。
    virtual void rotateAroundCenter(qreal angle) = 0;
    // 返回旋转中心点的纯虚函数。
    virtual QPointF rotationCenter() const = 0;
    // 返回关闭按钮区域的纯虚函数。
    virtual QRectF closeButtonRect() const = 0;
    // 绘制刻度的纯虚函数，用于具体的刻度绘制逻辑。
    virtual void paintGraduations(QPainter *painter) = 0;
    
    // 标志是否显示按钮。
    bool mShowButtons;
    // 用于显示关闭按钮的 QGraphicsSvgItem 对象。
    QGraphicsSvgItem* mCloseSvgItem;
    // 反比例缩放比率。
    qreal mAntiScaleRatio;
    // 绘制开始的位置。
    QPointF startDrawPosition;

    // 返回不同类型光标的保护函数。
    QCursor moveCursor() const;
    QCursor rotateCursor() const;
    QCursor closeCursor() const;
    QCursor drawRulerLineCursor() const;

    // 返回绘制颜色、填充颜色的保护函数。
    QColor  drawColor() const;
    QColor  middleFillColor() const;
    QColor  edgeFillColor() const;
    QFont   font() const;

    // 定义了一些静态常量颜色和数值，用于不同背景下的填充颜色、绘制颜色等。
    static const QColor sLightBackgroundEdgeFillColor;
    static const QColor sLightBackgroundMiddleFillColor;
    static const QColor sLightBackgroundDrawColor;
    static const QColor sDarkBackgroundEdgeFillColor;
    static const QColor sDarkBackgroundMiddleFillColor;
    static const QColor sDarkBackgroundDrawColor;

    // 定义了一些静态常量整数，用于边距、角度单位转换等。
    static const int sLeftEdgeMargin;
    static const int sDegreeToQtAngleUnit;
    static const int sRotationRadius;
    static const int sFillTransparency;
    static const int sDrawTransparency;
    static const int sRoundingRadius;
    qreal sPixelsPerCentimeter;
};

#endif