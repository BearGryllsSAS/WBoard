#ifndef WB_ABSTRACTDRAWRULER_H_
#define WB_ABSTRACTDRAWRULER_H_

/*���������Ϊ����Ļ��Ƴ������ṩ�˻����Ŀ�ܺ�һЩͨ�õĲ�����������Ҫʵ���ض��ڳ�������ת�Ȳ�
����ϸ�ڡ�������һЩ�麯������ `StartLine` �� `DrawLine` �� `EndLine` �����ڿ�ʼ�����ƺͽ���������`paint` �������ڻ���
����������һЩ���麯������ `scene` �� `rotateAroundCenter` �ȣ���Ҫ�������ʵ�֡���һЩ������Ա�������ڿ�����ʾ���洢
SVG ���������Ϣ��������һϵ�еĸ����������ڻ�ȡ��ͬ�Ĺ�ꡢ��ɫ������ȡ�����һЩ��̬����������ɫ���߾ࡢ�Ƕȵ�λ
�ȵĶ���*/

#include <QtWidgets>
#include <QGraphicsItem>
#include "frameworks/WBGeometryUtils.h"

class WBGraphicsScene;
class QGraphicsSvgItem;

// ��δ��붨����һ����Ϊ WBAbstractDrawRuler ���࣬�̳��� QObject�����ڻ��Ʊ�ߵĳ�����ࡣ
// WBAbstractDrawRuler ����һ��������࣬���ڶ����ߵĻ�����Ϊ�����ԡ�
// �ṩ��һϵ�д��麯�����������ʵ����Щ���������嶨���ߵĻ��ơ���ת���رյȲ�����
// ������һЩ��̬�����ͱ������������ڹ����ߵĻ�����ʽ����ɫ�������Ӿ��ͽ���ϸ�ڡ�
// ͨ�� Qt ��ͼ�κ��¼�������ƣ��ܹ�ʵ�ָ��ӵı�߻��ƺͽ����߼���������ת���رա����������ȹ��ܡ�
// �������ʹ�� WBAbstractDrawRuler ������Ϊ���࣬ͨ������ʵ�־���ı�����ͣ��Ӷ�ʵ�����ı�߻��ƺͽ������ܡ�
class WBAbstractDrawRuler : public QObject
{
    // WBAbstractDrawRuler ��̳��� QObject���������������� Qt ���ź���ۻ��ƽ����¼������ͨ�š�

    Q_OBJECT

public:
    WBAbstractDrawRuler();
    ~WBAbstractDrawRuler();

    // ������ߣ�����һ�� QGraphicsItem ������Ϊ������
    void create(QGraphicsItem& item);

    // �麯�������ڿ�ʼ���������������������������������Ĳ�����
    virtual void StartLine(const QPointF& position, qreal width);
    virtual void DrawLine(const QPointF& position, qreal width);
    virtual void EndLine();

protected:
    // ���Ʒ�����������һ������������������������ʵ�־���Ļ����߼���
    void paint();
    // ���ر�������ĳ�������Ĵ��麯�����������ʵ�֡�
    virtual WBGraphicsScene* scene() const = 0;
    // ��������ת�Ĵ��麯����
    virtual void rotateAroundCenter(qreal angle) = 0;
    // ������ת���ĵ�Ĵ��麯����
    virtual QPointF rotationCenter() const = 0;
    // ���عرհ�ť����Ĵ��麯����
    virtual QRectF closeButtonRect() const = 0;
    // ���ƿ̶ȵĴ��麯�������ھ���Ŀ̶Ȼ����߼���
    virtual void paintGraduations(QPainter *painter) = 0;
    
    // ��־�Ƿ���ʾ��ť��
    bool mShowButtons;
    // ������ʾ�رհ�ť�� QGraphicsSvgItem ����
    QGraphicsSvgItem* mCloseSvgItem;
    // ���������ű��ʡ�
    qreal mAntiScaleRatio;
    // ���ƿ�ʼ��λ�á�
    QPointF startDrawPosition;

    // ���ز�ͬ���͹��ı���������
    QCursor moveCursor() const;
    QCursor rotateCursor() const;
    QCursor closeCursor() const;
    QCursor drawRulerLineCursor() const;

    // ���ػ�����ɫ�������ɫ�ı���������
    QColor  drawColor() const;
    QColor  middleFillColor() const;
    QColor  edgeFillColor() const;
    QFont   font() const;

    // ������һЩ��̬������ɫ����ֵ�����ڲ�ͬ�����µ������ɫ��������ɫ�ȡ�
    static const QColor sLightBackgroundEdgeFillColor;
    static const QColor sLightBackgroundMiddleFillColor;
    static const QColor sLightBackgroundDrawColor;
    static const QColor sDarkBackgroundEdgeFillColor;
    static const QColor sDarkBackgroundMiddleFillColor;
    static const QColor sDarkBackgroundDrawColor;

    // ������һЩ��̬�������������ڱ߾ࡢ�Ƕȵ�λת���ȡ�
    static const int sLeftEdgeMargin;
    static const int sDegreeToQtAngleUnit;
    static const int sRotationRadius;
    static const int sFillTransparency;
    static const int sDrawTransparency;
    static const int sRoundingRadius;
    qreal sPixelsPerCentimeter;
};

#endif