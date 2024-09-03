#ifndef WBRIGHTPALETTE_H
#define WBRIGHTPALETTE_H

/*WBRightPalette：当需要在窗口右侧显示特定的调色板功能，并根据不同情况切换模式、处理文档设置以及响应窗口大小变化时，可
以使用 `WBRightPalette` 类。当有文档设置的相关操作时，会调用 `onDocumentSet` 槽函数进行相应的处理。*/

#include "WBDockPalette.h"

// WBRightPalette 类扩展了 WBDockPalette，用于管理应用程序右侧的停靠面板。
// 通过提供切换模式、更新最大宽度和处理鼠标移动及大小调整事件的功能，使得右侧停靠面板更加灵活和动态。
// 定义了 resized 信号，以便其他对象可以响应面板大小调整事件。
class WBRightPalette : public WBDockPalette
{
    Q_OBJECT
public:
    // 初始化 WBRightPalette 对象，设置其父窗口和名称。设置右侧停靠面板的类型为 eWBDockPaletteType_RIGHT。
    WBRightPalette(QWidget* parent=0, const char* name="WBRightPalette");
    ~WBRightPalette();
    bool switchMode(eWBDockPaletteWidgetMode mode);         // 切换停靠面板的模式，返回切换是否成功的布尔值。

signals:
    void resized();                                         // 当右侧停靠面板大小调整时发出 resized 信号。

protected:
    void updateMaxWidth();                                  // 更新停靠面板的最大宽度。用于调整面板大小以适应内容。
    void mouseMoveEvent(QMouseEvent *event);                // 处理鼠标移动事件。当鼠标在面板上移动时调用此函数，可以用于实现拖拽或其他交互功能。
    void resizeEvent(QResizeEvent *event);                  // 处理窗口部件大小调整事件。当窗口部件的大小改变时调用此函数，可以用于重新布局或调整内容大小。

};

#endif // WBRIGHTPALETTE_H
