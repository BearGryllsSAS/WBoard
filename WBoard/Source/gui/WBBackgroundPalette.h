#ifndef WBBACKGROUNDPALETTE_H
#define WBBACKGROUNDPALETTE_H

/*WBBackgroundPalette���Ǵ� `WBActionPalette` �������࣬���ڴ����뱳����صĲ�������ʾ��Ϊ�û��ṩ���뱳�����úͲ�����صĽ������档*/

#include "gui/WBActionPalette.h"
#include "core/WBApplication.h"
#include "board/WBBoardController.h"
#include "domain/WBGraphicsScene.h"

// ��δ��붨����һ����Ϊ WBBackgroundPalette ���࣬���� WBActionPalette �����࣬���ڹ�������صĲ����ͽ���Ԫ�ء�
// WBBackgroundPalette ��̳��� WBActionPalette��ר�����ڹ������ʾ�뱳����صĲ�����
// ����������Ӳ��������ò����б�������ֵȹ����������Լ�������ʾ�¼������������ˢ�½���Ȳۺ�����
// ͨ�����ֹ������ͽ���Ԫ�س�Ա��������������Ч�ع����չʾ������ɫ��Ĺ��ܺͽ���Ԫ�ء�
class WBBackgroundPalette : public WBActionPalette
{
Q_OBJECT

public:
    // ���캯��������һ������ QAction* ���б� actions ��һ����ѡ�ĸ����� parent�����ֹ��캯���������ڳ�ʼ��������ɫ�岢��ӳ�ʼ�Ĳ�����
    WBBackgroundPalette(QList<QAction*> actions, QWidget* parent = 0);
    // ��һ�����캯��������һ����ѡ�ĸ����� parent����������Ĭ�ϵķ�ʽ��ʼ��������ɫ�塣
    WBBackgroundPalette(QWidget* parent = 0);

    void addAction(QAction *action);                        // ���һ������ action ��������ɫ���С�
    void setActions(QList<QAction *> actions);              // ���ñ�����ɫ��Ĳ����б�Ϊ actions �еĲ�����
    void clearLayout();                                     // ���������ɫ��Ĳ��֣������������û���������ϵ�Ԫ�ء�

public slots:
    void showEvent(QShowEvent* event);                      // ������ʾ�¼��Ĳۺ�������������ɫ����ʾʱ���á�
    void backgroundChanged();                               // ����������Ĳۺ����������ڱ��������仯ʱ�����á�
    void refresh();                                         // ˢ�±�����ɫ��Ĳۺ������������ڸ��½���״̬�����ݡ�

protected slots:
    void sliderValueChanged(int value);                     // ����������ֵ�仯�Ĳۺ����������µ���ֵ value ��������Ӧ��
    void defaultBackgroundGridSize();                       // ����ָ�Ĭ�ϱ��������С�Ĳۺ�����

protected:
    virtual void updateLayout();                            // �麯�������ڸ��±�����ɫ��Ĳ��֡����������д���������ʵ���Զ���Ĳ��ָ����߼���
    void init();                                            // ��ʼ��������ɫ�壬�������ó�ʼ״̬�ͽ���Ԫ�ء�

    QVBoxLayout* mVLayout;                                  // ��ֱ���ֹ�������
    QHBoxLayout* mTopLayout;                                // ����ˮƽ���ֹ�������
    QHBoxLayout* mBottomLayout;                             // �ײ�ˮƽ���ֹ�������
            
    QSlider* mSlider;                                       // �������ؼ���
    QLabel* mSliderLabel;                                   // ������ʾ��������Ϣ�ı�ǩ�ؼ���
    WBActionPaletteButton* mResetDefaultGridSizeButton;     // �Զ��尴ť�࣬�������ڻָ�Ĭ�ϱ��������С��

};

#endif // WBBACKGROUNDPALETTE_H
