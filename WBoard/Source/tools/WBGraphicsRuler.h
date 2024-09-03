#ifndef WBGRAPHICSRULER_H_
#define WBGRAPHICSRULER_H_

// ������ͼ�γ����д����Ͳ���һ������ͼ����ܹ���Ӧ���ֽ����¼���������Ӧ�Ļ��ƺ�״̬���¡�
// 1.��д��һЩ������`������������ʼ�����ƺͽ���`���Լ�����ͼ������ص�`�¼���������������¼�����ͣ�¼����ͻ��Ʒ���`��
// 2.����һЩ˽�г�Ա��������ʾ״̬�����Ƿ����ڵ�����С����ת����һЩ SVG ��α�ȡ�������һЩ˽�з��������ڲ��Ļ���
// �Ͳ���������䱳����������ת���ġ����µ�����С���α�ȡ�
// 3.������һЩ�������ڿ���Ĭ�Ͼ��κ�һЩ�������ơ�

#include <QtWidgets>
#include <QtSvg>

#include "core/WB.h"
#include "domain/WBItem.h"
#include "tools/WBAbstractDrawRuler.h"

class WBGraphicsScene;

// ��δ��붨����һ����Ϊ WBGraphicsRuler ���࣬���̳��Զ����ͽӿڣ����� WBAbstractDrawRuler��QGraphicsRectItem �� WBItem��
// ʵ����һ������Qtͼ�γ�������ʾ�ı��ͼ���֧�ֵ�����С����ת�ͻ��ƹ��ܡ�
// ������Qt��ͼ�ο���ṩ�Ĺ�������������ۡ���Ϊ�ͽ�����ͨ�����ؼ̳к���д�麯��ʵ���˶�ͼ����ĸ߶ȶ��ƻ���
class WBGraphicsRuler : public WBAbstractDrawRuler, public QGraphicsRectItem, public WBItem
{
    // WBAbstractDrawRuler: ����һ��������࣬���ܶ����˻��Ʊ�ߵĻ������ܽӿڡ�
    // QGraphicsRectItem: ����Qt��������ͼ�γ�������ʾ���ε��࣬ͨ���̳п���ʹ WBGraphicsRuler ��Ϊ���� QGraphicsScene ����ʾ�ͽ�����ͼ���
    // WBItem : ��������Զ����һ�����࣬�������ض�Ӧ�ó��������ص�ͼ����Ļ������ܡ�

    Q_OBJECT

public:
    WBGraphicsRuler();
    virtual ~WBGraphicsRuler();

    // �����˸�ͼ���������Ϊ RulerItemType���������ڱ�ʶ�ض����͵�ͼ���
    enum { Type = WBGraphicsItemType::RulerItemType };

    // ��д�� QGraphicsItem������ͼ��������͡�
    virtual int type() const
    {
        return Type;
    }

    // ���ڸ��ƺ͸���ͼ����Ĳ�����
    virtual WBItem* deepCopy() const;
    virtual void copyItemParameters(WBItem *copy) const;

    // �������ڿ�ʼ�����ƺͽ������Ʊ�ߡ�
    virtual void StartLine(const QPointF& position, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

protected:
    // �����Զ������ͼ�������ۡ�
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *styleOption, QWidget *widget);
    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);

    // Events
    // ���ڴ�������¼���
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
    void paintGraduations(QPainter *painter);

private:
    // ���ڸ��ٱ���Ƿ����ڱ�������С����ת��
    bool mResizing;
    bool mRotating;

    // ���ڴ�����ת���������ȹ��ܡ�
    void fillBackground(QPainter *painter);
    void paintRotationCenter(QPainter *painter);
    virtual void rotateAroundCenter(qreal angle);

    // ������ʾ��ת�͵�����С��SVGͼ�ꡣ
    QGraphicsSvgItem* mRotateSvgItem;
    QGraphicsSvgItem* mResizeSvgItem;

    void updateResizeCursor();
    QCursor resizeCursor() const{return mResizeCursor;}

    virtual QPointF rotationCenter() const;
    virtual QRectF resizeButtonRect() const;
    virtual QRectF closeButtonRect() const;
    virtual QRectF rotateButtonRect() const;
    virtual WBGraphicsScene* scene() const;

    // ���ڵ�����Сʱ��ʾ������ꡣ
    QCursor mResizeCursor;
    // ����������ָʾ������������ı�����
    int drawLineDirection;

    // Constants
    // Ĭ�ϵľ�������
    static const QRect sDefaultRect;

    // �����˱�ߵ���С����󳤶����ơ�
    static const int sMinLength = 150;   // 3sm
    static const int sMaxLength = 35000; // 700sm

    qreal mStrokeWidth;
};

#endif /* WBGRAPHICSRULER_H_ */
