#ifndef WBPODCASTRECORDINGPALETTE_H_
#define WBPODCASTRECORDINGPALETTE_H_

/*WBPodcastRecordingPalette�������ڲ���¼�ƹ�����չʾ��ص�״̬����Ϣ����Ӧ¼��״̬��¼�ƽ��Ⱥ���Ƶ��ƽ�ı仯��*/

// ��δ��붨���������� WBPodcastRecordingPalette �� WBVuMeter���ֱ�����ʵ�ֲ���¼�Ƶ�ɫ����������̵Ĺ��ܡ�
// ��Щ����ʹ�ã�����ʵ��һ���������ƵĲ���¼�ƽ��棬����ʵʱ��ʾ¼��ʱ������Ƶ�����¼�ƽ��ȡ�

#include "gui/WBActionPalette.h"
#include "WBPodcastController.h"

#include <QtGui>
#include <QLabel>

class WBVuMeter;

// WBPodcastRecordingPalette ����һ�����ڹ�����¼�ƽ���ĵ�ɫ�壬������ʾ¼��ʱ���ı�ǩ���������̡�
// WBPodcastRecordingPalette ��ͨ���ۺ����� WBPodcastController ��ͨ�ţ�����¼��״̬��¼�ƽ��Ⱥ���Ƶ����ı仯��
class WBPodcastRecordingPalette : public WBActionPalette
{
    Q_OBJECT;

    public:
        WBPodcastRecordingPalette(QWidget *parent = 0);                         // ���캯��������һ��������ָ�룬Ĭ��Ϊ nullptr����ʼ���� mTimerLabel �� mLevelMeter���������˳�ʼ���沼�ֺ���ʽ��
        virtual ~WBPodcastRecordingPalette();                                   // ������������ȷ����ȷ�ͷ���Դ��

    public slots:
        void recordingStateChanged(WBPodcastController::RecordingState);        // ¼��״̬�ı�ʱ�����Ĳۺ���������һ�� WBPodcastController::RecordingState ������
        void recordingProgressChanged(qint64 ms);                               // ¼�ƽ��ȸı�ʱ�����Ĳۺ���������һ�� qint64 ���͵Ĳ�������ʾ��������
        void audioLevelChanged(quint8 level);                                   // ��Ƶ����ı�ʱ�����Ĳۺ���������һ�� quint8 ���͵Ĳ�������ʾ��Ƶ����

    private:
        QLabel *mTimerLabel;                                                    // ������ʾ¼��ʱ���ı�ǩ��
        WBVuMeter *mLevelMeter;                                                 // ָ�� WBVuMeter �����ָ�룬������ʾ�������̡�
};

// WBVuMeter ����һ���Զ�����������̿ؼ����̳��� QWidget��������ʾ��������
// WBVuMeter �ฺ����ƺ���ʾ�������̣����Ը��ݴ��������������½��档
class WBVuMeter : public QWidget
{
    public:
        WBVuMeter(QWidget* pParent);                                            // ���캯��������һ��������ָ�롣��ʼ�� mVolume �ͽ���Ļ������ԡ�
        virtual ~WBVuMeter();                                                   // ������������ȷ����ȷ�ͷ���Դ��

        void setVolume(quint8 pVolume);                                         // ������������ķ���������һ�� quint8 ���͵Ĳ�����

    protected:
        virtual void paintEvent(QPaintEvent* e);                                // ���صĻ����¼������������ڻ����������̵���ۺ�Ч����

    private:
        quint8 mVolume;                                                         // ��ǰ���������� quint8 ���ͱ�ʾ��

};

#endif /* WBPODCASTRECORDINGPALETTE_H_ */
