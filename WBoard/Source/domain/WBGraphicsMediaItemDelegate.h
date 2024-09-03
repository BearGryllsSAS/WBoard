#ifndef WBGRAPHICSMEDIAITEMDELEGATE_H_
#define WBGRAPHICSMEDIAITEMDELEGATE_H_

/*WBGraphicsMediaItemDelegate: 是 `WBGraphicsItemDelegate` 的派生类，用于处理 `WBGraphicsMediaItem` 的委托操作。
`WBGraphicsMediaItem` 提供了委托操作，包括处理鼠标事件、媒体状态变化、操作按钮的构建和响应，以及工具栏的显示和隐藏
控制。
1. 公共槽函数：`toggleMute` ：用于切换静音状态。`updateTicker` ：可能用于更新时间显示。 `showHide` ：显示或隐藏相关
元素。`mediaStatusChanged` 和 `mediaStateChanged` ：用于响应媒体的状态变化。
2.保护槽函数：`remove` ：执行移除操作。 `togglePlayPause` ：切换播放/暂停状态。`updatePlayPauseState` ：更新播放/暂停
的状态显示。`totalTimeChanged` ：当总时间改变时进行处理。`hideToolBar` ：隐藏工具栏。
3. 保护方法 `buildButtons` 用于构建相关的按钮。
4. 成员变量：`mPlayPauseButton` 、 `mStopButton` 、 `mMuteButton` ：与播放/暂停、停止、静音操作相关的按钮。
`mMediaControl` ： 可 能 用 于 媒 体 控 制 的 相 关 组 件 。 `mToolBarShowTimer` ： 工 具 栏 显 示 的 定 时 器 。
`m_iToolBarShowingInterval` ：工具栏显示的时间间隔。
5. 私有槽函数：`freeze`：处理小部件的冻结操作。`pin`：可能用于执行将小部件固定或类似的操作。 WBGraphicsGroupContainerItemDelegate: 类 是 `WBGraphicsItemDelegate` 的 派 生 类 ， 用于处理
`WBGraphicsGroupContainerItem` 的委托操作。`WBGraphicsGroupContainerItem` 提供了特定的委托操作，包括菜单装饰、按
钮管理和鼠标事件处理，以及实现了销毁分组的功能。
`decorateMenu` 用于装饰相关的菜单。`buildButtons` 用于构建特定的按钮。`freeButtons` 用于释放按钮相关的资源。重写了鼠
标事件处理方法，用于处理在分组容器上的鼠标操作。`destroyGroup` 可能用于执行销毁分组的操作。 `mDestroyGroupButton` 用
于存储与销毁分组操作相关的按钮*/

#include <QtWidgets>
#include <QTimer>
#include <QtMultimedia>

#include "core/WB.h"
#include "WBGraphicsItemDelegate.h"

class QGraphicsSceneMouseEvent;
class QGraphicsItem;

// WBGraphicsMediaItemDelegate 类继承自 WBGraphicsItemDelegate，专门为 WBGraphicsMediaItem 提供委托功能。
// 此类主要用于处理媒体项的用户交互和控制，如播放、暂停、静音等。
// WBGraphicsMediaItemDelegate 类通过委托模式扩展了 WBGraphicsItemDelegate 的功能，专门处理 WBGraphicsMediaItem 的媒体控制和用户交互逻辑。
// 此类提供了丰富的接口和事件处理方法，使得媒体项的播放、暂停、静音等功能更加灵活和易用。
// 通过这种方式，可以更好地分离核心逻辑和用户界面逻辑，提高代码的可维护性和可扩展性。
class WBGraphicsMediaItemDelegate :  public WBGraphicsItemDelegate
{
    Q_OBJECT

public:
    // 初始化 WBGraphicsMediaItemDelegate，将 WBGraphicsMediaItem 作为委托对象，并设置父对象。
    WBGraphicsMediaItemDelegate(WBGraphicsMediaItem* pDelegated, QObject * parent = 0);
    virtual ~WBGraphicsMediaItemDelegate();

    virtual void positionHandles();                                 // 用于定位控件句柄。

    bool mousePressEvent(QGraphicsSceneMouseEvent* event);          // 处理鼠标按下事件。

    void showToolBar(bool autohide = true);                         // 显示工具栏，并可选择是否自动隐藏。

public slots:
    void toggleMute();                                              // 切换静音状态。
    void updateTicker(qint64 time);                                 // 更新时间刻度。
    virtual void showHide(bool show);                               // 显示或隐藏控件。

    void mediaStatusChanged(QMediaPlayer::MediaStatus status);      // 处理媒体状态变化。
    void mediaStateChanged(QMediaPlayer::State state);              // 处理媒体播放状态变化。

protected slots:    
    virtual void remove(bool canUndo = true);                       // 移除媒体项。

    void togglePlayPause();                                         // 切换播放/暂停状态。

    void updatePlayPauseState();                                    // 更新播放/暂停按钮状态。

    void totalTimeChanged(qint64 newTotalTime);                     // 处理总时间变化。

    void hideToolBar();                                             // 隐藏工具栏。


protected:
    virtual void buildButtons();                                    // 创建控制按钮。

    WBGraphicsMediaItem* delegated();                               // 返回委托对象 WBGraphicsMediaItem。

    DelegateButton* mPlayPauseButton;                               // 播放/暂停按钮。
    DelegateButton* mStopButton;                                    // 停止按钮。
    DelegateButton* mMuteButton;                                    // 静音按钮。
    DelegateMediaControl* mMediaControl;                            // 媒体控制器。

    QTimer* mToolBarShowTimer;                                      // 工具栏显示计时器。
    int m_iToolBarShowingInterval;                                  // 工具栏显示间隔。
};

#endif /* WBGRAPHICSMEDIAITEMDELEGATE_H_ */
