#ifndef WBCOREGRAPHICSSCENE_H_
#define WBCOREGRAPHICSSCENE_H_

/*��δ��붨����һ����Ϊ WBCoreGraphicsScene ���Զ������࣬�̳��� QGraphicsScene�����ڹ���ͼ����ĳ������ʺ�������Ҫ��ͼ������и��ӹ���ͽ�����Ӧ�ó�����ͼ�α༭�������ݿ��ӻ����ߡ�*/

#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsItem>

// WBCoreGraphicsScene ��ͨ����д QGraphicsScene �Ĳ��ֺ�����ʵ���˸�����ͼ��������ܡ�
// ������ӡ�ɾ��ͼ�����֧���ӳ�ɾ���Ĳ�����
// �ṩ��һ����־ mIsModified ��׷�ٳ������޸�״̬��
// ͨ�� addItemToDeletion �� removeItemFromDeletion ���������Թ����ɾ����ͼ����ϣ��Ӷ�ʵ�ָ��Ӱ�ȫ�Ϳɿصĳ�������

// �����Ƕ� QGraphicsScene ����չ, �� QGraphicsScene �Ļ��������ӽӿ�����ͼ����������ɾ������ͳ����޸�״̬�ĸ��ٹ���
// WBGraphicsScene: ��һ���Զ����ͼ�γ����࣬���зḻ�Ĺ�������`����ͼ����`��`���������¼���ִ�л��Ʋ���`�ȡ�
// 1.�ṩ�˶��ַ������ڹ��� ���� / ����ջ��״̬, ����������ݣ�����Ŀ��ע�͵ȣ�`�����������豸�Ĳ��������¡��ƶ����ͷš�)
// 2.��Ӻ��Ƴ�ͼ����ȷ���, `�ܹ���������Ӹ������͵�ͼ����`����С������ý�塢SVG ͼ���ı������, �����ṩ��һЩ�������ڴ�������������úͻ�ȡ���Լ���`ͼ����������š���Ӧ�ĵ���С`�Ȳ�����
// 3.����һЩ�������صķ�������`���ߡ�������������`�ȣ�����`������Ƥ����ָ�롢���Բ`�ȵĻ���, ����֧�ֻ�ȡ��������ͼ״̬��
// ������Ⱦ��������ȡ���������ѡ���ĸ��µȡ�
class WBCoreGraphicsScene : public QGraphicsScene
{
    public:
        // ���캯�������Դ���һ��������ָ�룬Ĭ��Ϊ nullptr���ڹ��캯���У����ܻ����һЩ��ʼ��������
        WBCoreGraphicsScene(QObject * parent = 0);
        // �����������������ͷŶ���ʱִ����������ͨ���ǿյģ�������Ҫ�ڶ�������ʱִ���ض������������
        virtual ~WBCoreGraphicsScene();
        // ��д�� QGraphicsScene �� addItem �������ú��������򳡾������һ��ͼ���� item��
        virtual void addItem(QGraphicsItem* item);
        // ��д�� QGraphicsScene �� removeItem ���������ݲ��� forceDelete ��ֵ������ѡ���Ƿ�����ɾ��ͼ���� item��
        virtual void removeItem(QGraphicsItem* item, bool forceDelete = false);
        // ɾ��ָ����ͼ���� item�������ز����Ƿ�ɹ��Ĳ���ֵ��
        virtual bool deleteItem(QGraphicsItem* item);
        // �Ӵ�ɾ���б� mItemsToDelete ���Ƴ�ָ����ͼ���� item��
        void removeItemFromDeletion(QGraphicsItem* item);
        // ��ָ����ͼ���� item ��ӵ���ɾ���б� mItemsToDelete �С�
        void addItemToDeletion(QGraphicsItem *item);
        // isModified �� setModified ���ڻ�ȡ�����ó����Ƿ��޸Ĺ���״̬��
        bool isModified() const
        {
            return mIsModified;
        }
        void setModified(bool pModified)
        {
            mIsModified = pModified;
        }

    private:
        // ����һ�� QSet ���������ڴ洢��Ҫɾ���� QGraphicsItem �����ָ�롣ͨ��ʹ�� QSet������ȷ�������ظ��洢ͬһ�������ָ�롣
        QSet<QGraphicsItem*> mItemsToDelete;
        // ��ʾ�����Ƿ��޸Ĺ��ı�־����� mIsModified Ϊ true������������Ѿ����޸Ĺ�������Ϊ false��
        bool mIsModified;
};

#endif /* WBCOREGRAPHICSSCENE_H_ */
