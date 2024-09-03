#ifndef WBDOCKDOWNLOADWIDGET_H
#define WBDOCKDOWNLOADWIDGET_H

/*WBDockDownloadWidget: ��һ���� `WBDockPaletteWidget` �������Զ��岿�������ڴ���������صĹ���չʾ��
Ϊ�����ض�ģʽ��չʾ��������صĽ���͹���*/

#include <QWidget>
#include <QVBoxLayout>

#include "WBDockPaletteWidget.h"
#include "WBDownloadWidget.h"

// WBDockDownloadWidget ����һ���������С������ר������ʾ�͹����������ݡ�
// ���̳��� WBDockPaletteWidget������д�� visibleInMode ������ʹ���� eWBDockPaletteWidget_BOARD ģʽ�¿ɼ���
// ���ж���������˽�г�Ա���� mpLayout �� mpDLWidget���ֱ����ڲ��ֹ�����������ݵ���ʾ��
// ͨ������࣬Ӧ�ó���������ض�ģʽ����ʾ�������ݣ����ҿ���ͨ�� WBDockDownloadWidget ���������Щ���ݵĲ��ֺ���ʾ��
class WBDockDownloadWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    WBDockDownloadWidget(QWidget* parent=0, const char* name="WBDockDownloadWidget");
    ~WBDockDownloadWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)           // �ж�С�������ض�ģʽ���Ƿ�ɼ���
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

private:
    QVBoxLayout* mpLayout;                                      // ָ�� QVBoxLayout �����ָ�룬���ڹ���С�����Ĵ�ֱ���֡�
    WBDownloadWidget* mpDLWidget;                               // ָ�� WBDownloadWidget �����ָ�룬������ʾ�͹����������ݡ�
};

#endif // WBDOCKDOWNLOADWIDGET_H
