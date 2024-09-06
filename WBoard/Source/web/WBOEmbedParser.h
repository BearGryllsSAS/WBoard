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

��δ��붨����һ����Ϊ `WBOEmbedParser` �� C++ �࣬�̳��� `QObject`�����ڽ���Ƕ��ʽ���ݵ������Ϣ����ʹ���� Qt ����е�һЩ���ԣ����źźͲۻ��ƣ��Լ�������ʹ��������Ƕ���δ���ÿ�����ֵ���ϸ������

### ͷ�ļ�����

```cpp
#ifndef WBOEMBEDPARSER_H
#define WBOEMBEDPARSER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QString>
#include <QVector>
```
- **ͷ�ļ�������**����ֹͷ�ļ�����ΰ�����
- **������Ҫ�� Qt ͷ�ļ�**��
  - `QObject` �� Qt �Ļ��֧࣬���źźͲۻ��ơ�
  - `QNetworkAccessManager` �� `QNetworkReply` ���ڴ�����������
  - `QString` �� `QVector` �����ַ����Ͷ�̬����Ĵ���

```cpp
class WBOEmbedParser : public QObject
{
    Q_OBJECT
```
- **������**��`WBOEmbedParser` �̳��� `QObject`�����ڽ���Ƕ��ʽ���ݣ�oEmbed������֧���źźͲۻ��ơ�

#### ������Ա����

```cpp
public:
    WBOEmbedParser(QObject* parent=0, const char* name="WBOEmbedParser");
    ~WBOEmbedParser();
    void parse(const QString& html);
    void setNetworkAccessManager(QNetworkAccessManager* nam);
```

- **���캯��**��
  ```cpp
  WBOEmbedParser(QObject* parent=0, const char* name="WBOEmbedParser");
  ```
  - `parent`��ָ������������ Qt �Ķ���������
  - `name`����������ƣ�ͨ�����ڵ��ԣ�Qt 5.x ����ʹ�ã���

- **��������**��
  ```cpp
  ~WBOEmbedParser();
  ```
  - �ͷ���ʵ����ռ�õ���Դ��

- **`parse` ����**��
  ```cpp
  void parse(const QString& html);
  ```
  - ���� HTML �ַ����е� oEmbed ���ݡ����ô˺���ʱ��Ӧ�ô���Ҫ������ HTML ���ݡ�

- **`setNetworkAccessManager` ����**��
  ```cpp
  void setNetworkAccessManager(QNetworkAccessManager* nam);
  ```
  - ����������������� `QNetworkAccessManager` ʵ������������������������Ķ���

#### �ź�

```cpp
signals:
    void parseContent(QString url);
    void oembedParsed(QVector<sOEmbedContent> contents);
```

- **`parseContent` �ź�**��
  ```cpp
  void parseContent(QString url);
  ```
  - ����һ���źţ�����Ҫ���������ݵ� URL��

- **`oembedParsed` �ź�**��
  ```cpp
  void oembedParsed(QVector<sOEmbedContent> contents);
  ```
  - ����һ���źţ����ݽ������� oEmbed ������Ϣ��`sOEmbedContent` ��һ���û��Զ�������ݽṹ�����ڴ洢 oEmbed ���ݡ�

#### ˽�вۺ���

```cpp
private slots:
    void onFinished(QNetworkReply* reply);
    void onParseContent(QString url);
```

- **`onFinished` �ۺ���**��
  ```cpp
  void onFinished(QNetworkReply* reply);
  ```
  - ��������������ɵ��¼���`reply` ������Ľ����ͨ������������У����ȡ�ظ����ݲ���������

- **`onParseContent` �ۺ���**��
  ```cpp
  void onParseContent(QString url);
  ```
  - ����������ݵ��������ᱻ `parseContent` �źŴ���������һ�� URL��

#### ˽�г�Ա�����ͱ���

```cpp
private:
    sOEmbedContent getJSONInfos(const QString& json);
    sOEmbedContent getXMLInfos(const QString& xml);
    QVector<sOEmbedContent> mContents;
    QVector<QString> mParsedTitles;
    QNetworkAccessManager* mpNam;
    int mPending;
```

- **`getJSONInfos` �� `getXMLInfos` ����**��
  ```cpp
  sOEmbedContent getJSONInfos(const QString& json);
  sOEmbedContent getXMLInfos(const QString& xml);
  ```
  - ���ڴ� JSON �� XML ��������ȡ oEmbed ������Ϣ��`sOEmbedContent` ��һ���û��Զ���Ľṹ�壬������ȡ�����ݡ�

- **`mContents`**��
  ```cpp
  QVector<sOEmbedContent> mContents;
  ```
  - �洢�����õ��� oEmbed ���ݵ�������

- **`mParsedTitles`**��
  ```cpp
  QVector<QString> mParsedTitles;
  ```
  - �洢���������еõ��ı�����Ϣ��������

- **`mpNam`**��
  ```cpp
  QNetworkAccessManager* mpNam;
  ```
  - ָ��������������� `QNetworkAccessManager` ʵ����

- **`mPending`**��
  ```cpp
  int mPending;
  ```
  - ��¼��ǰ�����������������ͨ�����ڸ������������״̬��

### �ܽ�

`WBOEmbedParser` �����ڽ���Ƕ��ʽ���ݣ�oEmbed������Ҫ���ܰ�����

- ���� HTML �е� oEmbed ���ݡ�
- ͨ�� `QNetworkAccessManager` �������������Ի�ȡ oEmbed ���ݡ�
- ʹ���źźͲۻ����������������ͨ�ţ����統���ݽ������ʱ�����źš�
- �ṩ���� JSON �� XML ���ݵĹ��ܡ�

**���̸���**��

1. ���� `parse` �������� HTML ���ݡ�
2. ���� HTML����ȡ URL����ʹ�� `QNetworkAccessManager` ������������
3. �����������ʱ��ͨ�� `onFinished` �ۺ��������ص����ݡ�
4. �����õ��� oEmbed ����ͨ�� `oembedParsed` �źŷ�����
5. ʹ�� `getJSONInfos` �� `getXMLInfos` ����Ӧ����ȡ����� oEmbed ������Ϣ��

*/
