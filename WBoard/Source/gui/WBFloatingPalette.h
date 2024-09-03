#ifndef WBFLOATINGPALLETTE_H_
#define WBFLOATINGPALLETTE_H_

/*WBFloatingPalette: 该类为可浮动的调色板或窗口组件。定义了一个枚举类型 `eMinimizedLocation` ，用于表示调色板最小化时
的 位 置 选 项 。 继 承 自 `QWidget` 重 写 了 一 些 鼠 标 事 件 处 理 函 数 ， 如 `mouseMoveEvent` 、 `mousePressEvent` 和
`mouseReleaseEvent` ，可能用于实现窗口的拖动功能。提供了一些方法来管理关联的调色板、调整大小和位置、设置自定义位置、
背景刷、抓取状态、最小化权限等。重写了一些保护成员函数，如 `enterEvent`、`showEvent` 和 `paintEvent` ，可能用于处理鼠
标进入、显示和绘制事件。具有一些私有方法用于内部管理，如移除所有关联的调色板、最小化调色板等。定义了一些信号，用于通
知外部关于鼠标进入、最小化开始、最大化开始、已最大化和正在移动等状态的变化。*/

#include <QWidget>
#include <QPoint>

typedef enum
{
    eMinimizedLocation_None,
    eMinimizedLocation_Left,
    eMinimizedLocation_Top,
    eMinimizedLocation_Right,
    eMinimizedLocation_Bottom
}eMinimizedLocation;

// WBFloatingPalette 类提供了一个浮动面板的实现，可以处理拖动、调整大小和最小化等功能。
// 通过各种事件处理函数和信号，能够实现丰富的用户交互。
// 这个类可以用来创建一个可以自由浮动和调整的工具面板，用于应用程序的用户界面设计。
class WBFloatingPalette : public QWidget
{
    Q_OBJECT

public:
    WBFloatingPalette(Qt::Corner = Qt::TopLeftCorner, QWidget *parent = 0);

    virtual void mouseMoveEvent(QMouseEvent *event);                        // 记录鼠标按下位置。
    virtual void mousePressEvent(QMouseEvent *event);                       // 根据鼠标移动调整面板位置。
    virtual void mouseReleaseEvent(QMouseEvent *event);                     // 结束拖动操作。

    void addAssociatedPalette(WBFloatingPalette* pOtherPalette);            // 添加关联的浮动面板。这些面板可以一起移动或调整大小。
    void removeAssociatedPalette(WBFloatingPalette* pOtherPalette);         // 移除关联的浮动面板。这些面板可以一起移动或调整大小。

    virtual void adjustSizeAndPosition(bool pUp = true);                    // 调整面板的大小和位置。
        
    void setCustomPosition(bool pFlag);                                     // 设置自定义位置标志。

    QSize preferredSize();                                                  // 返回面板的首选大小。

    void setBackgroundBrush(const QBrush& brush);                           // 设置背景画刷。
    void setGrip(bool newGrip);                                             // 设置是否可以拖动。

    void setMinimizePermission(bool permission);                            // 设置是否允许最小化。

protected:
    virtual void enterEvent(QEvent *event);                                 // 当鼠标进入面板时调用。
    virtual void showEvent(QShowEvent *event);                              // 当面板显示时调用。
    virtual void paintEvent(QPaintEvent *event);                            // 绘制面板。

    virtual int radius();                                                   // 返回面板的半径、边框和拖动大小。
    virtual int border();                                                   // 返回面板的边框
    virtual int gripSize();                                                 // 返回面板的拖动大小

    QBrush mBackgroundBrush;                                                // 背景画刷。
    bool mbGrip;                                                            // 是否可以拖动的标志。
    static const int sLayoutContentMargin = 12;                              
    static const int sLayoutSpacing = 15;                                    
    void moveInsideParent(const QPoint &position);                          // 用于移动面板到父控件内部。
    bool mCustomPosition;                                                   // 自定义位置标志。
    bool mIsMoving;                                                         // 是否正在移动的标志。

    virtual int getParentRightOffset();                                     // 返回父控件右侧的偏移量。

    eMinimizedLocation minimizedLocation(){return mMinimizedLocation;}      // 返回面板最小化的位置。

private:
    void removeAllAssociatedPalette();                                      // 移除所有关联的浮动面板。
    void minimizePalette(const QPoint& pos);                                // minimizePalette 根据给定位置最小化面板。

    QList<WBFloatingPalette*> mAssociatedPalette;                           // 关联的浮动面板列表。
    QPoint mDragPosition;                                                   // 拖动位置。
    bool mCanBeMinimized;                                                   // 是否可以最小化的标志。
    eMinimizedLocation mMinimizedLocation;                                  // 最小化位置。
    Qt::Corner mDefaultPosition;                                            // 默认位置。

signals:
    void mouseEntered();                                                    // 当鼠标进入面板时发出。
    void minimizeStart(eMinimizedLocation location);                        // 开始最小化时发出。
    void maximizeStart();                                                   // 开始最大化时发出。
    void maximized();                                                       // 最大化完成时发出。
    void moving();                                                          // 移动时发出。
};

#endif /* WBFLOATINGPALLETTE_H_ */
