#ifndef WBACTIONPALETTE_H_
#define WBACTIONPALETTE_H_

/*WBActionPalette: ��һ���Զ���Ķ�����ɫ���࣬���ڹ����չʾһϵ�ж���
`WBActionPalette` ���ṩ��һ���ɶ��Ƶġ��ɰ�����������ĵ�ɫ����棬���������ɫ�����ʾ�����֡�����������û�������صĹ��ܡ�*/

/*��δ��붨���������� WBActionPalette �� WBActionPaletteButton�����ڴ���һ�������Ĺ�������������ɫ�壩���������ɰ�ť��ÿ����ť����һ��������
�ù��������Դ�ֱ��ˮƽ���а�ť������֧�ֹرպ��Զ��رչ��ܡ�*/

/*��δ���������ʵ����һ���ɶ��Ƶĸ�����ɫ�壬�û�������Ӹ��ֶ�����ť����������Ҫ�����䲼�ֺ���ʽ��*/

#include <QtWidgets>
#include <QPoint>
#include <QButtonGroup>
#include <QToolButton>

#include "WBFloatingPalette.h"

class WBActionPaletteButton;

// WBActionPalette �̳��� WBFloatingPalette����ʾһ��������ɫ�壬������ʾһ�鶯����ť��
class WBActionPalette : public WBFloatingPalette
{
    Q_OBJECT

    public:
        // ����һ�������б������õ�ɫ��ķ���͸�����
        WBActionPalette(QList<QAction*> actions, Qt::Orientation orientation = Qt::Vertical, QWidget* parent = 0);
        // ���õ�ɫ��ķ���͸�����
        WBActionPalette(Qt::Orientation orientation, QWidget* parent = 0);
        // ���õ�ɫ��Ľ���λ�á�������ͷ���
        WBActionPalette(Qt::Corner corner, QWidget* parent = 0, Qt::Orientation orient = Qt::Vertical);
        // ���ø�����
        WBActionPalette(QWidget* parent = 0);

        virtual ~WBActionPalette();                                                     // ���ٵ�ɫ�����

        void setButtonIconSize(const QSize& size);                                      // ���ð�ť��ͼ���С��
        void setToolButtonStyle(Qt::ToolButtonStyle);                                   // ���ù��߰�ť��ʽ��

        QList<QAction*> actions();                                                      // ���ص�ǰ�Ķ����б�
        virtual void setActions(QList<QAction*> actions);                               // ���ö����б�
        void groupActions();                                                            // ���������顣
        virtual void addAction(QAction* action);                                        // ���һ��������
            
        void setClosable(bool closable);                                                // ���õ�ɫ���Ƿ�ɹرա�
        void setAutoClose(bool autoClose)                                               // �����Ƿ��Զ��رա�
        {
            mAutoClose = autoClose;
        }

        void setCustomCloseProcessing(bool customCloseProcessing)                       // �����Ƿ��Զ���رմ���
        {
            m_customCloseProcessing = customCloseProcessing;
        }
        bool m_customCloseProcessing;                                                    

        virtual int border();                                                           // ���ر߿��С��
        virtual void clearLayout();                                                     // ������֡�
        QSize buttonSize();                                                             // ���ذ�ť��С��

        virtual WBActionPaletteButton* getButtonFromAction(QAction* action);            // �Ӷ�����ȡ��ť��

    public slots:
        void close();                                                                   // �رյ�ɫ�塣

    signals:
        void closed();                                                                  // �ر��źš�     
        void buttonGroupClicked(int id);                                                // ��ť�����źš�
        void customMouseReleased();                                                     // �Զ�������ͷ��źš�

    protected:
        virtual void paintEvent(QPaintEvent *event);                                    // ��������¼���
        virtual void mouseReleaseEvent(QMouseEvent * event);                            // ��������ͷ��¼���
        virtual void init(Qt::Orientation orientation);                                 // ��ʼ����ɫ�塣

        virtual void updateLayout();                                                    // ���²��֡�

        QList<WBActionPaletteButton*> mButtons;                                         // ��ť�б�
        QButtonGroup* mButtonGroup;                                                     // ��ť�顣
        QList<QAction*> mActions;                                                       // �����б�
        QMap<QAction*, WBActionPaletteButton*> mMapActionToButton;                      // ��������ť��ӳ�䡣

        bool mIsClosable;                                                               // �Ƿ�ɹرա�
        Qt::ToolButtonStyle mToolButtonStyle;                                           // ���߰�ť��ʽ��
        bool mAutoClose;                                                                // �Ƿ��Զ��رա�
        QSize mButtonSize;                                                              // ��ť��С��
        QPoint mMousePos;                                                               // ���λ�á�
        WBActionPaletteButton *createPaletteButton(QAction* action, QWidget *parent);   // ������ɫ�尴ť��

    protected slots:
        void buttonClicked();                                                           // ��ť�������
        void actionChanged();                                                           // �����仯����
};

// WBActionPaletteButton �̳��� QToolButton����ʾ��ɫ���еİ�ť��
class WBActionPaletteButton : public QToolButton
{
    Q_OBJECT

    public:
        WBActionPaletteButton(QAction* action, QWidget * parent = 0);       // ����һ�������͸�����
        virtual ~WBActionPaletteButton();                                   // ���ٰ�ť����

    signals:
        void doubleClicked();                                               // ˫���źš�

    protected:
        virtual void mouseDoubleClickEvent(QMouseEvent *event);             // �������˫���¼���
        virtual bool hitButton(const QPoint &pos) const;                    // �жϵ��λ���Ƿ��ڰ�ť��Χ�ڡ�

};

#endif /* WBACTIONPALETTE_H_ */
