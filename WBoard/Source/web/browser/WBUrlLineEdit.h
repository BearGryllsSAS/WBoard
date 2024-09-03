#ifndef WBURLLINEEDIT_H
#define WBURLLINEEDIT_H

// 这段代码定义了两个自定义的小部件类 WBExLineEdit 和 WBUrlLineEdit，它们都继承自 QWidget，并且利用了 Qt 的一些基础组件和事件处理机制来实现自定义的功能和交互。
// 这段代码实现了两个自定义的小部件类，WBExLineEdit 和 WBUrlLineEdit，它们用于增强 QLineEdit 的功能，包括添加左侧的自定义部件、处理特定事件（如焦点事件、键盘事件等），
// 以及与其他自定义部件（如清除按钮、网页视图）的交互。这种设计通过继承和事件处理机制，扩展了 Qt 框架原生控件的功能，使得在实际应用中可以更灵活地定制用户界面和交互行为。

#include <QtWidgets>
#include <QWidget>
#include <QLineEdit>
#include <QStyleOption>

#include "WBWebView.h"

class WBClearButton;

// WBExLineEdit：继承自 QWidget 实现了一个自定义的编辑控件。
// 包含了一些方法来管理左右的部件、处理各种事件（如焦点事件、键盘事件、绘制事件等），提供了方法来更新部件的几何形状和初始化样式选项。
class WBExLineEdit : public QWidget
{
    Q_OBJECT;

public:
    WBExLineEdit(QWidget *parent = 0);                                  // 构造函数，可以传入父部件，初始化了 mLeftWidget、mLineEdit 和 mClearButton。

    inline QLineEdit *lineEdit() const { return mLineEdit; }            // 返回 mLineEdit 对象，允许外部访问和操作输入框。

    void setLeftWidget(QWidget *widget);                                // 设置左侧的自定义部件。
    QWidget *leftWidget() const;                                        // 获取左侧的自定义部件。

    QSize sizeHint() const;                                             // 返回小部件的推荐大小。
        
    QVariant inputMethodQuery(Qt::InputMethodQuery property) const;      

    void setVisible(bool pVisible);                                     // 设置部件的可见性。

protected:
    // 用于处理小部件的各种事件，例如焦点变化、键盘事件、绘制事件等。
    void focusInEvent(QFocusEvent *event);
    void focusOutEvent(QFocusEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
    void inputMethodEvent(QInputMethodEvent *e);
    bool event(QEvent *event);

protected:
    // 更新部件的几何属性和初始化样式选项。
    void updateGeometries();
    void initStyleOption(QStyleOptionFrameV2 *option) const;

    QWidget*        mLeftWidget;                                        // 左侧的自定义部件，可以通过 setLeftWidget 设置。
    QLineEdit*      mLineEdit;                                          // 内部使用的 QLineEdit 控件，可以通过 lineEdit() 返回。
    WBClearButton*    mClearButton;                                     // 一个自定义的清除按钮，类型为 WBClearButton。
};


class WBWebView;

// WBUrlLineEdit：继承自 `WBExLineEdit` 。
// 可以设置关联的 `WBWebView` ，并在焦点失去事件和`WebView` 的URL变化时进行相应处理。专门用于处理与 URL 相关的输入和与 `WBWebView` 的交互。
class WBUrlLineEdit : public WBExLineEdit
{
    Q_OBJECT;

public:
    WBUrlLineEdit(QWidget *parent = 0);             // 构造函数，初始化基类 WBExLineEdit。
    void setWebView(WBWebView *webView);            // 设置关联的 WBWebView 对象，用于在输入网址后加载对应的页面。

protected:

    void focusOutEvent(QFocusEvent *event);         // 重写基类的方法，处理小部件失去焦点的事件。

private slots:
    void webViewUrlChanged(const QUrl &url);        // 当关联的 WBWebView 的 URL 发生变化时调用，可能用于更新输入框的显示内容。

private:
    WBWebView *mWebView;                            // 指向 WBWebView 对象的指针，用于在输入网址后加载相应的页面。
};

#endif // WBURLLINEEDIT_H

