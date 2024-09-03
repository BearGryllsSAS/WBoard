#ifndef UBGRAPHICSPROTRACTOR_H_
#define UBGRAPHICSPROTRACTOR_H_

// ��д�˶���ͼ������صķ������������ƣ�`paint` ��������ͼ����仯��`itemChange` ��������£�`mousePressEvent` ��
// `mouseMoveEvent` �� `mouseReleaseEvent` �ȣ��Լ���״���㣨 `shape` �� `boundingRect` ���ȡ�
// 2.����һЩ˽�з������ڴ����ڲ��Ļ���ϸ�ڣ�����ư�ť���Ƕȱ�ǣ���ȷ���������͡����㷴���ŵȡ�
// 3.������һЩ˽�г�Ա�������洢����״̬���Ƕ�ֵ���������ӡ�SVG ��ȡ�����һЩ�������ڿ��ƻ��Ƶ�͸���Ⱥ�Ĭ�ϵľ��η�Χ��
// ����ͼ�γ����д����Ͳ���һ��������ͼ����ܹ�������ֽ���������������Ӧ�Ļ��ƺ�״̬���¡�

#include <QtWidgets>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsView>
#include <QtSvg>

#include "core/WB.h"
#include "tools/WBAbstractDrawRuler.h"
#include "domain/WBItem.h"

#include "frameworks/WBGeometryUtils.h"


class WBGraphicsScene;

// ��δ��붨����һ����Ϊ WBGraphicsProtractor ���࣬���̳��Զ���ಢʵ����һϵ�к����ͳ�Ա����
// WBGraphicsProtractor ����һ�����ӵ�ͼ�����࣬�̳��Զ�� Qt �࣬��ʵ���˶��������ʵ�ֱ�ߵĻ��ơ��������û�������Ӧ��
// �������ͼ�λ��ơ�SVG ͼ���ʹ�ú�����¼�������һ�����͵�ͼ�ν���������ʵ��ʾ����
class WBGraphicsProtractor : public WBAbstractDrawRuler, public QGraphicsEllipseItem, public WBItem
{
    // WBAbstractDrawRuler����Ϊ��߻��Ƶĳ�����ࡣ
    // QGraphicsEllipseItem��������ͼ�γ�������ʾ��Բ�ε�ͼ���
    // WBItem��ĳ���Զ���ͼ����Ļ��࣬����ϸ���ڴ���Ƭ����δ��ϸչʾ��

    Q_OBJECT

public:
    // ��ʼ�����ֳ�Ա�����������Ƕȡ��������͵ȡ�
    WBGraphicsProtractor ();
    // �����˲�ͬ�Ĺ������ͣ����ƶ���������С����ת�����õȡ�
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
    // ������ paint��itemChange����������¼��������� mousePressEvent��mouseMoveEvent �ȣ��Լ� shape��boundingRect ������
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

    // ���ڼ�¼���λ�ú͵�ǰ����״̬����Ϣ��
    QPointF mPreviousMousePos;
    Tool    mCurrentTool;
    // ��־λ����ʾ�Ƿ���ʾ��ť��
    bool    mShowButtons;
    qreal   mSpan;
    qreal   mScaleFactor;
    // ���ڴ洢��ʼ�ǶȺ͵�ǰ�Ƕȡ�
    qreal   mStartAngle;
    qreal   mCurrentAngle;
    
    // QGraphicsSvgItem ���͵�ָ�룬������ʾ��ͬ��ť�� SVG ͼ�ꡣ
    QGraphicsSvgItem* mResetSvgItem;
    QGraphicsSvgItem* mResizeSvgItem;
    QGraphicsSvgItem* mMarkerSvgItem;
    QGraphicsSvgItem* mRotateSvgItem;
    
    // �����˾�̬��������������Ĭ�Ͼ����������С�뾶��
    static const QRectF sDefaultRect;
    static const qreal minRadius;

    // ʵ���� WBAbstractDrawRuler �ж���Ĵ��麯������ paintGraduations��rotateAroundCenter��rotationCenter �ȡ�
    virtual void rotateAroundCenter(qreal angle);
    virtual QPointF    rotationCenter() const;

    int    sFillTransparency;
    int    sDrawTransparency;
};

#endif /* UBGRAPHICSPROTRACTOR_H_ */
