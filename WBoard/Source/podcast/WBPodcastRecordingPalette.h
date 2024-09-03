#ifndef WBPODCASTRECORDINGPALETTE_H_
#define WBPODCASTRECORDINGPALETTE_H_

/*WBPodcastRecordingPalette：用于在播客录制过程中展示相关的状态和信息，响应录制状态、录制进度和音频电平的变化。*/

// 这段代码定义了两个类 WBPodcastRecordingPalette 和 WBVuMeter，分别用于实现播客录制调色板和音量表盘的功能。
// 这些类结合使用，可以实现一个功能完善的播客录制界面，包括实时显示录制时长、音频级别和录制进度。

#include "gui/WBActionPalette.h"
#include "WBPodcastController.h"

#include <QtGui>
#include <QLabel>

class WBVuMeter;

// WBPodcastRecordingPalette 类是一个用于管理播客录制界面的调色板，包含显示录制时长的标签和音量表盘。
// WBPodcastRecordingPalette 类通过槽函数与 WBPodcastController 类通信，处理录制状态、录制进度和音频级别的变化。
class WBPodcastRecordingPalette : public WBActionPalette
{
    Q_OBJECT;

    public:
        WBPodcastRecordingPalette(QWidget *parent = 0);                         // 构造函数，接受一个父部件指针，默认为 nullptr。初始化了 mTimerLabel 和 mLevelMeter，并设置了初始界面布局和样式。
        virtual ~WBPodcastRecordingPalette();                                   // 虚析构函数，确保正确释放资源。

    public slots:
        void recordingStateChanged(WBPodcastController::RecordingState);        // 录制状态改变时触发的槽函数，接受一个 WBPodcastController::RecordingState 参数。
        void recordingProgressChanged(qint64 ms);                               // 录制进度改变时触发的槽函数，接受一个 qint64 类型的参数，表示毫秒数。
        void audioLevelChanged(quint8 level);                                   // 音频级别改变时触发的槽函数，接受一个 quint8 类型的参数，表示音频级别。

    private:
        QLabel *mTimerLabel;                                                    // 用于显示录制时长的标签。
        WBVuMeter *mLevelMeter;                                                 // 指向 WBVuMeter 对象的指针，用于显示音量表盘。
};

// WBVuMeter 类是一个自定义的音量表盘控件，继承自 QWidget，用于显示音量级别。
// WBVuMeter 类负责绘制和显示音量表盘，可以根据传入的音量级别更新界面。
class WBVuMeter : public QWidget
{
    public:
        WBVuMeter(QWidget* pParent);                                            // 构造函数，接受一个父部件指针。初始化 mVolume 和界面的绘制属性。
        virtual ~WBVuMeter();                                                   // 虚析构函数，确保正确释放资源。

        void setVolume(quint8 pVolume);                                         // 设置音量级别的方法，接受一个 quint8 类型的参数。

    protected:
        virtual void paintEvent(QPaintEvent* e);                                // 重载的绘制事件处理函数，用于绘制音量表盘的外观和效果。

    private:
        quint8 mVolume;                                                         // 当前音量级别，用 quint8 类型表示。

};

#endif /* WBPODCASTRECORDINGPALETTE_H_ */
