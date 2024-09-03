#ifndef WBGRAPHICSMEDIAITEMDELEGATE_H_
#define WBGRAPHICSMEDIAITEMDELEGATE_H_

/*WBGraphicsMediaItemDelegate: �� `WBGraphicsItemDelegate` �������࣬���ڴ��� `WBGraphicsMediaItem` ��ί�в�����
`WBGraphicsMediaItem` �ṩ��ί�в�����������������¼���ý��״̬�仯��������ť�Ĺ�������Ӧ���Լ�����������ʾ������
���ơ�
1. �����ۺ�����`toggleMute` �������л�����״̬��`updateTicker` ���������ڸ���ʱ����ʾ�� `showHide` ����ʾ���������
Ԫ�ء�`mediaStatusChanged` �� `mediaStateChanged` ��������Ӧý���״̬�仯��
2.�����ۺ�����`remove` ��ִ���Ƴ������� `togglePlayPause` ���л�����/��ͣ״̬��`updatePlayPauseState` �����²���/��ͣ
��״̬��ʾ��`totalTimeChanged` ������ʱ��ı�ʱ���д���`hideToolBar` �����ع�������
3. �������� `buildButtons` ���ڹ�����صİ�ť��
4. ��Ա������`mPlayPauseButton` �� `mStopButton` �� `mMuteButton` ���벥��/��ͣ��ֹͣ������������صİ�ť��
`mMediaControl` �� �� �� �� �� ý �� �� �� �� �� �� �� �� �� `mToolBarShowTimer` �� �� �� �� �� ʾ �� �� ʱ �� ��
`m_iToolBarShowingInterval` ����������ʾ��ʱ������
5. ˽�вۺ�����`freeze`������С�����Ķ��������`pin`����������ִ�н�С�����̶������ƵĲ����� WBGraphicsGroupContainerItemDelegate: �� �� `WBGraphicsItemDelegate` �� �� �� �� �� ���ڴ���
`WBGraphicsGroupContainerItem` ��ί�в�����`WBGraphicsGroupContainerItem` �ṩ���ض���ί�в����������˵�װ�Ρ���
ť���������¼������Լ�ʵ�������ٷ���Ĺ��ܡ�
`decorateMenu` ����װ����صĲ˵���`buildButtons` ���ڹ����ض��İ�ť��`freeButtons` �����ͷŰ�ť��ص���Դ����д����
���¼������������ڴ����ڷ��������ϵ���������`destroyGroup` ��������ִ�����ٷ���Ĳ����� `mDestroyGroupButton` ��
�ڴ洢�����ٷ��������صİ�ť*/

#include <QtWidgets>
#include <QTimer>
#include <QtMultimedia>

#include "core/WB.h"
#include "WBGraphicsItemDelegate.h"

class QGraphicsSceneMouseEvent;
class QGraphicsItem;

// WBGraphicsMediaItemDelegate ��̳��� WBGraphicsItemDelegate��ר��Ϊ WBGraphicsMediaItem �ṩί�й��ܡ�
// ������Ҫ���ڴ���ý������û������Ϳ��ƣ��粥�š���ͣ�������ȡ�
// WBGraphicsMediaItemDelegate ��ͨ��ί��ģʽ��չ�� WBGraphicsItemDelegate �Ĺ��ܣ�ר�Ŵ��� WBGraphicsMediaItem ��ý����ƺ��û������߼���
// �����ṩ�˷ḻ�Ľӿں��¼���������ʹ��ý����Ĳ��š���ͣ�������ȹ��ܸ����������á�
// ͨ�����ַ�ʽ�����Ը��õط�������߼����û������߼�����ߴ���Ŀ�ά���ԺͿ���չ�ԡ�
class WBGraphicsMediaItemDelegate :  public WBGraphicsItemDelegate
{
    Q_OBJECT

public:
    // ��ʼ�� WBGraphicsMediaItemDelegate���� WBGraphicsMediaItem ��Ϊί�ж��󣬲����ø�����
    WBGraphicsMediaItemDelegate(WBGraphicsMediaItem* pDelegated, QObject * parent = 0);
    virtual ~WBGraphicsMediaItemDelegate();

    virtual void positionHandles();                                 // ���ڶ�λ�ؼ������

    bool mousePressEvent(QGraphicsSceneMouseEvent* event);          // ������갴���¼���

    void showToolBar(bool autohide = true);                         // ��ʾ������������ѡ���Ƿ��Զ����ء�

public slots:
    void toggleMute();                                              // �л�����״̬��
    void updateTicker(qint64 time);                                 // ����ʱ��̶ȡ�
    virtual void showHide(bool show);                               // ��ʾ�����ؿؼ���

    void mediaStatusChanged(QMediaPlayer::MediaStatus status);      // ����ý��״̬�仯��
    void mediaStateChanged(QMediaPlayer::State state);              // ����ý�岥��״̬�仯��

protected slots:    
    virtual void remove(bool canUndo = true);                       // �Ƴ�ý���

    void togglePlayPause();                                         // �л�����/��ͣ״̬��

    void updatePlayPauseState();                                    // ���²���/��ͣ��ť״̬��

    void totalTimeChanged(qint64 newTotalTime);                     // ������ʱ��仯��

    void hideToolBar();                                             // ���ع�������


protected:
    virtual void buildButtons();                                    // �������ư�ť��

    WBGraphicsMediaItem* delegated();                               // ����ί�ж��� WBGraphicsMediaItem��

    DelegateButton* mPlayPauseButton;                               // ����/��ͣ��ť��
    DelegateButton* mStopButton;                                    // ֹͣ��ť��
    DelegateButton* mMuteButton;                                    // ������ť��
    DelegateMediaControl* mMediaControl;                            // ý���������

    QTimer* mToolBarShowTimer;                                      // ��������ʾ��ʱ����
    int m_iToolBarShowingInterval;                                  // ��������ʾ�����
};

#endif /* WBGRAPHICSMEDIAITEMDELEGATE_H_ */
