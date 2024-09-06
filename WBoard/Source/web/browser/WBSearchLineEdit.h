#ifndef WBSEARCHLINEEDIT_H
#define WBSEARCHLINEEDIT_H

#include "WBUrlLineEdit.h"

#include <QtWidgets>
#include <QAbstractButton>

class WBSearchButton;

class WBClearButton : public QAbstractButton
{
    Q_OBJECT;

    public:
        WBClearButton(QWidget *parent = 0);
        void paintEvent(QPaintEvent *event);

    public slots:
        void textChanged(const QString &text);
};

class WBSearchLineEdit : public WBExLineEdit
{
    Q_OBJECT;
    Q_PROPERTY(QString inactiveText READ inactiveText WRITE setInactiveText)

public:
    WBSearchLineEdit(QWidget *parent = 0);

    QString inactiveText() const;
    void setInactiveText(const QString &text);

    QMenu *menu() const;
    void setMenu(QMenu *menu);

    void setVisible(bool pVisible);

protected:
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);
signals:
	void textChanged(const QString &text);

private:
    void updateGeometries();

    WBSearchButton *mSearchButton;
    QString mInactiveText;
};

#endif // WBSEARCHLINEEDIT_H

/*

这段代码定义了两个类 `WBClearButton` 和 `WBSearchLineEdit`，并提供了它们的功能和接口的详细说明。下面是对每个类及其成员函数的详细分析：

### `WBClearButton` 类

`WBClearButton` 继承自 `QAbstractButton`，用于创建一个自定义的清除按钮。

#### 构造函数

```cpp
WBClearButton(QWidget *parent = 0);
```
- **`WBClearButton(QWidget *parent = 0)`**: 构造函数，创建 `WBClearButton` 实例，接受一个可选的父部件指针 `parent`，用于父子关系的管理。

#### 公共槽函数

```cpp
void textChanged(const QString &text);
```
- **`textChanged(const QString &text)`**: 槽函数，用于响应文本变化，可能会根据文本的变化来更新按钮的状态或外观。

#### 受保护的方法

```cpp
void paintEvent(QPaintEvent *event);
```
- **`paintEvent(QPaintEvent *event)`**: 重写的绘制事件函数，用于自定义绘制按钮的外观。这函数在按钮需要被重新绘制时调用，例如在按钮被显示、更新或用户交互时。

### `WBSearchLineEdit` 类

`WBSearchLineEdit` 继承自 `WBExLineEdit`，是一个带有搜索功能的文本编辑框。它可能包含搜索按钮、清除按钮和菜单功能。

#### 构造函数

```cpp
WBSearchLineEdit(QWidget *parent = 0);
```
- **`WBSearchLineEdit(QWidget *parent = 0)`**: 构造函数，创建 `WBSearchLineEdit` 实例，接受一个可选的父部件指针 `parent`，用于管理部件的显示和生命周期。

#### 属性

```cpp
QString inactiveText() const;
void setInactiveText(const QString &text);
```
- **`inactiveText() const`**: 获取当前的非活动文本，即在文本框为空或不聚焦时显示的提示文本。
- **`setInactiveText(const QString &text)`**: 设置非活动文本，用于在文本框不聚焦或为空时显示的提示文本。

#### 菜单功能

```cpp
QMenu *menu() const;
void setMenu(QMenu *menu);
```
- **`menu() const`**: 获取当前与 `WBSearchLineEdit` 关联的菜单。
- **`setMenu(QMenu *menu)`**: 设置 `WBSearchLineEdit` 关联的菜单，用于显示附加的菜单选项。

#### 显示状态

```cpp
void setVisible(bool pVisible);
```
- **`setVisible(bool pVisible)`**: 设置 `WBSearchLineEdit` 的可见性。如果 `pVisible` 为 `true`，则显示文本框；否则隐藏。

#### 受保护的方法

```cpp
void resizeEvent(QResizeEvent *event);
void paintEvent(QPaintEvent *event);
```
- **`resizeEvent(QResizeEvent *event)`**: 重写的大小调整事件函数，在 `WBSearchLineEdit` 的大小发生变化时被调用，用于调整部件的布局或尺寸。
- **`paintEvent(QPaintEvent *event)`**: 重写的绘制事件函数，用于自定义绘制 `WBSearchLineEdit` 的外观。这函数在部件需要重新绘制时调用。

#### 信号

```cpp
void textChanged(const QString &text);
```
- **`textChanged(const QString &text)`**: 信号，当文本框中的文本发生变化时发出，携带新的文本内容。

#### 私有方法

```cpp
void updateGeometries();
```
- **`updateGeometries()`**: 更新部件的几何属性，例如布局或尺寸，以确保组件的正确显示和行为。

#### 私有成员变量

```cpp
WBSearchButton *mSearchButton;
QString mInactiveText;
```
- **`WBSearchButton *mSearchButton`**: 指向 `WBSearchButton` 的指针，可能用于显示搜索按钮或处理搜索操作。
- **`QString mInactiveText`**: 存储非活动文本，即在文本框为空时显示的提示文本。

### 总结

- **`WBClearButton`** 类用于创建一个自定义的清除按钮，能够根据文本变化更新按钮的状态，并且可以自定义按钮的绘制方式。
- **`WBSearchLineEdit`** 类是一个自定义的文本编辑框，具有搜索功能，支持设置非活动文本、菜单功能、可见性控制，并能够响应大小调整和绘制事件。
它还发出文本变化信号，并在需要时更新几何属性。

*/