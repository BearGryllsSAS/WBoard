#ifndef WBDOCKPALETTEWIDGET_H
#define WBDOCKPALETTEWIDGET_H

/*WBDockPaletteWidget : ��һ������ͣ�����Ļ��������ࡣΪͣ������еľ��岿���ṩ�˻����Ŀ�ܺ�һЩͨ�õĹ��ܣ�������
�Ŀɼ����߼�����������ݲ�ͬ��ģʽ��ʵ��
`iconToRight` �� `iconToLeft` ���������ڻ�ȡ���ҷ����ͼ��, `name` ����ȡ���������ơ�`registerMode` ��ע�Ჿ��֧�ֵ�ģ
ʽ�� `visibleInMode` ��Ҫ��������ʵ�ָ��ݲ�ͬģʽ�����Ƿ�ɼ����߼���
*/

#include <QWidget>
#include <QPixmap>
#include <QString>

typedef enum
{
    eWBDockPaletteWidget_BOARD,
    eWBDockPaletteWidget_WEB,
    eWBDockPaletteWidget_DOCUMENT,
    eWBDockPaletteWidget_DESKTOP,
} eWBDockPaletteWidgetMode;

// WBDockPaletteWidget ��̳��� QWidget�����ڹ������ʾĳЩ������壨Dock Palette����С������
// ����С���������ڲ�ͬ��ģʽ����ʾ�����أ���������һЩͼ���������Ϣ��
class WBDockPaletteWidget : public QWidget
{
    Q_OBJECT
public:
    // ��ʼ�� WBDockPaletteWidget�����ø����󲢳�ʼ���ڲ����ݽṹ������һ����ѡ�ĸ�����ָ���С�������ơ�
    WBDockPaletteWidget(QWidget* parent=0, const char* name="WBDockPaletteWidget");
    ~WBDockPaletteWidget();

    QPixmap iconToRight();                                                  // ���ر�ʾ����ͼ��� QPixmap��
    QPixmap iconToLeft();                                                   // ���ر�ʾ����ͼ��� QPixmap��
    QString name();                                                         // ����С���������ơ�

    virtual bool visibleInMode(eWBDockPaletteWidgetMode mode) = 0;          // ���麯������������Ҫʵ�ִ˷�����ȷ��С�������ض�ģʽ���Ƿ�ɼ���

    void registerMode(eWBDockPaletteWidgetMode mode);                       // ע��С����֧�ֵ�ģʽ��

    bool visibleState(){return mVisibleState;}                              // ����С�����ĵ�ǰ�ɼ�״̬��
    void setVisibleState(bool state){mVisibleState = state;}                // ����С�����Ŀɼ�״̬��

signals:
    void hideTab(WBDockPaletteWidget* widget);                              // ��С������Ҫ����ʱ�������źš�
    void showTab(WBDockPaletteWidget* widget);                              // ��С������Ҫ��ʾʱ�������źš�

public slots:
    void slot_changeMode(eWBDockPaletteWidgetMode newMode);                 // ����ģʽ�л���������ģʽ����С����״̬��

protected:
    QPixmap mIconToRight;                                                   // ��������ͼ��� QPixmap ����
    QPixmap mIconToLeft;                                                    // ��������ͼ��� QPixmap ����
    QString mName;                                                          // ����С�������Ƶ��ַ�����

    QVector<eWBDockPaletteWidgetMode> mRegisteredModes;                     // ����ע���ģʽ�б�

    bool mVisibleState;                                                     // ���浱ǰ�ɼ�״̬�Ĳ���ֵ��
};

#endif // WBDOCKPALETTEWIDGET_H
