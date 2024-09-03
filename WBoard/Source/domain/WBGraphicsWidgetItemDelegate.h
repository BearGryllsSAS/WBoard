#ifndef WBGRAPHICSWIDGETITEMDELEGATE_H_
#define WBGRAPHICSWIDGETITEMDELEGATE_H_

/*WBGraphicsWidgetItemDelegate: 是 `WBGraphicsItemDelegate` 的派生类，专门用于处理 `WBGraphicsWidgetItem` 的委托
操作,`WBGraphicsWidgetItem` 提供了特定的委托操作，包括菜单装饰、操作状态更新、移除处理以及特定的操作响应。
1.`decorateMenu`：用于为相关菜单添加特定于小部件的操作选项。
2. `updateMenuActionState`：用于更新菜单中操作的状态（例如是否可用、是否选中等）。
3.`remove`：处理小部件的移除操作，可能考虑是否支持撤销。*/

#include <QtWidgets>

#include "WBGraphicsItemDelegate.h"
#include "WBGraphicsWidgetItem.h"

// 这段代码定义了一个名为 WBGraphicsWidgetItemDelegate 的类，它继承自 WBGraphicsItemDelegate。
// 这个类是为 WBGraphicsWidgetItem 对象提供委托功能的，添加了一些特定于 WBGraphicsWidgetItem 的操作和菜单装饰。
class WBGraphicsWidgetItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

    public:
        // 用于初始化对象，其中 pDelegated 是被委托的 WBGraphicsWidgetItem 对象，widgetType 是一个整数参数，用于指示小部件的类型，默认值为0。
        WBGraphicsWidgetItemDelegate(WBGraphicsWidgetItem* pDelegated, int widgetType = 0);
        virtual ~WBGraphicsWidgetItemDelegate();

    protected:
        virtual void decorateMenu(QMenu* menu);     // 重载函数，用于装饰上下文菜单，添加特定于 WBGraphicsWidgetItem 的菜单项。
        virtual void updateMenuActionState();       // 重载函数，用于更新菜单项的状态。
        virtual void remove(bool canundo);          // 重载函数，用于移除委托对象，可能包括一些特定的行为。

    private slots:
        void freeze(bool frozeon);                  // 用于冻结或解冻委托对象。
        void pin();                                 // 用于固定委托对象。

    private:
        int mWidgetType;                            // 存储小部件的类型。

        WBGraphicsWidgetItem* delegated();          // 返回被委托的 WBGraphicsWidgetItem 对象。

        // 分别用于冻结和设置工具操作。
        QAction* freezeAction;
        QAction* setAsToolAction;
};

#endif /* WBGRAPHICSWIDGETITEMDELEGATE_H_ */

/*这种委托的编程方法在面向对象编程中称为**"委托设计模式"**（Delegation Pattern）。在Qt框架中，这种方法通常用于分离对象的核心功能和用户界面操作，使代码更模块化和可维护。

### 委托设计模式的定义
委托设计模式是一种将对象的某些职责委托给另一个帮助对象来处理的设计模式。委托对象通过管理和控制被委托对象来实现这些职责。

### 使用委托设计模式的原因和好处

1. **分离关注点（Separation of Concerns）**:
   - 委托模式将业务逻辑和用户界面逻辑分离开来。核心对象（如 `WBGraphicsWidgetItem`）处理业务逻辑，而委托对象（如 `WBGraphicsWidgetItemDelegate`）处理与用户交互相关的功能。这样可以更清晰地组织代码。

2. **提高代码的可维护性和可读性（Maintainability and Readability）**:
   - 通过将不同的功能模块化，可以更容易地阅读和维护代码。每个类都有明确的职责，这使得代码更易于理解和修改。

3. **重用性（Reusability）**:
   - 委托模式允许在不同的上下文中重用相同的委托对象。例如，可以为不同类型的图形项创建不同的委托，而不需要修改核心对象的代码。

4. **灵活性（Flexibility）**:
   - 委托模式允许在运行时改变对象的行为。可以根据需要动态地替换或修改委托对象，而不需要改变被委托对象的实现。

5. **简化对象接口（Simplify Object Interface）**:
   - 被委托对象的接口可以保持简洁，专注于其核心功能，而将复杂的用户交互逻辑交给委托对象处理。

### 委托设计模式在Qt中的应用
在Qt框架中，委托设计模式广泛应用于以下场景：

1. **视图和模型（View and Model）**:
   - Qt的MVC（Model-View-Controller）架构中，视图和模型之间通常使用委托来管理数据的呈现和交互。

2. **自定义控件和绘制（Custom Widgets and Painting）**:
   - 自定义控件和绘制逻辑通常会使用委托模式，以便在不同的情景下复用绘制和交互逻辑。

3. **事件处理（Event Handling）**:
   - 使用委托对象处理复杂的事件逻辑，使得核心对象的事件处理接口保持简洁。

### 代码示例中的应用
在 `WBGraphicsWidgetItemDelegate` 类中，委托设计模式用于为 `WBGraphicsWidgetItem` 对象提供特定的功能和菜单装饰。委托对象负责处理以下任务：

- **创建和管理上下文菜单（Context Menu）**:
  - `decorateMenu` 和 `updateMenuActionState` 方法负责装饰上下文菜单和更新菜单项的状态。
- **处理特定操作（Specific Operations）**:
  - `freeze` 和 `pin` 槽函数处理冻结和固定操作。
- **管理用户交互（User Interaction）**:
  - `mousePressEvent`、`mouseMoveEvent` 等方法处理用户的鼠标和键盘交互。

通过这种方式，可以将与用户交互相关的逻辑与核心业务逻辑分离，使代码更易于维护和扩展。*/
