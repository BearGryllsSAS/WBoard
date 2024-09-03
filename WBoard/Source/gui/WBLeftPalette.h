#ifndef WBLEFTPALETTE_H
#define WBLEFTPALETTE_H

/*WBLeftPalette������Ҫ�ڴ��������ʾ�ض��ĵ�ɫ�幦�ܣ������ݲ�ͬ����л�ģʽ�������ĵ������Լ���Ӧ���ڴ�С�仯ʱ����
���� `WBLeftPalette` �ࡣ�����ĵ����õ���ز���ʱ������� `onDocumentSet` �ۺ���������Ӧ�Ĵ���*/

#include "WBDockPalette.h"

// WBLeftPalette ��̳��� WBDockPalette����ʾӦ�ó�������ͣ����塣
// ���ṩ�˹��캯����������������ʼ�������ٶ��󣬾����л�ģʽ�Ĺ��ܺ��ĵ����õĲۺ�����
// �ܱ����ĺ������ڸ�����������Ⱥʹ����С�����¼���
// WBLeftPalette ����չ�� WBDockPalette�����ڹ���Ӧ�ó�������ͣ����塣
// ͨ���ṩ�л�ģʽ���ĵ����á���������Ⱥʹ����С�����¼��Ĺ��ܣ�ʹ�����ͣ�����������Ͷ�̬��
class WBLeftPalette : public WBDockPalette
{
public:
    // ��ʼ�� WBLeftPalette ���������丸���ں����ơ�
    WBLeftPalette(QWidget* parent=0, const char* name="WBLeftPalette");
    ~WBLeftPalette();

    // �л�ͣ������ģʽ�������л��Ƿ�ɹ��Ĳ���ֵ��
    bool switchMode(eWBDockPaletteWidgetMode mode);

public slots:
    // ���ĵ�������ʱ�����Ĳۺ������������ڸ���ͣ���������ݻ�״̬��
    void onDocumentSet(WBDocumentProxy* documentProxy);

protected:
    // ����ͣ����������ȡ��������ڵ�������С����Ӧ���ݡ�
    void updateMaxWidth();
    // �����ڲ�����С�����¼��������ڲ����Ĵ�С�ı�ʱ���ô˺����������������²��ֻ�������ݴ�С��
    void resizeEvent(QResizeEvent *event);
};

#endif // WBLEFTPALETTE_H
