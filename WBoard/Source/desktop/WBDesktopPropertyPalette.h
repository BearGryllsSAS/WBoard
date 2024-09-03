#ifndef WBDESKTOPPENPALETTE_H
#define WBDESKTOPPENPALETTE_H

/*WBDesktopPropertyPalette������ `WBPropertyPalette` �����࣬Ϊ������ص����Ե�ɫ���ṩ��һЩ�������ܡ������˻�ȡ�������ұ�ƫ�����ķ�����*/

// ��δ����ǻ��� Qt ��ܱ�д��һ���࣬����ʵ������Ӧ�ó����е����Ե�ɫ�幦�ܡ�
// ��Щ����������������Ӧ�ó����й���ͬ���ߵ����Ե�ɫ�壬����ʡ���Ƥ���ͱ�ǹ��ߡ�
// ͨ���̳й�ϵ�ͺ���Ĺ��캯����ƣ��������Ҳ���� (WBRightPalette) ���н��������ҿ�����Ӧ������״̬�ı仯��
// �ۺ������ڴ����û�����Ľ����¼���ȷ���û����Է���ص������ߵ��������á�

#include <QtWidgets>
#include <QResizeEvent>

#include "gui/WBPropertyPalette.h"

class WBRightPalette;

class WBDesktopPropertyPalette : public WBPropertyPalette
{
    // WBDesktopPropertyPalette �̳��� WBPropertyPalette�����������һ���Զ������Ե�ɫ���࣬��չ�˻������Ե�ɫ��Ĺ��ܡ�
    Q_OBJECT

    public:
        WBDesktopPropertyPalette(QWidget *parent, WBRightPalette* _rightPalette);       // ���캯��������һ��������ָ���һ�� WBRightPalette ָ����Ϊ��������ʼ�� rightPalette��
    private:
        WBRightPalette* rightPalette;                                                   // ָ�� WBRightPalette �����ָ�룬�������Ҳ������н�����
    protected:
        virtual int getParentRightOffset();                                             // ���������������Ǽ��㸸�����Ҳ�ƫ�������麯����������Ը�����Ҫ������д��
};

class WBDesktopPenPalette : public WBDesktopPropertyPalette
{
    // WBDesktopPenPalette �̳��� WBDesktopPropertyPalette����ʾ����һ���ض��ڱ����Եĵ�ɫ���ࡣ
    Q_OBJECT
    public:
        WBDesktopPenPalette(QWidget *parent, WBRightPalette* rightPalette);             // ���캯������ʼ�� WBDesktopPropertyPalette �� rightPalette��
        virtual ~WBDesktopPenPalette(){}                                                // ������������
    public slots:
        void onParentMinimized();                                                       // ��Ӧ��������С���Ĳۺ�����
        void onParentMaximized();                                                       // ��Ӧ��������󻯵Ĳۺ�����

    private slots:
        void onButtonReleased();                                                        // ��ť�ͷ�ʱ�Ĳۺ�����

};

class WBDesktopEraserPalette : public WBDesktopPropertyPalette
{
    // WBDesktopEraserPalette �̳��� WBDesktopPropertyPalette��������Ƥ�����Եĵ�ɫ�塣
    public:
        WBDesktopEraserPalette(QWidget *parent, WBRightPalette* rightPalette);          // ���캯������ʼ�� WBDesktopPropertyPalette �� rightPalette��
        virtual ~WBDesktopEraserPalette(){}                                             // ������������
};

class WBDesktopMarkerPalette : public WBDesktopPropertyPalette
{
    // WBDesktopMarkerPalette �̳��� WBDesktopPropertyPalette�����ڱ�ǹ��ߵ����Ե�ɫ�塣
    public:
        WBDesktopMarkerPalette(QWidget *parent, WBRightPalette* rightPalette);          // ���캯������ʼ�� WBDesktopPropertyPalette �� rightPalette��
        virtual ~WBDesktopMarkerPalette(){}                                             // ������������
};

#endif // WBDESKTOPPENPALETTE_H
