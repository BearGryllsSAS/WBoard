#ifndef WBGRAPHICSCURTAINITEMDELEGATE_H_
#define WBGRAPHICSCURTAINITEMDELEGATE_H_

/*����Ϊ `WBGraphicsCurtainItem` �ṩ�ض����¼�����Ͳ����߼���*/

#include <QtWidgets>

#include <QtSvg>

#include "core/WB.h"
#include "domain/WBGraphicsItemDelegate.h"

class QGraphicsSceneMouseEvent;
class QGraphicsItem;
class WBGraphicsCurtainItem;

// WBGraphicsCurtainItemDelegate ��̳��� WBGraphicsItemDelegate��ר��Ϊ WBGraphicsCurtainItem �ṩί�й��ܡ�
// ���ദ�� WBGraphicsCurtainItem ���û������Ϳ��ƣ�������¼���λ�ø��¡�
// WBGraphicsCurtainItemDelegate ��ͨ��ί��ģʽ��չ�� WBGraphicsItemDelegate �Ĺ��ܣ�ר�Ŵ��� WBGraphicsCurtainItem ���û������߼���
// �����ṩ�˽ӿں��¼���������ʹ��Ļ����Ľ������������������á�
// ͨ�����ַ�ʽ�����Ը��õط�������߼����û������߼�����ߴ���Ŀ�ά���ԺͿ���չ�ԡ�
class WBGraphicsCurtainItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

public:
    // ��ʼ�� WBGraphicsCurtainItemDelegate���� WBGraphicsCurtainItem ��Ϊί�ж��󣬲����ø�����
    WBGraphicsCurtainItemDelegate(WBGraphicsCurtainItem* pDelegated, QObject * parent = 0);
    virtual ~WBGraphicsCurtainItemDelegate();

    virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);                                      // ������갴���¼���
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value);       // ����ͼ����ı仯������λ�á���С�ȡ�
    virtual void positionHandles();                                                                     // ���ڶ�λ�ؼ������

    virtual void init();                                                                                // ��ʼ��ί�ж������ó�ʼ״̬�����ԡ�

public slots:
    virtual void remove(bool checked, bool canUndo = true);                                             // �Ƴ� WBGraphicsCurtainItem ���󣬿�ѡ���Ƿ�֧�ֳ���������

};

#endif /* WBGRAPHICSCURTAINITEMDELEGATE_H_ */
