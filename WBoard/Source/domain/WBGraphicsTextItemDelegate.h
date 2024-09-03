#ifndef WBGRAPHICSTEXTITEMDELEGATE_H_
#define WBGRAPHICSTEXTITEMDELEGATE_H_

#include <QtWidgets>

#include <QtSvg>

#include "core/WB.h"
#include "WBGraphicsItemDelegate.h"

class WBGraphicsTextItem;

// 这段代码定义了一个名为 AlignTextButton 的类，它继承自 DelegateButton，主要用于文本对齐按钮的管理。
// 该类提供了对齐方式的设置和切换功能，并根据对齐方式渲染相应的图标。
// AlignTextButton 类用于管理文本对齐按钮，提供了设置和切换对齐方式的功能，并根据对齐方式渲染相应的图标。
// 通过这种方式，可以在用户界面中提供直观的文本对齐操作。
class AlignTextButton : public DelegateButton
{
    // AlignTextButton 类继承自 DelegateButton，表示一个文本对齐按钮。
    Q_OBJECT

public:
    // 是一个常量，定义了对齐方式的最大值（不包括 k_mixed）。
    static const int MAX_KIND = 3;
    // 枚举定义了四种对齐方式：左对齐 (k_left)、居中对齐 (k_center)、右对齐 (k_right) 和混合对齐 (k_mixed)。
    enum kind_t{
        k_left = 0
        , k_center
        , k_right
        , k_mixed
    };

    // 用于初始化按钮，接受一个文件名、被委托对象、父对象和窗口框架部分作为参数。
    AlignTextButton(const QString & fileName, QGraphicsItem* pDelegated, QGraphicsItem * parent = 0, Qt::WindowFrameSection section = Qt::TopLeftSection);
    virtual ~AlignTextButton();

    void setKind(int pKind);                                            // 设置当前的对齐方式。
    int kind() {return mKind;}                                          // 返回当前的对齐方式。

    void setNextKind();                                                 // 切换到下一个对齐方式。
    int nextKind() const;                                               // 返回下一个对齐方式。

    void setMixedButtonVisible(bool v = true) {mHideMixed = !v;}        // 设置混合按钮的可见性。
    bool isMixedButtonVisible() {return !mHideMixed;}                   // 返回混合按钮是否可见。

private:
    // 根据对齐方式返回相应的 QSvgRenderer 对象。
    QSvgRenderer *rndFromKind(int pknd)
    {
        switch (pknd) {
        case k_left:
            return lft;
            break;
        case k_center:
            return cntr;
            break;
        case k_right:
            return rght;
            break;
        case k_mixed:
            return mxd;
            break;
        }

        return 0;
    }

    // 返回当前对齐方式的 QSvgRenderer 对象。
    QSvgRenderer *curRnd() {return rndFromKind(mKind);}

    // lft、cntr、rght 和 mxd 是 QSvgRenderer 的指针，用于渲染不同对齐方式的图标。
    QPointer<QSvgRenderer> lft;
    QPointer<QSvgRenderer> cntr;
    QPointer<QSvgRenderer> rght;
    QPointer<QSvgRenderer> mxd;

    // 存储当前的对齐方式。
    int mKind;
    // 表示混合按钮是否隐藏。
    bool mHideMixed;
};

// WBGraphicsTextItemDelegate 类继承自 WBGraphicsItemDelegate，主要为 WBGraphicsTextItem 提供额外的文本编辑功能和用户交互控制。
// 它通过委托模式处理文本项的编辑、缩放、对齐、颜色更改等操作。
// WBGraphicsTextItemDelegate 类通过委托模式扩展了 WBGraphicsItemDelegate 的功能，专门处理 WBGraphicsTextItem 的文本编辑和用户交互逻辑。
// 它提供了丰富的接口和事件处理方法，使得文本项的编辑功能更加灵活和强大。
// 通过这种方式，可以更好地分离核心逻辑和用户界面逻辑，提高代码的可维护性和可扩展性。

