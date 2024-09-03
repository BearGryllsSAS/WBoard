#ifndef WBGRAPHICSWIDGETITEMDELEGATE_H_
#define WBGRAPHICSWIDGETITEMDELEGATE_H_

/*WBGraphicsWidgetItemDelegate: �� `WBGraphicsItemDelegate` �������࣬ר�����ڴ��� `WBGraphicsWidgetItem` ��ί��
����,`WBGraphicsWidgetItem` �ṩ���ض���ί�в����������˵�װ�Ρ�����״̬���¡��Ƴ������Լ��ض��Ĳ�����Ӧ��
1.`decorateMenu`������Ϊ��ز˵�����ض���С�����Ĳ���ѡ�
2. `updateMenuActionState`�����ڸ��²˵��в�����״̬�������Ƿ���á��Ƿ�ѡ�еȣ���
3.`remove`������С�������Ƴ����������ܿ����Ƿ�֧�ֳ�����*/

#include <QtWidgets>

#include "WBGraphicsItemDelegate.h"
#include "WBGraphicsWidgetItem.h"

// ��δ��붨����һ����Ϊ WBGraphicsWidgetItemDelegate ���࣬���̳��� WBGraphicsItemDelegate��
// �������Ϊ WBGraphicsWidgetItem �����ṩί�й��ܵģ������һЩ�ض��� WBGraphicsWidgetItem �Ĳ����Ͳ˵�װ�Ρ�
class WBGraphicsWidgetItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

    public:
        // ���ڳ�ʼ���������� pDelegated �Ǳ�ί�е� WBGraphicsWidgetItem ����widgetType ��һ����������������ָʾС���������ͣ�Ĭ��ֵΪ0��
        WBGraphicsWidgetItemDelegate(WBGraphicsWidgetItem* pDelegated, int widgetType = 0);
        virtual ~WBGraphicsWidgetItemDelegate();

    protected:
        virtual void decorateMenu(QMenu* menu);     // ���غ���������װ�������Ĳ˵�������ض��� WBGraphicsWidgetItem �Ĳ˵��
        virtual void updateMenuActionState();       // ���غ��������ڸ��²˵����״̬��
        virtual void remove(bool canundo);          // ���غ����������Ƴ�ί�ж��󣬿��ܰ���һЩ�ض�����Ϊ��

    private slots:
        void freeze(bool frozeon);                  // ���ڶ����ⶳί�ж���
        void pin();                                 // ���ڹ̶�ί�ж���

    private:
        int mWidgetType;                            // �洢С���������͡�

        WBGraphicsWidgetItem* delegated();          // ���ر�ί�е� WBGraphicsWidgetItem ����

        // �ֱ����ڶ�������ù��߲�����
        QAction* freezeAction;
        QAction* setAsToolAction;
};

#endif /* WBGRAPHICSWIDGETITEMDELEGATE_H_ */

/*����ί�еı�̷���������������г�Ϊ**"ί�����ģʽ"**��Delegation Pattern������Qt����У����ַ���ͨ�����ڷ������ĺ��Ĺ��ܺ��û����������ʹ�����ģ�黯�Ϳ�ά����

### ί�����ģʽ�Ķ���
ί�����ģʽ��һ�ֽ������ĳЩְ��ί�и���һ��������������������ģʽ��ί�ж���ͨ������Ϳ��Ʊ�ί�ж�����ʵ����Щְ��

### ʹ��ί�����ģʽ��ԭ��ͺô�

1. **�����ע�㣨Separation of Concerns��**:
   - ί��ģʽ��ҵ���߼����û������߼����뿪�������Ķ����� `WBGraphicsWidgetItem`������ҵ���߼�����ί�ж����� `WBGraphicsWidgetItemDelegate`���������û�������صĹ��ܡ��������Ը���������֯���롣

2. **��ߴ���Ŀ�ά���ԺͿɶ��ԣ�Maintainability and Readability��**:
   - ͨ������ͬ�Ĺ���ģ�黯�����Ը����׵��Ķ���ά�����롣ÿ���඼����ȷ��ְ����ʹ�ô�������������޸ġ�

3. **�����ԣ�Reusability��**:
   - ί��ģʽ�����ڲ�ͬ����������������ͬ��ί�ж������磬����Ϊ��ͬ���͵�ͼ�������ͬ��ί�У�������Ҫ�޸ĺ��Ķ���Ĵ��롣

4. **����ԣ�Flexibility��**:
   - ί��ģʽ����������ʱ�ı�������Ϊ�����Ը�����Ҫ��̬���滻���޸�ί�ж��󣬶�����Ҫ�ı䱻ί�ж����ʵ�֡�

5. **�򻯶���ӿڣ�Simplify Object Interface��**:
   - ��ί�ж���Ľӿڿ��Ա��ּ�࣬רע������Ĺ��ܣ��������ӵ��û������߼�����ί�ж�����

### ί�����ģʽ��Qt�е�Ӧ��
��Qt����У�ί�����ģʽ�㷺Ӧ�������³�����

1. **��ͼ��ģ�ͣ�View and Model��**:
   - Qt��MVC��Model-View-Controller���ܹ��У���ͼ��ģ��֮��ͨ��ʹ��ί�����������ݵĳ��ֺͽ�����

2. **�Զ���ؼ��ͻ��ƣ�Custom Widgets and Painting��**:
   - �Զ���ؼ��ͻ����߼�ͨ����ʹ��ί��ģʽ���Ա��ڲ�ͬ���龰�¸��û��ƺͽ����߼���

3. **�¼�����Event Handling��**:
   - ʹ��ί�ж������ӵ��¼��߼���ʹ�ú��Ķ�����¼�����ӿڱ��ּ�ࡣ

### ����ʾ���е�Ӧ��
�� `WBGraphicsWidgetItemDelegate` ���У�ί�����ģʽ����Ϊ `WBGraphicsWidgetItem` �����ṩ�ض��Ĺ��ܺͲ˵�װ�Ρ�ί�ж���������������

- **�����͹��������Ĳ˵���Context Menu��**:
  - `decorateMenu` �� `updateMenuActionState` ��������װ�������Ĳ˵��͸��²˵����״̬��
- **�����ض�������Specific Operations��**:
  - `freeze` �� `pin` �ۺ���������͹̶�������
- **�����û�������User Interaction��**:
  - `mousePressEvent`��`mouseMoveEvent` �ȷ��������û������ͼ��̽�����

ͨ�����ַ�ʽ�����Խ����û�������ص��߼������ҵ���߼����룬ʹ���������ά������չ��*/
