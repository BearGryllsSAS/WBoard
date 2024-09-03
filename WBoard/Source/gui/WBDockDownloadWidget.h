#ifndef WBDOCKDOWNLOADWIDGET_H
#define WBDOCKDOWNLOADWIDGET_H

/*WBDockDownloadWidget: 是一个从 `WBDockPaletteWidget` 派生的自定义部件，用于处理下载相关的功能展示。
为了在特定模式下展示与下载相关的界面和功能*/

#include <QWidget>
#include <QVBoxLayout>

#include "WBDockPaletteWidget.h"
#include "WBDownloadWidget.h"

// WBDockDownloadWidget 类是一个功能面板小部件，专用于显示和管理下载内容。
// 它继承自 WBDockPaletteWidget，并重写了 visibleInMode 方法，使其在 eWBDockPaletteWidget_BOARD 模式下可见。
// 类中定义了两个私有成员变量 mpLayout 和 mpDLWidget，分别用于布局管理和下载内容的显示。
// 通过这个类，应用程序可以在特定模式下显示下载内容，并且可以通过 WBDockDownloadWidget 对象管理这些内容的布局和显示。
class WBDockDownloadWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    WBDockDownloadWidget(QWidget* parent=0, const char* name="WBDockDownloadWidget");
    ~WBDockDownloadWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)           // 判断小部件在特定模式下是否可见。
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

private:
    QVBoxLayout* mpLayout;                                      // 指向 QVBoxLayout 对象的指针，用于管理小部件的垂直布局。
    WBDownloadWidget* mpDLWidget;                               // 指向 WBDownloadWidget 对象的指针，用于显示和管理下载内容。
};

#endif // WBDOCKDOWNLOADWIDGET_H
