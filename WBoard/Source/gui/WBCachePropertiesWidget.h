#ifndef WBCACHEPROPERTIESWIDGET_H
#define WBCACHEPROPERTIESWIDGET_H

/*WBCachePropertiesWidget：是一个自定义的窗口部件，用于显示和操作图形缓存的相关属性。
提供了一个用户界面，用于展示图形缓存的属性，并允许用户进行颜色、形状和大小等方面的设置和调整。*/

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QVector>

#include "WBDockPaletteWidget.h"
#include "tools/WBGraphicsCache.h"

// 定义了形状按钮的最大宽度。
#define MAX_SHAPE_WIDTH 200

// WBCachePropertiesWidget 类继承自 WBDockPaletteWidget，用于管理缓存属性的界面部件。
// 这个类主要用于在用户界面中显示和操作缓存的属性，包括颜色、形状和大小。
// WBCachePropertiesWidget 类是一个用于显示和管理缓存属性的停靠面板。
// 通过提供颜色、形状和大小的控制，它允许用户在用户界面中调整缓存的属性。
// 该类定义了一些公共和私有槽函数，用于处理用户交互事件，并更新界面以反映当前缓存的状态。
// 通过这些功能，WBCachePropertiesWidget 提供了一个直观且强大的界面，用于管理应用程序中的缓存属性。
class WBCachePropertiesWidget : public WBDockPaletteWidget
{
    // 继承自 WBDockPaletteWidget，表明这是一个停靠面板部件。
    Q_OBJECT
public:
    WBCachePropertiesWidget(QWidget* parent=0, const char* name="WBCachePropertiesWidget");
    ~WBCachePropertiesWidget();

    bool visibleInMode(eWBDockPaletteWidgetMode mode)       // 判断小部件在特定模式下是否可见。
    {
        return mode == eWBDockPaletteWidget_BOARD;
    }

public slots:
    void updateCurrentCache();                              // 更新当前缓存的属性。

private slots:
    void onCloseClicked();                                  // 处理关闭按钮的点击事件。
    void updateCacheColor(QColor color);                    // 更新缓存的颜色。
    void onColorClicked();                                  // 处理颜色按钮的点击事件。
    void updateShapeButtons();                              // 更新形状按钮的状态。
    void onSizeChanged(int newSize);                        // 处理大小滑块的值改变事件。
    void onCacheEnabled();                                  // 处理缓存启用事件。

private:
    QVBoxLayout* mpLayout;                                  // 主垂直布局，用于管理子部件的排列。

    QLabel* mpCachePropertiesLabel;                         // 缓存属性的标签。
    QLabel* mpColorLabel;                                   // 颜色属性的标签。
    QLabel* mpShapeLabel;                                   // 形状属性的标签。
    QLabel* mpSizeLabel;                                    // 大小属性的标签。
    
    QPushButton* mpColor;                                   // 颜色按钮。
    QPushButton* mpSquareButton;                            // 方形按钮。
    QPushButton* mpCircleButton;                            // 圆形按钮。
    QPushButton* mpCloseButton;                             // 关闭按钮。

    QSlider* mpSizeSlider;                                  // 大小滑块。

    QHBoxLayout* mpColorLayout;                             // 颜色布局。
    QHBoxLayout* mpShapeLayout;                             // 形状布局。
    QHBoxLayout* mpSizeLayout;                              // 大小布局。
    QHBoxLayout* mpCloseLayout;                             // 关闭按钮布局。
    
    QWidget* mpProperties;                                  // 属性面板。
    QVBoxLayout* mpPropertiesLayout;                        // 属性面板的布局。

    QColor mActualColor;                                    // 当前颜色。
    eMaskShape mActualShape;                                // 当前形状。
    WBGraphicsCache* mpCurrentCache;                        // 当前缓存对象。

};

#endif // WBCACHEPROPERTIESWIDGET_H
