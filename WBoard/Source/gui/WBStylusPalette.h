#ifndef WBSTYLUSPALLETTE_H_
#define WBSTYLUSPALLETTE_H_

/*WBStylusPalette�����̳��� `WBActionPalette` �������ʹ��߱�˫��ʱ���ᴥ�� `stylusToolDoubleClicked` �ۺ�������ͨ���źŽ������Ϣ���ݸ��������ӵĶ�����ִ����Ӧ�Ĳ�����*/

#include <QButtonGroup>

#include "WBActionPalette.h"

// ������һ����Ϊ WBStylusPalette ���࣬���̳��� WBActionPalette����������ض��ڴ��ʹ��ߵĹ��ܺ��źš�
// WBStylusPalette ����һ����չ�� WBActionPalette ���ض����ܵ�ɫ�壬ר�����ڹ����ʹ��ߡ�
// ���ṩ�˳�ʼ��λ�õĹ��ܺʹ����ʹ���˫���¼��Ĳۺ�����ͨ���ź� stylusToolDoubleClicked ���ⲿ���ʹ��ʹ���˫���¼�����Ϣ��
// �������ʹ�����û������м��ɺ͹����ʹ��ߵĽ�����ø��ӷ����ģ�黯��
class WBStylusPalette : public WBActionPalette
{
    Q_OBJECT

public:
    // ��ʼ�� WBStylusPalette ��Ķ���������һ�������� parent ��һ��ö������ orient���������õ�ɫ��ķ��򣨴�ֱ��ˮƽ����
    WBStylusPalette(QWidget *parent = 0, Qt::Orientation orient = Qt::Vertical);
    // ������������������ȷ�ͷ���Դ��ȷ����ɾ�� WBStylusPalette ����ʱ��ȷ���������������������
    virtual ~WBStylusPalette();

    // ��ʼ����ɫ���λ�á�����������ܻ����õ�ɫ���ڽ����еĳ�ʼλ�û�״̬��
    void initPosition();
		
private slots:
    // �����ʹ���˫���¼��Ĳۺ��������û�˫�����ʹ��߰�ťʱ���ᴥ������ۺ���ִ����Ӧ�Ĳ�����
    void stylusToolDoubleClicked();

private:
    // ��¼�ϴ�ѡ�еĴ��ʹ��ߵ�ID�������������������ѡ�񴥱ʹ���ʱ����״̬���������������
    int mLastSelectedId;

signals:
    // �����ʹ��߱�˫��ʱ�������źš��źŵĲ��� tool �Ǳ�˫�������ľ��崥�ʹ��ߵı�ʶ��ID������֪ͨ�ⲿ�������
    void stylusToolDoubleClicked(int tool);
};

#endif /* WBSTYLUSPALLETTE_H_ */
