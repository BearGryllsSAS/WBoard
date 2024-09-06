#ifndef WBSQUEEZELABEL_H
#define WBSQUEEZELABEL_H

#include <QLabel>

class WBSqueezeLabel : public QLabel
{
    Q_OBJECT;

public:
    WBSqueezeLabel(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

};

#endif // WBSQUEEZELABEL_H

/*

这段代码定义了一个自定义的 `QLabel` 类，`WBSqueezeLabel`，并且包括了必要的头文件和基本的类声明。以下是对每个部分的详细分析：

### 头文件保护

```cpp
#ifndef WBSQUEEZELABEL_H
#define WBSQUEEZELABEL_H
```
- 这部分是头文件保护的宏，防止头文件被多次包含。`#endif` 标记了保护的结束。

### 类声明

```cpp
#include <QLabel>

class WBSqueezeLabel : public QLabel
{
    Q_OBJECT;
```
- `#include <QLabel>`: 引入了 Qt 的 `QLabel` 类，这样 `WBSqueezeLabel` 可以继承其功能。
- `class WBSqueezeLabel : public QLabel`: 声明了一个名为 `WBSqueezeLabel` 的类，它继承自 `QLabel`。这个类将扩展 `QLabel` 的功能。

### 构造函数

```cpp
public:
    WBSqueezeLabel(QWidget *parent = 0);
```
- `WBSqueezeLabel(QWidget *parent = 0)`: 这是构造函数，创建 `WBSqueezeLabel` 实例。参数 `parent` 是一个可选的父部件指针，用于设置部件的父子关系。默认为 `0`，表示没有父部件。

### 受保护的方法

```cpp
protected:
    void paintEvent(QPaintEvent *event);
```
- `void paintEvent(QPaintEvent *event)`: 这是一个受保护的方法，用于重写 `QLabel` 的 `paintEvent` 函数。这个方法在 `WBSqueezeLabel` 需要被绘制时调用。通过重写这个方法，`WBSqueezeLabel` 可以自定义其绘制行为，例如更改显示的文本、图形或样式。

### 头文件结束

```cpp
#endif // WBSQUEEZELABEL_H
```
- 这是头文件保护的结束部分。

### 总结

- `WBSqueezeLabel` 类继承自 `QLabel`，它的主要功能是自定义标签的绘制方式。
- 构造函数允许设置父部件，并且通过 `paintEvent` 方法可以自定义绘制标签的内容和样式。

*/