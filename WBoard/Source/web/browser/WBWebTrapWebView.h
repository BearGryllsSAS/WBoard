#ifndef WBWEBTRAPWEBVIEW_H_
#define WBWEBTRAPWEBVIEW_H_

#include <QtWidgets>
#include <QtWebEngine>
#include <QWebEngineView>


class WBWebTrapWebView : public QWebEngineView
{
    Q_OBJECT;

public:
    WBWebTrapWebView(QWidget* parent = 0);
    virtual ~WBWebTrapWebView();

    void setIsTrapping(bool pIsTrapping);

    bool isTrapping()
    {
        return mIsTrapping;
    }

    void highliteElementAtPos(const QPoint& pos);
    void trapElementAtPos(const QPoint& pos);

signals:
    void pixmapCaptured(const QPixmap& pixmap, bool pageMode);
    void objectCaptured(const QUrl& pUrl, const QString& pMimeType, int pWidth, int pHeight);
    void embedCodeCaptured(const QString& embedCode);

    void webElementCaptured(const QUrl& pUrl, const QString& query);

private slots:
	void viewLoadFinished(bool ok);

protected:
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseMoveEvent ( QMouseEvent * event );
    virtual void mouseReleaseEvent ( QMouseEvent * event );
    virtual void hideEvent ( QHideEvent * event );

    virtual void paintEvent ( QPaintEvent * event );

    QString potentialEmbedCodeAtPos(const QPoint& pos);

    enum WebContentType
    {
        Unknown = 0, Image, Input, ObjectOrEmbed, ElementByQuery
    };

private:
    QRect mDomElementRect;
    QRect mWebViewElementRect;
    QString mElementQuery;
    WebContentType mCurrentContentType;

    bool mIsTrapping;

    QWidget* mTrapingWidget;

};

class UBWebTrapMouseEventMask : public QWidget
{
    public:
        UBWebTrapMouseEventMask(WBWebTrapWebView* pWebView);
        virtual ~UBWebTrapMouseEventMask();

    protected:
        virtual void mousePressEvent(QMouseEvent* event);
        virtual void mouseMoveEvent ( QMouseEvent * event );
        virtual void mouseReleaseEvent ( QMouseEvent * event );
        virtual void paintEvent(QPaintEvent *);

   private:
       WBWebTrapWebView *mTrappedWebView;
};

#endif /* WBWEBTRAPWEBVIEW_H_ */