/*WBGraphicsTextItemDelegate: 是 `WBGraphicsItemDelegate` 的派生类，专门用于处理 `WBGraphicsTextItem` 的委托操作。
`WBGraphicsTextItem` 提供了更具体和定制化的委托操作，包括与文本编辑相关的各种功能和交互处理。
1.提供了判断文本是否可编辑、缩放文本大小、重新着色等方法。
2.重写了 `itemChange` 方法以处理图形项的变化。实现了创建控件、处理槽函数（如内容改变、设置可编辑性、移除等）。
3.保护方法用于装饰菜单、更新菜单动作状态、释放按钮以及处理鼠标和键盘事件。>3.私有方法和成员变量用于处理字体选择、颜色
选择、文本大小调整、对齐按钮状态更新、处理选择数据、创建默认字体等操作。*/
class WBGraphicsTextItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

    enum textChangeMode
    {
        changeSize = 0,
        scaleSize
    };

    public:
        // 构造函数初始化 WBGraphicsTextItemDelegate，将 WBGraphicsTextItem 作为委托对象。
        WBGraphicsTextItemDelegate(WBGraphicsTextItem* pDelegated, QObject * parent = 0);
        virtual ~WBGraphicsTextItemDelegate();

        bool isEditable();                                                                                  // 检查文本项是否可编辑。
        void scaleTextSize(qreal multiplyer);                                                               // 按比例缩放文本大小。
        void recolor();                                                                                     // 更改文本颜色。
        virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value);       // 处理图形项的变化。
        virtual void createControls();                                                                      // 创建控制按钮。
        qreal titleBarWidth();                                                                              // 获取标题栏宽度。

    public slots:
        void contentsChanged();                                                                             // 响应文本内容变化。
        virtual void setEditable(bool);                                                                     // 设置文本项是否可编辑。
        virtual void remove(bool canUndo);                                                                  // 移除文本项。

    protected:
        virtual void decorateMenu(QMenu *menu);                                                             // 装饰上下文菜单。
        virtual void updateMenuActionState();                                                               // 更新菜单项状态。

        virtual void freeButtons();                                                                         // 释放按钮资源。

        // 处理鼠标事件。
        virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);          
        virtual bool mouseMoveEvent(QGraphicsSceneMouseEvent *event);           
        virtual bool mouseReleaseEvent(QGraphicsSceneMouseEvent *event);        

        // 处理键盘事件
        virtual bool keyPressEvent(QKeyEvent *event);                           
        virtual bool keyReleaseEvent(QKeyEvent *event);                         

    private:
        // 定义了多个私有成员变量，用于存储按钮、字体大小、选择数据等。
        WBGraphicsTextItem* delegated();           

        DelegateButton* mFontButton;               
        DelegateButton* mColorButton;              
        DelegateButton* mDecreaseSizeButton;       
        DelegateButton* mIncreaseSizeButton;       
        DelegateButton* mAlignButton;              

        int mLastFontPixelSize;

        static const int sMinPixelSize;
        static const int sMinPointSize;

    private:
        void customize(QFontDialog &fontDialog);                            // 自定义字体对话框。
        void ChangeTextSize(qreal factor, textChangeMode changeMode);       // 更改文本大小。
        void updateAlighButtonState();                                      // 更新对齐按钮状态。
        bool oneBlockSelection();                                           // 检查是否单块选择。
        void saveTextCursorFormats();                                       // 保存文本光标格式。
        void restoreTextCursorFormats();                                    // 恢复文本光标格式。
        QFont createDefaultFont();                                          // 创建默认字体。

        QAction *mEditableAction;
        struct selectionData_t {
            selectionData_t()
                : mButtonIsPressed(false)
            {}
            bool mButtonIsPressed;
            int position;
            int anchor;
            QString html;
            QTextDocumentFragment selection;
            QList<QTextBlockFormat> fmts;

        } mSelectionData;

    private slots:
        void pickFont();                                                    // 选择字体。
        void pickColor();                                                   // 选择颜色。

        void decreaseSize();                                                // 减小字体大小。
        void increaseSize();                                                // 增大字体大小。

        void alignButtonProcess();                                          // 处理对齐按钮。
        void onCursorPositionChanged(const QTextCursor& cursor);            // 光标位置变化时的处理。
        void onModificationChanged(bool ch);                                // 修改状态变化时的处理。
        void onContentChanged();                                            // 内容变化时的处理。

	private:
      const int delta;
};

#endif /* WBGRAPHICSTEXTITEMDELEGATE_H_ */
