#ifndef WBDESKTOPPENPALETTE_H
#define WBDESKTOPPENPALETTE_H

/*WBDesktopPropertyPalette：它是 `WBPropertyPalette` 的子类，为桌面相关的属性调色板提供了一些基础功能。定义了获取父窗口右边偏移量的方法。*/

// 这段代码是基于 Qt 框架编写的一组类，用于实现桌面应用程序中的属性调色板功能。
// 这些类的设计用于在桌面应用程序中管理不同工具的属性调色板，例如笔、橡皮擦和标记工具。
// 通过继承关系和合理的构造函数设计，它们与右侧面板 (WBRightPalette) 进行交互，并且可以响应父窗口状态的变化。
// 槽函数用于处理用户界面的交互事件，确保用户可以方便地调整工具的属性设置。

#include <QtWidgets>
#include <QResizeEvent>

#include "gui/WBPropertyPalette.h"

class WBRightPalette;

class WBDesktopPropertyPalette : public WBPropertyPalette
{
    // WBDesktopPropertyPalette 继承自 WBPropertyPalette，这表明它是一个自定义属性调色板类，扩展了基础属性调色板的功能。
    Q_OBJECT

    public:
        WBDesktopPropertyPalette(QWidget *parent, WBRightPalette* _rightPalette);       // 构造函数，接受一个父部件指针和一个 WBRightPalette 指针作为参数，初始化 rightPalette。
    private:
        WBRightPalette* rightPalette;                                                   // 指向 WBRightPalette 对象的指针，用于与右侧面板进行交互。
    protected:
        virtual int getParentRightOffset();                                             // 保护方法，可能是计算父窗口右侧偏移量的虚函数，子类可以根据需要进行重写。
};

class WBDesktopPenPalette : public WBDesktopPropertyPalette
{
    // WBDesktopPenPalette 继承自 WBDesktopPropertyPalette，表示这是一个特定于笔属性的调色板类。
    Q_OBJECT
    public:
        WBDesktopPenPalette(QWidget *parent, WBRightPalette* rightPalette);             // 构造函数，初始化 WBDesktopPropertyPalette 和 rightPalette。
        virtual ~WBDesktopPenPalette(){}                                                // 虚析构函数。
    public slots:
        void onParentMinimized();                                                       // 响应父窗口最小化的槽函数。
        void onParentMaximized();                                                       // 响应父窗口最大化的槽函数。

    private slots:
        void onButtonReleased();                                                        // 按钮释放时的槽函数。

};

class WBDesktopEraserPalette : public WBDesktopPropertyPalette
{
    // WBDesktopEraserPalette 继承自 WBDesktopPropertyPalette，用于橡皮擦属性的调色板。
    public:
        WBDesktopEraserPalette(QWidget *parent, WBRightPalette* rightPalette);          // 构造函数，初始化 WBDesktopPropertyPalette 和 rightPalette。
        virtual ~WBDesktopEraserPalette(){}                                             // 虚析构函数。
};

class WBDesktopMarkerPalette : public WBDesktopPropertyPalette
{
    // WBDesktopMarkerPalette 继承自 WBDesktopPropertyPalette，用于标记工具的属性调色板。
    public:
        WBDesktopMarkerPalette(QWidget *parent, WBRightPalette* rightPalette);          // 构造函数，初始化 WBDesktopPropertyPalette 和 rightPalette。
        virtual ~WBDesktopMarkerPalette(){}                                             // 虚析构函数。
};

#endif // WBDESKTOPPENPALETTE_H
