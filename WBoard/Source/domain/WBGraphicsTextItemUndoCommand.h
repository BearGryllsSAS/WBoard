#ifndef WBGRAPHICSTEXTITEMUNDOCOMMAND_H_
#define WBGRAPHICSTEXTITEMUNDOCOMMAND_H_

/*WBGraphicsTextItemUndoCommand������һ��ר�����ڴ��� `WBGraphicsTextItem` �ı���ĳ��������ࡣ*/
/*��δ���ʵ����һ�����ڹ����ض��ı�ͼ��������ĳ����������������� WBGraphicsTextItemUndoCommand����ͨ��ά��һ�� QPointer<WBGraphicsTextItem> ��Ա����������������ı�ͼ���������Ҫ���ܰ�����

�ڹ��캯���н����ı�ͼ��������ָ�룬���洢������
�ṩ getType() ���������ظ��������
ʵ�� undo() �� redo() �������ֱ����ڳ����������ı�ͼ����Ĳ���״̬��
���������������Ҫ���ı�ͼ������и��Ӳ�����֧�ֳ�����������Ӧ�ó�����������ͼ�α༭���й����ı�����ı仯��*/

#include <QtWidgets>
#include "WBUndoCommand.h"

#include "WBGraphicsTextItem.h"

// ��δ��붨����һ����Ϊ WBGraphicsTextItemUndoCommand ���࣬�������ڹ����ı�ͼ��������ĳ����������������ࡣ
class WBGraphicsTextItemUndoCommand : public WBUndoCommand
{
    public:
        WBGraphicsTextItemUndoCommand(WBGraphicsTextItem *textItem);
        virtual ~WBGraphicsTextItemUndoCommand();

        // ���س�����������ͣ����������һ��ö��ֵ undotype_GRAPHICTEXTITEM�����ڱ�ʶ�ı�ͼ����ĳ����������͡�
        virtual int getType() const { return WBUndoType::undotype_GRAPHICTEXTITEM; };

    protected:
        // ���ڳ���֮ǰ�Ĳ���״̬��
        virtual void undo();
        // ��������Ӧ����һ������״̬��
        virtual void redo();

    private:
        QPointer<WBGraphicsTextItem> mTextItem;
};

#endif /* WBGRAPHICSTEXTITEMUNDOCOMMAND_H_ */
