#ifndef WBKEYBOARDPALETTE_H
#define WBKEYBOARDPALETTE_H

/*WBKeyboardPalette： 可以作为一个虚拟键盘的界面组件，通过处理各种事件和信号，与应用的其他部分进行交互，实现键盘输入的功能。当用户点击某个键盘按钮时，会触发相应的 `onPress` 和 `onRelease` 方法来处理按键操作。*/

#include "WBActionPalette.h"

#include <QLayout>
#include <QPainter>
#include <QMenu>
#include <QIcon>

#include "frameworks/WBPlatformUtils.h"

class WBKeyButton;
class WBKeyboardButton;

class WBApplication;
class WBMainWindow;

class BTNImages
{
public:
    BTNImages(QString _strHeight, int _width, int _height);

    QString m_strHeight;
    int m_width;
    int m_height;

    QImage m_btnLeftPassive;
    QImage m_btnCenterPassive;
    QImage m_btnRightPassive;
    QImage m_btnLeftActive;
    QImage m_btnCenterActive;
    QImage m_btnRightActive;

private:
    QString m_strLeftPassive;
    QString m_strCenterPassive;
    QString m_strRightPassive;
    QString m_strLeftActive;
    QString m_strCenterActive;
    QString m_strRightActive;

};

class ContentImage
{
public:
    ContentImage(QString strHeight, int m_height, QString strContentPath);

    QString m_strHeight;
    int m_height;

    QImage m_btnContent;

private:
    QString m_strContent;
};
// 这段代码定义了一个名为 WBKeyboardPalette 的类，它继承自 WBActionPalette，并添加了许多自定义的功能和属性，用于实现键盘调色板的功能。
// WBKeyboardPalette 类是一个复杂的键盘调色板实现，继承自 WBActionPalette，并扩展了许多与键盘交互相关的功能和逻辑。
// 它管理键盘状态、按钮大小、语言区域等，通过信号和槽机制与外部交互。
// 此类的设计允许在不同平台上（尤其是 Linux）进行定制和扩展，以支持特定的键盘布局和功能需求。
class WBKeyboardPalette : public WBActionPalette
{
    Q_OBJECT

// WBKeyboardPalette 声明了几个友元类，包括 WBKeyboardButton、WBCapsLockButton、WBShiftButton、WBLocaleButton 和 WBKeyButton，这些类可能与键盘调色板中的按钮和功能相关联。
friend class WBKeyboardButton;
friend class WBCapsLockButton;
friend class WBShiftButton;
friend class WBLocaleButton;
friend class WBKeyButton;

public:
    WBKeyboardPalette(QWidget *parent);
    ~WBKeyboardPalette();

    BTNImages *currBtnImages;                                            // 指向 BTNImages 类型的指针，可能用于管理按钮图像。

    bool isEnabled(){return locales!= NULL;}                            // 检查调色板是否启用的方法，根据 locales 成员变量是否为 NULL 返回布尔值。
    virtual QSize  sizeHint () const;                                   // 虚函数，用于调整调色板的大小。
    virtual void adjustSizeAndPosition(bool pUp = true);                // 虚函数，用于调整调色板的位置。
    QString getKeyButtonSize() const {QString res; res.sprintf("%dx%d", btnWidth, btnHeight); return res;}      // 获取键盘按钮的大小。
    void setKeyButtonSize(const QString& strSize);                      // 设置键盘按钮的大小。

    bool m_isVisible;                                                   // 调色板的可见性。
    QPoint m_pos;                                                       // 调色板的位置。

signals:
    // 移动、语言改变和键盘激活状态改变时发出的信号。
    void moved(const QPoint&);
    void localeChanged(int);
    void keyboardActivated(bool);

private slots:
    // 处理调色板内部逻辑的槽函数
    void syncPosition(const QPoint & pos);
    void syncLocale(int nLocale);
    void keyboardPaletteButtonSizeChanged(QVariant size);
    void onActivated(bool b);
    void onDeactivated();
    void showKeyboard(bool show);
    void hideKeyboard();

protected:
    // 键盘状态（大写锁定、Shift 键状态）、当前语言区域、语言区域总数和区域列表。
    bool capsLock;
    bool shift;
    int nCurrentLocale;
    int nLocalesCount;
    WBKeyboardLocale** locales;

    // 特殊修改器的索引和修改器类型。
    int nSpecialModifierIndex;
    KEYCODE specialModifier;

    // 按钮大小相关的属性。
    QString strSize;
    int btnWidth;
    int btnHeight;

    // 语言弹出框和键盘激活状态。
    bool languagePopupActive;
    bool keyboardActive;

    // 进入、离开、绘制和移动事件处理函数。
    virtual void  enterEvent ( QEvent * event );
    virtual void  leaveEvent ( QEvent * event );
    virtual void  paintEvent(QPaintEvent *event);
    virtual void  moveEvent ( QMoveEvent * event );

    // 发送键盘事件的方法。
    void sendKeyEvent(KEYCODE keyCode);

    // 设置和获取当前语言区域的方法。
    void setLocale(int nLocale);
    const QString* getLocaleName();

