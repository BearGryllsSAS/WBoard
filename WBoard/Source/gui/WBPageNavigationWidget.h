#ifndef WBPAGENAVIGATIONWIDGET_H
#define WBPAGENAVIGATIONWIDGET_H

/*WBPageNavigationWidget：它继承自 `WBDockPaletteWidget` ，调整网页大小，设置网页页码，网页刷新*/

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QResizeEvent>
#include <QTimerEvent>
#include <QLabel>
#include <QString>

#include "WBBoardThumbnailsView.h"
#include "WBDocumentNavigator.h"
#include "WBDockPaletteWidget.h"
#include "document/WBDocumentProxy.h"

// WBPageNavigationWidget 类是一个用于页面导航的停靠面板部件。
// 该类继承自 WBDockPaletteWidget，主要用于在用户界面中显示和操作页面导航功能，包括显示当前页码和总页码，以及一个时钟显示。
// WBPageNavigationWidget 类是一个用于显示和管理页面导航的停靠面板。
// 通过提供页码和时钟显示，它允许用户在用户界面中直观地进行页面导航。
// 该类定义了一些公共和私有槽函数，用于处理用户交互事件，并通过定时器事件定时更新时钟显示。
// 通过这些功能，WBPageNavigationWidget 提供了一个直观且强大的界面，用于页面导航和时间显示。
class WBPageNavigationWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    WBPageNavigationWidget(QWidget* parent=0, const char* name="WBPageNavigationWidget");
    ~WBPageNavigationWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)       // 判断小部件在特定模式下是否可见。
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

signals:
    void resizeRequest(QResizeEvent* event);                // 发出调整大小请求信号。

public slots:
    void setPageNumber(int current, int total);             // 设置当前页码和总页码。

protected:
    virtual void timerEvent(QTimerEvent *event);            // 处理定时器事件。


private:    
    void updateTime();                                      // 更新时钟显示的时间。
    int customMargin();                                     // 返回自定义边距的大小。
    int border();                                           // 返回边框的大小。

    WBDocumentNavigator* mNavigator;                        // 文档导航器，用于处理页面导航。
    QVBoxLayout* mLayout;                                   // 主垂直布局，用于管理子部件的排列。
    QHBoxLayout* mHLayout;                                  // 水平布局，用于管理页码和时钟标签的排列。
    QLabel* mPageNbr;                                       // 用于显示当前页码和总页码的标签。
    QLabel* mClock;                                         // 用于显示当前时间的时钟标签。
    QString mTimeFormat;                                    // 用于格式化时间显示的字符串。
    int mTimerID;                                           // 定时器ID，用于定时更新时钟显示。

};

#endif // WBPAGENAVIGATIONWIDGET_H
