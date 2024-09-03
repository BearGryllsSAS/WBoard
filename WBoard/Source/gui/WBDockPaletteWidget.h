#ifndef WBDOCKPALETTEWIDGET_H
#define WBDOCKPALETTEWIDGET_H

/*WBDockPaletteWidget : 是一个用于停靠面板的基础部件类。为停靠面板中的具体部件提供了基本的框架和一些通用的功能，而具体
的可见性逻辑由派生类根据不同的模式来实现
`iconToRight` 和 `iconToLeft` ：可能用于获取左右方向的图标, `name` ：获取部件的名称。`registerMode` ：注册部件支持的模
式。 `visibleInMode` ：要求派生类实现根据不同模式决定是否可见的逻辑。
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

// WBDockPaletteWidget 类继承自 QWidget，用于管理和显示某些功能面板（Dock Palette）的小部件。
// 这类小部件可以在不同的模式下显示或隐藏，并包含了一些图标和名称信息。
class WBDockPaletteWidget : public QWidget
{
    Q_OBJECT
public:
    // 初始化 WBDockPaletteWidget，设置父对象并初始化内部数据结构。接受一个可选的父窗口指针和小部件名称。
    WBDockPaletteWidget(QWidget* parent=0, const char* name="WBDockPaletteWidget");
    ~WBDockPaletteWidget();

    QPixmap iconToRight();                                                  // 返回表示向右图标的 QPixmap。
    QPixmap iconToLeft();                                                   // 返回表示向左图标的 QPixmap。
    QString name();                                                         // 返回小部件的名称。

    virtual bool visibleInMode(eWBDockPaletteWidgetMode mode) = 0;          // 纯虚函数，派生类需要实现此方法以确定小部件在特定模式下是否可见。

    void registerMode(eWBDockPaletteWidgetMode mode);                       // 注册小部件支持的模式。

    bool visibleState(){return mVisibleState;}                              // 返回小部件的当前可见状态。
    void setVisibleState(bool state){mVisibleState = state;}                // 设置小部件的可见状态。

signals:
    void hideTab(WBDockPaletteWidget* widget);                              // 当小部件需要隐藏时发出此信号。
    void showTab(WBDockPaletteWidget* widget);                              // 当小部件需要显示时发出此信号。

public slots:
    void slot_changeMode(eWBDockPaletteWidgetMode newMode);                 // 处理模式切换，根据新模式更新小部件状态。

protected:
    QPixmap mIconToRight;                                                   // 保存向右图标的 QPixmap 对象。
    QPixmap mIconToLeft;                                                    // 保存向左图标的 QPixmap 对象。
    QString mName;                                                          // 保存小部件名称的字符串。

    QVector<eWBDockPaletteWidgetMode> mRegisteredModes;                     // 保存注册的模式列表。

    bool mVisibleState;                                                     // 保存当前可见状态的布尔值。
};

#endif // WBDOCKPALETTEWIDGET_H
