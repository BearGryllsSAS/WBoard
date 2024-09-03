#ifndef WBGRAPHICSITEMGROUPUNDOCOMMAND_H
#define WBGRAPHICSITEMGROUPUNDOCOMMAND_H

/*WBGraphicsItemGroupUndoCommand����һ�����ڴ���ͼ�����������ĳ��������ࡣ*/
/*`getType` �������ظó�����������ͣ��Ա��ڳ���ϵͳ�н���ʶ��ʹ���
`undo` ����ִ�г������������ܻὫ���������ԭ�����������е�ͼ����ָ�������ǰ��״̬��
`redo` ����ִ����������������Ӧ�÷��������*/

#include <QList>
#include "WBUndoCommand.h"

class WBGraphicsScene;
class WBGraphicsGroupContainerItem;

// ��δ��붨����һ����Ϊ WBGraphicsItemGroupUndoCommand ���࣬���ڹ���ͼ�γ�����ͼ�������ĳ���������������
// ��δ���ʵ����һ���ض��ĳ���/�������� WBGraphicsItemGroupUndoCommand�����ڹ���ͼ�γ�����ͼ�������Ĳ�����
// ��ͨ���̳��� WBUndoCommand �࣬�����麯���ͳ�Ա������ʵ�ֳ����������߼���
// ��Ҫ���ܰ����� undo �н�ɢͼ������鲢�� redo �����´������飬ͨ�� mItems ��¼����ĳ�Ա��
class WBGraphicsItemGroupUndoCommand : public WBUndoCommand
{
public:
    // ���캯����ʼ������ĳ�Ա���� mScene��mGroup �� mFirstRedo������û��ֱ�ӳ�ʼ�� mItems��������� redo �� undo �����б���䡣
    WBGraphicsItemGroupUndoCommand(WBGraphicsScene *pScene, WBGraphicsGroupContainerItem *pGroupCreated);
    virtual ~WBGraphicsItemGroupUndoCommand();

    // �麯������������ֵ����ʾ������������͡������ﷵ�� WBUndoType::undotype_GRAPHICSGROUPITEM��������һ��ö��ֵ����ʾͼ�������ĳ����������͡�
    virtual int getType() const { return WBUndoType::undotype_GRAPHICSGROUPITEM; }

protected:
    // �麯�����ֱ�����ִ�г���������������������������Ҫʵ���������������������ĳ����������߼��������������ƣ�undo ���ܻὫͼ����ӷ����н�ɢ���� redo ������������ϳɷ��顣
    virtual void undo();
    virtual void redo();

private:
    WBGraphicsScene *mScene;                    // ָ�� WBGraphicsScene ��ָ�룬��ʾ�볷�������������ͼ�γ�����
    WBGraphicsGroupContainerItem *mGroup;       // ָ�� WBGraphicsGroupContainerItem ��ָ�룬��ʾ�ڳ��������д�����ͼ������顣
    QList<QGraphicsItem*> mItems;               // QList<QGraphicsItem*> ���ͣ����ڴ洢�ڴ�������ʱ������ͼ���

    bool mFirstRedo;                            // ����ֵ���������ڸ����Ƿ��һ��ִ������������
};

#endif // WBGRAPHICSITEMGROUPUNDOCOMMAND_H
