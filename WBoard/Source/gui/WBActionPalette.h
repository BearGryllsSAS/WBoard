#ifndef WBACTIONPALETTE_H_
#define WBACTIONPALETTE_H_

/*WBActionPalette: 是一个自定义的动作调色板类，用于管理和展示一系列动作
`WBActionPalette` 类提供了一个可定制的、可包含多个动作的调色板界面，并处理与调色板的显示、布局、动作管理和用户交互相关的功能。*/

/*这段代码定义了两个类 WBActionPalette 和 WBActionPaletteButton，用于创建一个浮动的工具栏（浮动调色板），包含若干按钮，每个按钮关联一个动作。
该工具栏可以垂直或水平排列按钮，并且支持关闭和自动关闭功能。*/

/*这段代码总体上实现了一个可定制的浮动调色板，用户可以添加各种动作按钮，并根据需要设置其布局和样式。*/

#include <QtWidgets>
#include <QPoint>
#include <QButtonGroup>
#include <QToolButton>

#include "WBFloatingPalette.h"

class WBActionPaletteButton;

// WBActionPalette 继承自 WBFloatingPalette，表示一个浮动调色板，用于显示一组动作按钮。
class WBActionPalette : public WBFloatingPalette
{
    Q_OBJECT

    public:
        // 接收一个动作列表，并设置调色板的方向和父对象。
        WBActionPalette(QList<QAction*> actions, Qt::Orientation orientation = Qt::Vertical, QWidget* parent = 0);
        // 设置调色板的方向和父对象。
        WBActionPalette(Qt::Orientation orientation, QWidget* parent = 0);
        // 设置调色板的角落位置、父对象和方向。
        WBActionPalette(Qt::Corner corner, QWidget* parent = 0, Qt::Orientation orient = Qt::Vertical);
        // 设置父对象。
        WBActionPalette(QWidget* parent = 0);

        virtual ~WBActionPalette();                                                     // 销毁调色板对象。

        void setButtonIconSize(const QSize& size);                                      // 设置按钮的图标大小。
        void setToolButtonStyle(Qt::ToolButtonStyle);                                   // 设置工具按钮样式。

        QList<QAction*> actions();                                                      // 返回当前的动作列表。
        virtual void setActions(QList<QAction*> actions);                               // 设置动作列表。
        void groupActions();                                                            // 将动作分组。
        virtual void addAction(QAction* action);                                        // 添加一个动作。
            
        void setClosable(bool closable);                                                // 设置调色板是否可关闭。
        void setAutoClose(bool autoClose)                                               // 设置是否自动关闭。
        {
            mAutoClose = autoClose;
        }

        void setCustomCloseProcessing(bool customCloseProcessing)                       // 设置是否自定义关闭处理。
        {
            m_customCloseProcessing = customCloseProcessing;
        }
        bool m_customCloseProcessing;                                                    

        virtual int border();                                                           // 返回边框大小。
        virtual void clearLayout();                                                     // 清除布局。
        QSize buttonSize();                                                             // 返回按钮大小。

        virtual WBActionPaletteButton* getButtonFromAction(QAction* action);            // 从动作获取按钮。

    public slots:
        void close();                                                                   // 关闭调色板。

    signals:
        void closed();                                                                  // 关闭信号。     
        void buttonGroupClicked(int id);                                                // 按钮组点击信号。
        void customMouseReleased();                                                     // 自定义鼠标释放信号。

    protected:
        virtual void paintEvent(QPaintEvent *event);                                    // 处理绘制事件。
        virtual void mouseReleaseEvent(QMouseEvent * event);                            // 处理鼠标释放事件。
        virtual void init(Qt::Orientation orientation);                                 // 初始化调色板。

        virtual void updateLayout();                                                    // 更新布局。

        QList<WBActionPaletteButton*> mButtons;                                         // 按钮列表。
        QButtonGroup* mButtonGroup;                                                     // 按钮组。
        QList<QAction*> mActions;                                                       // 动作列表。
        QMap<QAction*, WBActionPaletteButton*> mMapActionToButton;                      // 动作到按钮的映射。

        bool mIsClosable;                                                               // 是否可关闭。
        Qt::ToolButtonStyle mToolButtonStyle;                                           // 工具按钮样式。
        bool mAutoClose;                                                                // 是否自动关闭。
        QSize mButtonSize;                                                              // 按钮大小。
        QPoint mMousePos;                                                               // 鼠标位置。
        WBActionPaletteButton *createPaletteButton(QAction* action, QWidget *parent);   // 创建调色板按钮。

    protected slots:
        void buttonClicked();                                                           // 按钮点击处理。
        void actionChanged();                                                           // 动作变化处理。
};

// WBActionPaletteButton 继承自 QToolButton，表示调色板中的按钮。
class WBActionPaletteButton : public QToolButton
{
    Q_OBJECT

    public:
        WBActionPaletteButton(QAction* action, QWidget * parent = 0);       // 接收一个动作和父对象。
        virtual ~WBActionPaletteButton();                                   // 销毁按钮对象。

    signals:
        void doubleClicked();                                               // 双击信号。

    protected:
        virtual void mouseDoubleClickEvent(QMouseEvent *event);             // 处理鼠标双击事件。
        virtual bool hitButton(const QPoint &pos) const;                    // 判断点击位置是否在按钮范围内。

};

#endif /* WBACTIONPALETTE_H_ */
