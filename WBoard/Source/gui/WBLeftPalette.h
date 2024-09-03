#ifndef WBLEFTPALETTE_H
#define WBLEFTPALETTE_H

/*WBLeftPalette：当需要在窗口左侧显示特定的调色板功能，并根据不同情况切换模式、处理文档设置以及响应窗口大小变化时，可
以用 `WBLeftPalette` 类。当有文档设置的相关操作时，会调用 `onDocumentSet` 槽函数进行相应的处理。*/

#include "WBDockPalette.h"

// WBLeftPalette 类继承自 WBDockPalette，表示应用程序的左侧停靠面板。
// 它提供了构造函数和析构函数来初始化和销毁对象，具有切换模式的功能和文档设置的槽函数。
// 受保护的函数用于更新面板的最大宽度和处理大小调整事件。
// WBLeftPalette 类扩展了 WBDockPalette，用于管理应用程序左侧的停靠面板。
// 通过提供切换模式、文档设置、更新最大宽度和处理大小调整事件的功能，使得左侧停靠面板更加灵活和动态。
class WBLeftPalette : public WBDockPalette
{
public:
    // 初始化 WBLeftPalette 对象，设置其父窗口和名称。
    WBLeftPalette(QWidget* parent=0, const char* name="WBLeftPalette");
    ~WBLeftPalette();

    // 切换停靠面板的模式，返回切换是否成功的布尔值。
    bool switchMode(eWBDockPaletteWidgetMode mode);

public slots:
    // 当文档被设置时触发的槽函数。可以用于更新停靠面板的内容或状态。
    void onDocumentSet(WBDocumentProxy* documentProxy);

protected:
    // 更新停靠面板的最大宽度。可以用于调整面板大小以适应内容。
    void updateMaxWidth();
    // 处理窗口部件大小调整事件。当窗口部件的大小改变时调用此函数，可以用于重新布局或调整内容大小。
    void resizeEvent(QResizeEvent *event);
};

#endif // WBLEFTPALETTE_H
