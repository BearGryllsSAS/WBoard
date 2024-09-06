#ifndef WBMODELMENU_H
#define WBMODELMENU_H

#include <QtWidgets>
#include <QMenu>

class WBModelMenu : public QMenu
{
    Q_OBJECT

public:
    WBModelMenu(QWidget *parent = 0);

    void setModel(QAbstractItemModel *model);
    QAbstractItemModel *model() const;

    void setMaxRows(int max);
    int maxRows() const;

    void setFirstSeparator(int offset);
    int firstSeparator() const;

    void setRootIndex(const QModelIndex &index);
    QModelIndex rootIndex() const;

    void setHoverRole(int role);
    int hoverRole() const;

    void setSeparatorRole(int role);
    int separatorRole() const;

    QAction *makeAction(const QIcon &icon, const QString &text, QObject *parent);

protected:
    virtual bool prePopulated();
    virtual void postPopulated();
    void createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0);

signals:
	void activated(const QModelIndex &index);
	void hovered(const QString &text);

private slots:
    void aboutToShow();
    void triggered(QAction *action);
    void hovered(QAction *action);

private:
    QAction *makeAction(const QModelIndex &index);
    int m_maxRows;
    int m_firstSeparator;
    int m_maxWidth;
    int m_hoverRole;
    int m_separatorRole;
    QAbstractItemModel *m_model;
    QPersistentModelIndex m_root;
};

#endif // WBMODELMENU_H

/*

这段代码定义了一个 `WBModelMenu` 类，继承自 `QMenu`，用于创建一个自定义的上下文菜单，能够基于模型数据动态生成菜单项。下面是对每个成员和方法的详细分析：

### `WBModelMenu` 类

#### 构造函数

```cpp
WBModelMenu(QWidget *parent = 0);
```
- **`WBModelMenu(QWidget *parent = 0)`**: 构造函数，用于创建 `WBModelMenu` 实例，接收一个可选的父部件指针 `parent`。`QMenu` 的父部件通常用于管理生命周期和显示位置。

#### 公共方法

```cpp
void setModel(QAbstractItemModel *model);
QAbstractItemModel *model() const;
```
- **`setModel(QAbstractItemModel *model)`**: 设置与菜单关联的数据模型。这模型用于提供菜单项的数据。
- **`model() const`**: 获取当前设置的数据模型。

```cpp
void setMaxRows(int max);
int maxRows() const;
```
- **`setMaxRows(int max)`**: 设置菜单中最大允许显示的行数。如果菜单项多于此值，可能需要进行分页或其它处理。
- **`maxRows() const`**: 获取允许显示的最大行数。

```cpp
void setFirstSeparator(int offset);
int firstSeparator() const;
```
- **`setFirstSeparator(int offset)`**: 设置菜单中第一个分隔符的偏移量，即在多少项之后插入分隔符。
- **`firstSeparator() const`**: 获取第一个分隔符的偏移量。

```cpp
void setRootIndex(const QModelIndex &index);
QModelIndex rootIndex() const;
```
- **`setRootIndex(const QModelIndex &index)`**: 设置模型的根索引，用于确定从模型的哪个位置开始创建菜单项。
- **`rootIndex() const`**: 获取当前的根索引。

```cpp
void setHoverRole(int role);
int hoverRole() const;
```
- **`setHoverRole(int role)`**: 设置用于菜单项悬停的角色，可能用于决定悬停时显示的内容或样式。
- **`hoverRole() const`**: 获取当前的悬停角色。

```cpp
void setSeparatorRole(int role);
int separatorRole() const;
```
- **`setSeparatorRole(int role)`**: 设置分隔符的角色，可能用于确定菜单中插入分隔符的条件。
- **`separatorRole() const`**: 获取当前的分隔符角色。

```cpp
QAction *makeAction(const QIcon &icon, const QString &text, QObject *parent);
```
- **`makeAction(const QIcon &icon, const QString &text, QObject *parent)`**: 创建并返回一个新的 `QAction` 对象，带有图标和文本。这通常用于生成菜单项。

#### 受保护的方法

```cpp
virtual bool prePopulated();
virtual void postPopulated();
```
- **`prePopulated()`**: 在菜单项被填充之前调用的虚函数，可以重载以实现自定义的初始化逻辑。
- **`postPopulated()`**: 在菜单项被填充之后调用的虚函数，可以重载以进行后续处理。

```cpp
void createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0);
```
- **`createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0)`**: 递归地创建菜单项，从 `parent` 索引开始，最多创建 `max` 行。`parentMenu` 和 `menu` 参数用于嵌套菜单的创建。

#### 信号

```cpp
void activated(const QModelIndex &index);
void hovered(const QString &text);
```
- **`activated(const QModelIndex &index)`**: 当菜单项被激活时发出，携带被激活项的模型索引。
- **`hovered(const QString &text)`**: 当菜单项被悬停时发出，携带悬停项的文本。

#### 私有槽函数

```cpp
void aboutToShow();
void triggered(QAction *action);
void hovered(QAction *action);
```
- **`aboutToShow()`**: 菜单即将显示时调用的槽函数，可能用于在菜单显示前进行一些准备。
- **`triggered(QAction *action)`**: 当菜单项被触发（点击）时调用的槽函数，处理点击事件。
- **`hovered(QAction *action)`**: 当菜单项被悬停时调用的槽函数，处理悬停事件。

#### 私有方法

```cpp
QAction *makeAction(const QModelIndex &index);
```
- **`makeAction(const QModelIndex &index)`**: 创建与模型项关联的 `QAction`，可能用于生成带有模型数据的菜单项。

#### 私有成员变量

- **`int m_maxRows`**: 最大行数。
- **`int m_firstSeparator`**: 第一个分隔符的偏移量。
- **`int m_maxWidth`**: 最大宽度（未在代码中使用）。
- **`int m_hoverRole`**: 悬停角色。
- **`int m_separatorRole`**: 分隔符角色。
- **`QAbstractItemModel *m_model`**: 关联的数据模型。
- **`QPersistentModelIndex m_root`**: 根索引，用于生成菜单的起始点。

### 总结

`WBModelMenu` 主要用于从数据模型中动态生成菜单项，并允许自定义菜单的外观和行为。
它支持设置模型、行数、分隔符、根索引和角色等属性，并提供了菜单项生成和事件处理的机制。

*/