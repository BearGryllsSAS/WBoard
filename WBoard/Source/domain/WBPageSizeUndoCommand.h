#ifndef WBPageSizeUndoCommand_H_
#define WBPageSizeUndoCommand_H_

/*WBPageSizeUndoCommand����һ�����ڴ���ҳ���С���ĵĳ��������ࡣ*/
/*`getType` ���������ض��ĳ����������ͣ���������ҳ���С��ص����͡�
`undo` ��������ִ�г�����������ҳ���С�ָ�Ϊ֮ǰ��״̬��
`redo` ��������ִ��������������ҳ���С����Ϊ�µ�״̬��
`mScene` ��������ͼ�γ�����
`mPreviousSize` ��ҳ�����ǰ�Ĵ�С��
`mNewSize` ��ҳ����ĺ�Ĵ�С��
`mFirstRedo` ������Ƿ��ǵ�һ��������*/

#include <QtWidgets>
#include "WBUndoCommand.h"

class WBGraphicsScene;

// ��δ���ʵ����һ���ض��ĳ���/�������� WBPageSizeUndoCommand�����ڴ���ͼ�γ�����ҳ��ߴ�仯�ĳ���������������
// ���̳��� WBUndoCommand��������һ��ͨ�õĳ���������ࡣ
// ͨ��ʹ�� Qt �Ĺ��ܺ��Զ����������࣬ʵ���˳�������������������ԺͿ���չ�ԡ�
class WBPageSizeUndoCommand : public WBUndoCommand
{
    public:
        // ���캯����ʼ������ĳ�Ա���� mScene��mPreviousSize��mNewSize �� mFirstRedo��
        WBPageSizeUndoCommand(WBGraphicsScene* pScene, const QSize& previousSize, const QSize& newSize);
        virtual ~WBPageSizeUndoCommand();

        // �麯������������ֵ����ʾ������������͡������ﷵ�� WBUndoType::undotype_PAGESIZE��������һ��ö��ֵ����ʾҳ��ߴ�仯�ĳ����������͡�
        virtual int getType() { return WBUndoType::undotype_PAGESIZE; };

    protected:
        // �麯�����ֱ�����ִ�г���������������������������Ҫʵ���������������������ĳ����������߼���
        virtual void undo();
        virtual void redo();

    private:
        WBGraphicsScene* mScene;        // ָ�� WBGraphicsScene ��ָ�룬��ʾ�볷�������������ͼ�γ�����
        QSize mPreviousSize;            // ��ʾ�ı�ǰ��ҳ��ߴ硣
        QSize mNewSize;                 // ��ʾ�ı���ҳ��ߴ硣

        bool mFirstRedo;                // ����ֵ���������ڸ����Ƿ��һ��ִ������������
};

#endif /* WBPageSizeUndoCommand_H_ */