    // 初始化调色板的方法。
    void init();

private:
    QRect originalRect;

    WBKeyButton** buttons;
    WBKeyboardButton** ctrlButtons;

    // 可能用于检查调色板布局。
    void checkLayout();

    // 创建控制按钮、设置输入和语言改变时的处理方法。
    void createCtrlButtons();
    void setInput(const WBKeyboardLocale* locale);
    // Can be redefined under each platform
    void onLocaleChanged(WBKeyboardLocale* locale);

    // 平台相关的存储和参数，特别是 Linux 相关的键码参数。
    // Storage for platform-dependent objects (linux)
    void* storage;
    // Linux-related parameters
    int min_keycodes, max_keycodes, byte_per_code;
};

// WBKeyboardButton 类及其子类（WBKeyButton、WBCntrlButton、WBCapsLockButton、WBShiftButton、WBLocaleButton）：这些类继承自 `WBKeyboardButton` ，并分别实现了不同类型键盘按钮的特定行为和绘制方式。
// 这段代码定义了一个名为 WBKeyboardButton 的类，它是一个自定义的键盘按钮部件，继承自 QWidget，用于显示和处理键盘按钮的交互和绘制。
/*这个 WBKeyboardButton 类是一个自定义的键盘按钮部件，它继承自 QWidget，用于在键盘界面中显示按钮，并处理与用户的交互。主要功能包括：
绘制：通过重写 paintEvent 实现按钮的绘制，包括内容图像的绘制。
事件处理：处理鼠标进入、离开、按下、释放等事件，以改变按钮的外观和状态。
虚函数和纯虚函数：定义了用于响应按钮状态变化和绘制内容的虚函数和纯虚函数，需要子类实现具体的行为。
状态管理：通过成员变量 bFocused 和 bPressed 管理按钮的焦点状态和按下状态。
消息发送：提供 sendUnicodeSymbol 和 sendControlSymbol 函数，用于发送键盘事件相关的消息。
这种设计允许开发者根据具体需求创建不同类型的键盘按钮，并定义它们的外观和行为。*/
class WBKeyboardButton : public QWidget
{
    Q_OBJECT

public:
    WBKeyboardButton(WBKeyboardPalette* parent, QString contentImagePath);
    ~WBKeyboardButton();

protected:
    WBKeyboardPalette* m_parent;                                    // 指向父部件的指针。
    ContentImage *imgContent;                                       // 用于存储按钮内容图像的指针。
    QString m_contentImagePath;                                     //存储按钮内容图像路径的字符串。

    void paintEvent(QPaintEvent *event);                            // 重写的绘制事件处理函数，用于绘制按钮的外观。
        
    virtual void  enterEvent ( QEvent * event );                    // 鼠标进入事件。
    virtual void  leaveEvent ( QEvent * event );                    // 鼠标离开事件。
    virtual void  mousePressEvent ( QMouseEvent * event );          // 鼠标按下事件。
    virtual void  mouseReleaseEvent ( QMouseEvent * event );        // 鼠标释放事件。

    // 分别在按钮按下和释放时调用，需要在子类中实现具体逻辑。
    virtual void onPress() = 0;                                     
    virtual void onRelease() = 0;                    

    virtual void paintContent(QPainter& painter) = 0;               // 用于绘制按钮内容的抽象函数，子类必须实现具体的绘制逻辑。       

    virtual bool isPressed();                                       // 返回按钮当前是否被按下，可以在子类中重写以实现特定的按下状态逻辑。

    WBKeyboardPalette* keyboard;                                    // 

    void sendUnicodeSymbol(KEYCODE keycode);                        // 发送给定的键码对应的 Unicode 符号。
    void sendControlSymbol(int nSymbol);                            // 发送给定的控制符号。

private:
    bool bFocused;                                                  // 表示按钮当前是否具有焦点。
    bool bPressed;                                                  // 表示按钮当前是否被按下。
};


class WBKeyButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBKeyButton(WBKeyboardPalette* parent);
    ~WBKeyButton();

    void setKeyBt(const KEYBT* keybt){this->keybt = keybt;}

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

private:
    bool shifted();
    const KEYBT* keybt;
};

class WBCntrlButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBCntrlButton(WBKeyboardPalette* parent, int _code, const QString& _contentImagePath );
    WBCntrlButton(WBKeyboardPalette* parent, const QString& _label, int _code );
    ~WBCntrlButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

private:
    QString label;
    int code;
};

class WBCapsLockButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBCapsLockButton(WBKeyboardPalette* parent, const QString _contentImagePath);
    ~WBCapsLockButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    virtual bool isPressed();
};

class WBShiftButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBShiftButton(WBKeyboardPalette* parent, const QString _contentImagePath);
    ~WBShiftButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    virtual bool isPressed();
};

class WBLocaleButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBLocaleButton(WBKeyboardPalette* parent);
    ~WBLocaleButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    QMenu* localeMenu;
};

#endif // WBKEYBOARDPALETTE_H
