#ifndef WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_
#define WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_

/*WBGraphicsItemTransformUndoCommand����һ���ض��ĳ��������࣬���ڴ���ͼ����ı任��������λ�á���С����ת��Zֵ�ȣ��ĳ�����������*/

#include <QtWidgets>

#include "WBUndoCommand.h"

// ��δ��붨����һ����Ϊ WBGraphicsItemTransformUndoCommand ���࣬���̳��� WBUndoCommand �࣬���ڹ���ͼ����ı任��transform�������ĳ�����������
// ��δ���ʵ����һ�����ڹ���ͼ����任�����ĳ������������� WBGraphicsItemTransformUndoCommand �ࡣ
// ����¼��ͼ������ִ�б任ǰ���λ�á��任����Z ֵ�ʹ�С�����ṩ�� undo �� redo ����������������Ӧ����Щ�任��
// ���������������Ҫ��ͼ������и��ӱ任������֧�ֳ�����������Ӧ�ó�����
class WBGraphicsItemTransformUndoCommand : public WBUndoCommand
{
    public:
        WBGraphicsItemTransformUndoCommand(QGraphicsItem* pItem,
                                                const QPointF& prevPos,
                                                const QTransform& prevTransform,
                                                const qreal& prevZValue,
                                                const QSizeF& prevSize = QSizeF(),
                                                bool setToBackground = false);
        virtual ~WBGraphicsItemTransformUndoCommand();

        // ���س�����������ͣ����������һ��ö��ֵ undotype_GRAPHICITEMTRANSFORM����ʾͼ����任�ĳ����������͡�
        virtual int getType() const { return WBUndoType::undotype_GRAPHICITEMTRANSFORM; }

    protected:
        // ��ͼ�����λ�á��任����Z ֵ�Լ���С�ָ���֮ǰ��¼��״̬ (mPrevious* ����)��ai�ұ�?
        virtual void undo();
        // ��ͼ�����λ�á��任����Z ֵ�Լ���С����Ϊ��ǰ��¼��״̬ (mCurrent* ����)��ai�ұ�?
        virtual void redo();

    private:
        // ָ�� QGraphicsItem ��ָ�룬��ʾ��������������õ�ͼ���
        QGraphicsItem* mItem;

        // ��¼��ͼ�����ڳ���ǰ��ı任����
        QTransform mPreviousTransform;           
        QTransform mCurrentTransform;

        // �ֱ��¼��ͼ�����ڳ���ǰ���λ�á�
        QPointF mPreviousPosition;               
        QPointF mCurrentPosition;               

        // ��¼��ͼ�����ڳ���ǰ��Ĵ�С��
        QSizeF mPreviousSize;                    
        QSizeF mCurrentSize;                     

        // ��¼��ͼ�����ڳ���ǰ��� Z ֵ��
        qreal mPreviousZValue;                   
        qreal mCurrentZValue;                    

        // һ������ֵ����ʾ�Ƿ�ͼ�������ڱ�����
        bool mSetToBackground;                   

};

#endif /* WBGRAPHICSITEMTRANSFORMUNDOCOMMAND_H_ */
