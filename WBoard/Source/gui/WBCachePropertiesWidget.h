#ifndef WBCACHEPROPERTIESWIDGET_H
#define WBCACHEPROPERTIESWIDGET_H

/*WBCachePropertiesWidget����һ���Զ���Ĵ��ڲ�����������ʾ�Ͳ���ͼ�λ����������ԡ�
�ṩ��һ���û����棬����չʾͼ�λ�������ԣ��������û�������ɫ����״�ʹ�С�ȷ�������ú͵�����*/

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QVector>

#include "WBDockPaletteWidget.h"
#include "tools/WBGraphicsCache.h"

// ��������״��ť������ȡ�
#define MAX_SHAPE_WIDTH 200

// WBCachePropertiesWidget ��̳��� WBDockPaletteWidget�����ڹ��������ԵĽ��沿����
// �������Ҫ�������û���������ʾ�Ͳ�����������ԣ�������ɫ����״�ʹ�С��
// WBCachePropertiesWidget ����һ��������ʾ�͹��������Ե�ͣ����塣
// ͨ���ṩ��ɫ����״�ʹ�С�Ŀ��ƣ��������û����û������е�����������ԡ�
// ���ඨ����һЩ������˽�вۺ��������ڴ����û������¼��������½����Է�ӳ��ǰ�����״̬��
// ͨ����Щ���ܣ�WBCachePropertiesWidget �ṩ��һ��ֱ����ǿ��Ľ��棬���ڹ���Ӧ�ó����еĻ������ԡ�
class WBCachePropertiesWidget : public WBDockPaletteWidget
{
    // �̳��� WBDockPaletteWidget����������һ��ͣ����岿����
    Q_OBJECT
public:
    WBCachePropertiesWidget(QWidget* parent=0, const char* name="WBCachePropertiesWidget");
    ~WBCachePropertiesWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)       // �ж�С�������ض�ģʽ���Ƿ�ɼ���
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

public slots:
    void updateCurrentCache();                              // ���µ�ǰ��������ԡ�

private slots:
    void onCloseClicked();                                  // ����رհ�ť�ĵ���¼���
    void updateCacheColor(QColor color);                    // ���»������ɫ��
    void onColorClicked();                                  // ������ɫ��ť�ĵ���¼���
    void updateShapeButtons();                              // ������״��ť��״̬��
    void onSizeChanged(int newSize);                        // �����С�����ֵ�ı��¼���
    void onCacheEnabled();                                  // �����������¼���

private:
    QVBoxLayout* mpLayout;                                  // ����ֱ���֣����ڹ����Ӳ��������С�

    QLabel* mpCachePropertiesLabel;                         // �������Եı�ǩ��
    QLabel* mpColorLabel;                                   // ��ɫ���Եı�ǩ��
    QLabel* mpShapeLabel;                                   // ��״���Եı�ǩ��
    QLabel* mpSizeLabel;                                    // ��С���Եı�ǩ��
    
    QPushButton* mpColor;                                   // ��ɫ��ť��
    QPushButton* mpSquareButton;                            // ���ΰ�ť��
    QPushButton* mpCircleButton;                            // Բ�ΰ�ť��
    QPushButton* mpCloseButton;                             // �رհ�ť��

    QSlider* mpSizeSlider;                                  // ��С���顣

    QHBoxLayout* mpColorLayout;                             // ��ɫ���֡�
    QHBoxLayout* mpShapeLayout;                             // ��״���֡�
    QHBoxLayout* mpSizeLayout;                              // ��С���֡�
    QHBoxLayout* mpCloseLayout;                             // �رհ�ť���֡�
    
    QWidget* mpProperties;                                  // ������塣
    QVBoxLayout* mpPropertiesLayout;                        // �������Ĳ��֡�

    QColor mActualColor;                                    // ��ǰ��ɫ��
    eMaskShape mActualShape;                                // ��ǰ��״��
    WBGraphicsCache* mpCurrentCache;                        // ��ǰ�������

};

#endif // WBCACHEPROPERTIESWIDGET_H
