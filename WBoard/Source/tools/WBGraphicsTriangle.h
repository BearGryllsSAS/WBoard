#ifndef WBGRAPHICSTRIANGLE_H_
#define WBGRAPHICSTRIANGLE_H_

/*������ͼ�γ����д����Ͳ���������ͼ����ܹ�������ֽ����������������á�����ϸ�ڵȣ������и��ƺ�
�Զ������ԵĹ��ܡ�
1.��д��һϵ��ͼ������صķ���������ƣ�`paint` ������״���㣨 `shape` ��������¼����� `mousePressEvent` �ȣ�����ת��
�ط����ȡ�
2.������һЩ˽�з������ڼ����ڲ��ĵ㡢�任���α���¡��߽��ȡ�������һЩ˽�г�Ա�������洢״̬������SVG ����
����ȡ�������һЩ�������ڿ���ͼ�ε�Ĭ��ֵ��һЩ�ߴ����ơ�*/

#include <QtWidgets>
#include <QtSvg>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsPolygonItem>

#include "core/WB.h"
#include "domain/WBItem.h"
#include "tools/WBAbstractDrawRuler.h"

class WBGraphicsScene;
class WBItem;

// ��δ��붨����һ����Ϊ WBGraphicsTriangle ���࣬����һ���Զ����������ͼ����Ŀ�����ڻ��� Qt ��ͼ�ν���Ӧ�ó����С�
// ����̳��� QGraphicsPolygonItem �� WBItem �࣬��ʵ���� WBAbstractDrawRuler �ӿڡ�
// WBGraphicsTriangle ����һ���Զ����������ͼ����Ŀ�����зḻ�Ĺ��ܣ�����ơ���ת���任���¼�����ȡ�
// ��������ͼ�γ�����ʹ�ã�����֧������Ͳ������ơ�ͨ��ö�ٺ��ַ���ת���������������úͻ�ȡ�����εķ���
class WBGraphicsTriangle : public WBAbstractDrawRuler, public QGraphicsPolygonItem, public WBItem
{
    // WBGraphicsTriangle �̳��� QGraphicsPolygonItem��ʹ���ܹ��� QGraphicsScene ����Ϊһ�������ͼ����Ŀ��
    // �����̳��� WBItem������һ���Զ���Ļ��ࣨ���裩�����ܰ���һЩͨ�õ���Ŀ���Ժͷ�����
    // ��ʵ���� WBAbstractDrawRuler �ӿڣ��������߱�һЩ���Ʊ�ߵĹ��ܡ�

    Q_OBJECT

public:
    WBGraphicsTriangle();
    virtual ~WBGraphicsTriangle();

    // ������һ��ö������ Type�����ڱ�ʶ��ͼ����Ŀ�ľ������͡�
    enum { Type = WBGraphicsItemType::TriangleItemType };

    virtual int type() const
    {
        return Type;
    }

    // deepCopy �������ڴ����ö���������
    // copyItemParameters �������ڸ��ƶ���Ĳ�������һ������
    virtual WBItem* deepCopy(void) const;
    virtual void copyItemParameters(WBItem *copy) const;

    // ��Щ����������ͼ����Ŀ�ϻ����߶Σ��������߹�����ء�
    virtual void StartLine(const QPointF& scenePos, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

    // ������һ��ö�� UBGraphicsTriangleOrientation�����ڱ�ʾ�����εĲ�ͬ����
    // �ṩ��������̬��������ö�ٺ��ַ���֮���ת����
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

    // �ṩ�˷����������������εľ��α߽�ͷ���
    // getOrientation �� rect �����ֱ����ڻ�ȡ����;��α߽硣
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
    // ��Щ������Ҫ���ڴ�������¼���������¼����ͻ�����������Ŀ��
    // paint �������ڻ��������Ρ�
    // shape �������������ε���״��
    // rotateAroundCenter ��������Χ�����ĵ���ת�����Ρ�
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
    // ˽�г�Ա�������ڴ洢�����εĸ������Ժ�״̬��
    // calculateRotationTransform��rotateAroundCenter �ȸ����������ڴ�����ת�ͱ任��
    // calculatePoints �������ڼ��������εĶ��㡣
    // contains �������ڼ������Ƿ�������������ڡ�
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
