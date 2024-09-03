#ifndef WBRIGHTPALETTE_H
#define WBRIGHTPALETTE_H

/*WBRightPalette������Ҫ�ڴ����Ҳ���ʾ�ض��ĵ�ɫ�幦�ܣ������ݲ�ͬ����л�ģʽ�������ĵ������Լ���Ӧ���ڴ�С�仯ʱ����
��ʹ�� `WBRightPalette` �ࡣ�����ĵ����õ���ز���ʱ������� `onDocumentSet` �ۺ���������Ӧ�Ĵ���*/

#include "WBDockPalette.h"

// WBRightPalette ����չ�� WBDockPalette�����ڹ���Ӧ�ó����Ҳ��ͣ����塣
// ͨ���ṩ�л�ģʽ����������Ⱥʹ�������ƶ�����С�����¼��Ĺ��ܣ�ʹ���Ҳ�ͣ�����������Ͷ�̬��
// ������ resized �źţ��Ա��������������Ӧ����С�����¼���
class WBRightPalette : public WBDockPalette
{
    Q_OBJECT
public:
    // ��ʼ�� WBRightPalette ���������丸���ں����ơ������Ҳ�ͣ����������Ϊ eWBDockPaletteType_RIGHT��
    WBRightPalette(QWidget* parent=0, const char* name="WBRightPalette");
    ~WBRightPalette();
    bool switchMode(eWBDockPaletteWidgetMode mode);         // �л�ͣ������ģʽ�������л��Ƿ�ɹ��Ĳ���ֵ��

signals:
    void resized();                                         // ���Ҳ�ͣ������С����ʱ���� resized �źš�

protected:
    void updateMaxWidth();                                  // ����ͣ����������ȡ����ڵ�������С����Ӧ���ݡ�
    void mouseMoveEvent(QMouseEvent *event);                // ��������ƶ��¼����������������ƶ�ʱ���ô˺�������������ʵ����ק�������������ܡ�
    void resizeEvent(QResizeEvent *event);                  // �����ڲ�����С�����¼��������ڲ����Ĵ�С�ı�ʱ���ô˺����������������²��ֻ�������ݴ�С��

};

#endif // WBRIGHTPALETTE_H
