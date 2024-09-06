#ifndef WBOEMBEDPARSER_H
#define WBOEMBEDPARSER_H

#include <QObject>
#include <QVector>
#include <QString>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QMutex>
#include <QJSEngine>

typedef struct{
    QString providerUrl;
    QString title;
    QString author;
    int height;
    int width;
    int thumbWidth;
    float version;
    QString authorUrl;
    QString providerName;
    QString thumbUrl;
    QString type;
    QString thumbHeight;
    QString html;
    QString url;
}sOEmbedContent;

class WBOEmbedParser : public QObject
{
    Q_OBJECT
public:
    WBOEmbedParser(QObject* parent=0, const char* name="WBOEmbedParser");
    ~WBOEmbedParser();
    void parse(const QString& html);
    void setNetworkAccessManager(QNetworkAccessManager* nam);

signals:
    void parseContent(QString url);
    void oembedParsed(QVector<sOEmbedContent> contents);

private slots:
    void onFinished(QNetworkReply* reply);
    void onParseContent(QString url);

private:
    sOEmbedContent getJSONInfos(const QString& json);
    sOEmbedContent getXMLInfos(const QString& xml);
    QVector<sOEmbedContent> mContents;
    QVector<QString> mParsedTitles;
    QNetworkAccessManager* mpNam;
    int mPending;
};

#endif // WBOEMBEDPARSER_H

/*

这段代码定义了一个名为 `WBOEmbedParser` 的 C++ 类，继承自 `QObject`，用于解析嵌入式内容的相关信息。它使用了 Qt 框架中的一些特性，如信号和槽机制，以及网络访问管理。以下是对这段代码每个部分的详细分析：

### 头文件内容

```cpp
#ifndef WBOEMBEDPARSER_H
#define WBOEMBEDPARSER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QString>
#include <QVector>
```
- **头文件保护符**：防止头文件被多次包含。
- **包含必要的 Qt 头文件**：
  - `QObject` 是 Qt 的基类，支持信号和槽机制。
  - `QNetworkAccessManager` 和 `QNetworkReply` 用于处理网络请求。
  - `QString` 和 `QVector` 用于字符串和动态数组的处理。

```cpp
class WBOEmbedParser : public QObject
{
    Q_OBJECT
```
- **类声明**：`WBOEmbedParser` 继承自 `QObject`，用于解析嵌入式内容（oEmbed），并支持信号和槽机制。

#### 公共成员函数

```cpp
public:
    WBOEmbedParser(QObject* parent=0, const char* name="WBOEmbedParser");
    ~WBOEmbedParser();
    void parse(const QString& html);
    void setNetworkAccessManager(QNetworkAccessManager* nam);
```

- **构造函数**：
  ```cpp
  WBOEmbedParser(QObject* parent=0, const char* name="WBOEmbedParser");
  ```
  - `parent`：指定父对象（用于 Qt 的对象树）。
  - `name`：对象的名称（通常用于调试，Qt 5.x 后不再使用）。

- **析构函数**：
  ```cpp
  ~WBOEmbedParser();
  ```
  - 释放类实例所占用的资源。

- **`parse` 函数**：
  ```cpp
  void parse(const QString& html);
  ```
  - 解析 HTML 字符串中的 oEmbed 内容。调用此函数时，应该传入要解析的 HTML 内容。

- **`setNetworkAccessManager` 函数**：
  ```cpp
  void setNetworkAccessManager(QNetworkAccessManager* nam);
  ```
  - 设置用于网络请求的 `QNetworkAccessManager` 实例。这是用来进行网络操作的对象。

#### 信号

```cpp
signals:
    void parseContent(QString url);
    void oembedParsed(QVector<sOEmbedContent> contents);
```

- **`parseContent` 信号**：
  ```cpp
  void parseContent(QString url);
  ```
  - 发射一个信号，传递要解析的内容的 URL。

- **`oembedParsed` 信号**：
  ```cpp
  void oembedParsed(QVector<sOEmbedContent> contents);
  ```
  - 发射一个信号，传递解析出的 oEmbed 内容信息。`sOEmbedContent` 是一个用户自定义的数据结构，用于存储 oEmbed 内容。

#### 私有槽函数

```cpp
private slots:
    void onFinished(QNetworkReply* reply);
    void onParseContent(QString url);
```

- **`onFinished` 槽函数**：
  ```cpp
  void onFinished(QNetworkReply* reply);
  ```
  - 处理网络请求完成的事件，`reply` 是请求的结果。通常在这个函数中，会读取回复内容并处理它。

- **`onParseContent` 槽函数**：
  ```cpp
  void onParseContent(QString url);
  ```
  - 处理解析内容的请求。它会被 `parseContent` 信号触发，传递一个 URL。

#### 私有成员函数和变量

```cpp
private:
    sOEmbedContent getJSONInfos(const QString& json);
    sOEmbedContent getXMLInfos(const QString& xml);
    QVector<sOEmbedContent> mContents;
    QVector<QString> mParsedTitles;
    QNetworkAccessManager* mpNam;
    int mPending;
```

- **`getJSONInfos` 和 `getXMLInfos` 函数**：
  ```cpp
  sOEmbedContent getJSONInfos(const QString& json);
  sOEmbedContent getXMLInfos(const QString& xml);
  ```
  - 用于从 JSON 和 XML 数据中提取 oEmbed 内容信息。`sOEmbedContent` 是一个用户自定义的结构体，包含提取的数据。

- **`mContents`**：
  ```cpp
  QVector<sOEmbedContent> mContents;
  ```
  - 存储解析得到的 oEmbed 内容的向量。

- **`mParsedTitles`**：
  ```cpp
  QVector<QString> mParsedTitles;
  ```
  - 存储解析过程中得到的标题信息的向量。

- **`mpNam`**：
  ```cpp
  QNetworkAccessManager* mpNam;
  ```
  - 指向用于网络操作的 `QNetworkAccessManager` 实例。

- **`mPending`**：
  ```cpp
  int mPending;
  ```
  - 记录当前待处理的请求数量。通常用于跟踪网络请求的状态。

### 总结

`WBOEmbedParser` 类用于解析嵌入式内容（oEmbed），主要功能包括：

- 解析 HTML 中的 oEmbed 内容。
- 通过 `QNetworkAccessManager` 进行网络请求以获取 oEmbed 数据。
- 使用信号和槽机制与其他组件进行通信，例如当内容解析完成时发出信号。
- 提供处理 JSON 和 XML 数据的功能。

**流程概述**：

1. 调用 `parse` 方法传入 HTML 内容。
2. 解析 HTML，提取 URL，并使用 `QNetworkAccessManager` 发起网络请求。
3. 网络请求完成时，通过 `onFinished` 槽函数处理返回的数据。
4. 解析得到的 oEmbed 内容通过 `oembedParsed` 信号发出。
5. 使用 `getJSONInfos` 和 `getXMLInfos` 从响应中提取具体的 oEmbed 内容信息。

*/