/*

这段代码定义了两个类：`WBWebTrapWebView` 和 `UBWebTrapMouseEventMask`。下面是对每个类及其成员的详细分析：

### `WBWebTrapWebView` 类

继承自 `QWebEngineView`，用于处理网页视图的操作，尤其是网页元素的捕获和高亮。

#### 公共构造函数和析构函数

```cpp
WBWebTrapWebView(QWidget* parent = 0);
virtual ~WBWebTrapWebView();
```
- **构造函数**：创建一个 `WBWebTrapWebView` 实例，可选地指定父部件。
- **析构函数**：清理 `WBWebTrapWebView` 实例的资源。

#### 公共方法

```cpp
void setIsTrapping(bool pIsTrapping);
bool isTrapping();
void highliteElementAtPos(const QPoint& pos);
void trapElementAtPos(const QPoint& pos);
```
- **`setIsTrapping`**：设置是否进入捕获模式。
- **`isTrapping`**：返回当前是否处于捕获模式。
- **`highliteElementAtPos`**：在指定位置高亮网页元素。
- **`trapElementAtPos`**：捕获指定位置的网页元素。

#### 信号

```cpp
signals:
void pixmapCaptured(const QPixmap& pixmap, bool pageMode);
void objectCaptured(const QUrl& pUrl, const QString& pMimeType, int pWidth, int pHeight);
void embedCodeCaptured(const QString& embedCode);
void webElementCaptured(const QUrl& pUrl, const QString& query);
```
- **`pixmapCaptured`**：捕获的图像和页面模式。
- **`objectCaptured`**：捕获的对象信息（URL、MIME 类型、宽度、高度）。
- **`embedCodeCaptured`**：捕获的嵌入代码。
- **`webElementCaptured`**：捕获的网页元素信息（URL 和查询）。

#### 私有槽

```cpp
private slots:
void viewLoadFinished(bool ok);
```
- **`viewLoadFinished`**：视图加载完成时的处理。

#### 受保护方法

```cpp
protected:
virtual void mousePressEvent(QMouseEvent* event);
virtual void mouseMoveEvent ( QMouseEvent * event );
virtual void mouseReleaseEvent ( QMouseEvent * event );
virtual void hideEvent ( QHideEvent * event );
virtual void paintEvent ( QPaintEvent * event );
```
- **`mousePressEvent`**：处理鼠标按下事件。
- **`mouseMoveEvent`**：处理鼠标移动事件。
- **`mouseReleaseEvent`**：处理鼠标释放事件。
- **`hideEvent`**：处理控件隐藏事件。
- **`paintEvent`**：处理绘制事件。

#### 私有方法

```cpp
QString potentialEmbedCodeAtPos(const QPoint& pos);
```
- **`potentialEmbedCodeAtPos`**：在指定位置检查潜在的嵌入代码。

#### 枚举

```cpp
enum WebContentType
{
    Unknown = 0, Image, Input, ObjectOrEmbed, ElementByQuery
};
```
- **`WebContentType`**：定义了几种网页内容类型，如图像、输入、对象或嵌入、按查询的元素等。

#### 私有成员变量

```cpp
private:
QRect mDomElementRect;
QRect mWebViewElementRect;
QString mElementQuery;
WebContentType mCurrentContentType;
bool mIsTrapping;
QWidget* mTrapingWidget;
```
- **`mDomElementRect`**：DOM 元素的矩形区域。
- **`mWebViewElementRect`**：Web 视图元素的矩形区域。
- **`mElementQuery`**：元素查询字符串。
- **`mCurrentContentType`**：当前网页内容的类型。
- **`mIsTrapping`**：标记是否处于捕获模式。
- **`mTrapingWidget`**：用于捕获的控件。

### `UBWebTrapMouseEventMask` 类

用于处理鼠标事件的掩码层，通常用于 `WBWebTrapWebView` 的覆盖层，以捕捉用户的交互。

#### 公共构造函数和析构函数

```cpp
UBWebTrapMouseEventMask(WBWebTrapWebView* pWebView);
virtual ~UBWebTrapMouseEventMask();
```
- **构造函数**：创建一个 `UBWebTrapMouseEventMask` 实例，并将其与 `WBWebTrapWebView` 实例关联。
- **析构函数**：清理 `UBWebTrapMouseEventMask` 实例的资源。

#### 受保护方法

```cpp
protected:
virtual void mousePressEvent(QMouseEvent* event);
virtual void mouseMoveEvent ( QMouseEvent * event );
virtual void mouseReleaseEvent ( QMouseEvent * event );
virtual void paintEvent(QPaintEvent *);
```
- **`mousePressEvent`**：处理鼠标按下事件。
- **`mouseMoveEvent`**：处理鼠标移动事件。
- **`mouseReleaseEvent`**：处理鼠标释放事件。
- **`paintEvent`**：处理绘制事件。

#### 私有成员变量

```cpp
private:
WBWebTrapWebView *mTrappedWebView;
```
- **`mTrappedWebView`**：指向 `WBWebTrapWebView` 的指针，关联的网页视图实例。

### 总结

`WBWebTrapWebView` 类扩展了 `QWebEngineView`，提供了捕获和高亮网页元素的功能，同时支持嵌入代码和对象捕获。
`UBWebTrapMouseEventMask` 类用于覆盖层以处理鼠标事件，辅助 `WBWebTrapWebView` 实现用户交互。

*/