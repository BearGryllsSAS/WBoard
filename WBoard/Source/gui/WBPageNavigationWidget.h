#ifndef WBPAGENAVIGATIONWIDGET_H
#define WBPAGENAVIGATIONWIDGET_H

/*WBPageNavigationWidget�����̳��� `WBDockPaletteWidget` ��������ҳ��С��������ҳҳ�룬��ҳˢ��*/

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QTimerEvent>
#include <QLabel>
#include <QString>

#include "WBBoardThumbnailsView.h"
#include "WBDocumentNavigator.h"
#include "WBDockPaletteWidget.h"
#include "document/WBDocumentProxy.h"

// WBPageNavigationWidget ����һ������ҳ�浼����ͣ����岿����
// ����̳��� WBDockPaletteWidget����Ҫ�������û���������ʾ�Ͳ���ҳ�浼�����ܣ�������ʾ��ǰҳ�����ҳ�룬�Լ�һ��ʱ����ʾ��
// WBPageNavigationWidget ����һ��������ʾ�͹���ҳ�浼����ͣ����塣
// ͨ���ṩҳ���ʱ����ʾ���������û����û�������ֱ�۵ؽ���ҳ�浼����
// ���ඨ����һЩ������˽�вۺ��������ڴ����û������¼�����ͨ����ʱ���¼���ʱ����ʱ����ʾ��
// ͨ����Щ���ܣ�WBPageNavigationWidget �ṩ��һ��ֱ����ǿ��Ľ��棬����ҳ�浼����ʱ����ʾ��
class WBPageNavigationWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    WBPageNavigationWidget(QWidget* parent=0, const char* name="WBPageNavigationWidget");
    ~WBPageNavigationWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)       // �ж�С�������ض�ģʽ���Ƿ�ɼ���
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

signals:
    void resizeRequest(QResizeEvent* event);                // ����������С�����źš�

public slots:
    void setPageNumber(int current, int total);             // ���õ�ǰҳ�����ҳ�롣

protected:
    virtual void timerEvent(QTimerEvent *event);            // ����ʱ���¼���


private:    
    void updateTime();                                      // ����ʱ����ʾ��ʱ�䡣
    int customMargin();                                     // �����Զ���߾�Ĵ�С��
    int border();                                           // ���ر߿�Ĵ�С��

    WBDocumentNavigator* mNavigator;                        // �ĵ������������ڴ���ҳ�浼����
    QVBoxLayout* mLayout;                                   // ����ֱ���֣����ڹ����Ӳ��������С�
    QHBoxLayout* mHLayout;                                  // ˮƽ���֣����ڹ���ҳ���ʱ�ӱ�ǩ�����С�
    QLabel* mPageNbr;                                       // ������ʾ��ǰҳ�����ҳ��ı�ǩ��
    QLabel* mClock;                                         // ������ʾ��ǰʱ���ʱ�ӱ�ǩ��
    QString mTimeFormat;                                    // ���ڸ�ʽ��ʱ����ʾ���ַ�����
    int mTimerID;                                           // ��ʱ��ID�����ڶ�ʱ����ʱ����ʾ��

};

#endif // WBPAGENAVIGATIONWIDGET_H
