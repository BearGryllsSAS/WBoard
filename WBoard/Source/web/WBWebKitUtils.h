#ifndef WBWEBKITUTILS_H_
#define WBWEBKITUTILS_H_

#include <QtWebEngine>
#include <QWebEnginePage>

class WBWebKitUtils
{
    public:
        WBWebKitUtils();
        virtual ~WBWebKitUtils();

        class HtmlObject
        {
            public:
                HtmlObject(const QString& pSource, int pWidth, int pHeight)
                    : source(pSource)
                    , width(pWidth)
                    , height(pHeight)
                {
         
                }

                QString source;
                int width;
                int height;

        };

        static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame);

};

#endif /* WBWEBKITUTILS_H_ */

/*

这段代码定义了一个名为 `WBWebKitUtils` 的工具类，其中包含一个内部类 `HtmlObject` 和一个静态成员函数 `objectsInFrame`。下面是对每个部分的详细分析：

### 头文件保护宏

```cpp
#ifndef WBWEBKITUTILS_H_
#define WBWEBKITUTILS_H_
```

- **`#ifndef WBWEBKITUTILS_H_`** 和 **`#define WBWEBKITUTILS_H_`**:
  - 这两行宏定义用于防止头文件的多重包含。`#ifndef` 检查 `WBWEBKITUTILS_H_` 是否已被定义，如果没有定义，则定义它，并且包含头文件内容。这样可以确保在一个编译单元中只包含一次该头文件。

### 头文件包含

```cpp
#include <QtWebEngine>
#include <QWebEnginePage>
```

- **`#include <QtWebEngine>`**:
  - 包含 Qt WebEngine 模块的头文件。这是处理网页内容的 Qt 模块。

- **`#include <QWebEnginePage>`**:
  - 包含 `QWebEnginePage` 类的头文件，这是 Qt WebEngine 中用于表示网页的类。

### `WBWebKitUtils` 类

```cpp
class WBWebKitUtils
{
    public:
        WBWebKitUtils();
        virtual ~WBWebKitUtils();

        // 内部类定义
        class HtmlObject
        {
            public:
                HtmlObject(const QString& pSource, int pWidth, int pHeight);

                QString source;
                int width;
                int height;
        };

        static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame);
};
```

#### 构造函数和析构函数

```cpp
WBWebKitUtils();
virtual ~WBWebKitUtils();
```

- **`WBWebKitUtils()`**:
  - 默认构造函数，用于创建 `WBWebKitUtils` 类的实例。此函数没有具体实现，但通常用于初始化类的状态。

- **`virtual ~WBWebKitUtils()`**:
  - 虚析构函数，用于销毁 `WBWebKitUtils` 类的实例。标记为 `virtual` 是为了确保派生类能够正确地调用其析构函数，防止资源泄漏。

#### 内部类 `HtmlObject`

```cpp
class HtmlObject
{
    public:
        HtmlObject(const QString& pSource, int pWidth, int pHeight);

        QString source;
        int width;
        int height;
};
```

- **构造函数 `HtmlObject(const QString& pSource, int pWidth, int pHeight)`**:
  - 用于初始化 `HtmlObject` 实例的构造函数。它接受三个参数：`pSource`（HTML 源代码）、`pWidth`（宽度）和 `pHeight`（高度），并将这些参数赋值给相应的成员变量。

- **数据成员**:
  - **`QString source`**: 存储 HTML 内容的源代码。
  - **`int width`**: 存储 HTML 对象的宽度。
  - **`int height`**: 存储 HTML 对象的高度。

#### 静态成员函数 `objectsInFrame`

```cpp
static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame);
```

- **`static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame)`**:
  - 这是一个静态方法，用于从 `QWebEnginePage` 实例中提取 HTML 对象列表。
  - **参数**: `QWebEnginePage* frame` 是一个指向 `QWebEnginePage` 的指针，表示要从中提取信息的网页页面。
  - **返回值**: `QList<WBWebKitUtils::HtmlObject>`，包含了从网页页面提取的所有 HTML 对象及其属性（源代码、宽度和高度）。

### 总结

- **`WBWebKitUtils`** 类是一个工具类，主要用于处理与 `QWebEnginePage` 相关的操作。
- **`HtmlObject`** 是一个内部类，用于封装 HTML 内容及其显示尺寸。
- **`objectsInFrame`** 静态方法提取并返回网页页面中的所有 HTML 对象的列表。

通过这种方式，`WBWebKitUtils` 提供了一个工具方法，可以方便地从 `QWebEnginePage` 中获取有关 HTML 对象的信息，这在处理或分析网页内容时非常有用。

*/
