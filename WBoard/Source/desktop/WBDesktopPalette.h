#ifndef WBUNINOTESWINDOW_H_
#define WBUNINOTESWINDOW_H_

/*WBDesktopPalette����һ�������������صĵ�ɫ���ࡣ�������Ҫ�������Ϳ��������������صĵ�ɫ�����ʾ�����ء���ť�����Լ�����������Ľ�����*/

#include <QtWidgets>
#include <QShowEvent>
#include <QHideEvent>

#include "gui/WBActionPalette.h"
#include "gui/WBRightPalette.h"

// ��δ��붨����һ����Ϊ WBDesktopPalette ���࣬���� WBActionPalette �����࣬���ڹ���������صĲ������档
// WBDesktopPalette ����һ����չ�� WBActionPalette �������ɫ�壬���ڹ������Ӧ�����������صĽ�����¼���
// �������˶���źźͲۺ������������û���������������¼����������״̬�ȡ�
// ͨ���̳к������¼�������������Ч���� Qt ��ܼ��ɣ��ṩ�˷ḻ����������ӿں͹��ܡ�
class WBDesktopPalette : public WBActionPalette
{
    Q_OBJECT

    public:
        // ���캯��������һ�������� parent ��һ�� WBRightPalette* ���͵Ĳ��� rightPalette����ʼ��ʱ����ø���Ĺ��캯��������ʼ��һЩ��Ա������
        WBDesktopPalette(QWidget *parent, WBRightPalette* rightPalette);
        // ������������������ȷ�ͷ���Դ��ͨ���ڻ������麯��ʱʹ�á�
        virtual ~WBDesktopPalette();

        // ���Ƶ�ɫ�����ʾ������״̬���������ͼ�򲶻������ء�
        void disappearForCapture();                          
        void appear();

        // ����ָ��������ť��λ�ã��������ڽ��沼�ֺͽ����߼���
        QPoint buttonPos(QAction* action);                   

    signals:
        // ��Щ�źű����벻ͬ������ص��¼�����������ͬ�Ĳ�����ťʱ������
        void uniboardClick();                                
        void customClick();                                  
        void windowClick();                                  
        void screenClick();                                  

//#ifdef Q_OS_LINUX //TODO: check why this produces an error on linux if uncommented
        // ����ź��� Q_OS_LINUX �궨���±�����������ˢ���ɰ档�궨��Ĳ���ע�͵��ˣ���������Ϊ�� Linux �²����˴�����Ҫ��һ�����Ժʹ���
        void refreshMask();
//#endif

    public slots:
        // ��Щ�ۺ���������Ӧ���������״̬�仯��������ʾ/���ز�������С��/��󻯡������ڴ�С�仯�ȡ�
        void showHideClick(bool checked);                    
        void updateShowHideState(bool pShowEnabled);         
        void setShowHideButtonVisible(bool visible);         
        void setDisplaySelectButtonVisible(bool show);       
        void minimizeMe(eMinimizedLocation location);        
        void maximizeMe();
        void parentResized();

	protected:
        // ���ص��¼������������ڴ����ɫ����ʾ�������¼���
        void showEvent(QShowEvent *event);                   
        void hideEvent(QHideEvent *event);                   

        // �麯�������ظ������Ҳ��ƫ���������Ը��ݾ��������������н���ʵ�֡�
        virtual int getParentRightOffset();                  

	private:
        // ���͵ļ�����Ա�������� mShowHideAction��mDisplaySelectAction �ȣ����ڹ����������صĶ�����
        QAction *mShowHideAction;                            
        QAction *mDisplaySelectAction;                       
        QAction *mMaximizeAction;                            
        QAction *mActionUniboard;                            
        QAction *mActionCustomSelect;                        
        QAction* mActionTest;                                

        // ָ�� WBRightPalette �����ָ�룬�����������Ҳ��ɫ����н�����
        WBRightPalette* rightPalette;        
        // ������ɫ���λ�ã����ܸ��ݾ��������̬��������Ԫ�صĲ��ֺ�λ�á�
        void adjustPosition();                               

    signals:

        void stylusToolChanged(int tool);                    

};

#endif /* WBUNINOTESWINDOW_H_ */
