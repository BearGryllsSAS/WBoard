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

��δ��붨����һ����Ϊ `WBWebKitUtils` �Ĺ����࣬���а���һ���ڲ��� `HtmlObject` ��һ����̬��Ա���� `objectsInFrame`�������Ƕ�ÿ�����ֵ���ϸ������

### ͷ�ļ�������

```cpp
#ifndef WBWEBKITUTILS_H_
#define WBWEBKITUTILS_H_
```

- **`#ifndef WBWEBKITUTILS_H_`** �� **`#define WBWEBKITUTILS_H_`**:
  - �����к궨�����ڷ�ֹͷ�ļ��Ķ��ذ�����`#ifndef` ��� `WBWEBKITUTILS_H_` �Ƿ��ѱ����壬���û�ж��壬�����������Ұ���ͷ�ļ����ݡ���������ȷ����һ�����뵥Ԫ��ֻ����һ�θ�ͷ�ļ���

### ͷ�ļ�����

```cpp
#include <QtWebEngine>
#include <QWebEnginePage>
```

- **`#include <QtWebEngine>`**:
  - ���� Qt WebEngine ģ���ͷ�ļ������Ǵ�����ҳ���ݵ� Qt ģ�顣

- **`#include <QWebEnginePage>`**:
  - ���� `QWebEnginePage` ���ͷ�ļ������� Qt WebEngine �����ڱ�ʾ��ҳ���ࡣ

### `WBWebKitUtils` ��

```cpp
class WBWebKitUtils
{
    public:
        WBWebKitUtils();
        virtual ~WBWebKitUtils();

        // �ڲ��ඨ��
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

#### ���캯������������

```cpp
WBWebKitUtils();
virtual ~WBWebKitUtils();
```

- **`WBWebKitUtils()`**:
  - Ĭ�Ϲ��캯�������ڴ��� `WBWebKitUtils` ���ʵ�����˺���û�о���ʵ�֣���ͨ�����ڳ�ʼ�����״̬��

- **`virtual ~WBWebKitUtils()`**:
  - �������������������� `WBWebKitUtils` ���ʵ�������Ϊ `virtual` ��Ϊ��ȷ���������ܹ���ȷ�ص�����������������ֹ��Դй©��

#### �ڲ��� `HtmlObject`

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

- **���캯�� `HtmlObject(const QString& pSource, int pWidth, int pHeight)`**:
  - ���ڳ�ʼ�� `HtmlObject` ʵ���Ĺ��캯��������������������`pSource`��HTML Դ���룩��`pWidth`����ȣ��� `pHeight`���߶ȣ���������Щ������ֵ����Ӧ�ĳ�Ա������

- **���ݳ�Ա**:
  - **`QString source`**: �洢 HTML ���ݵ�Դ���롣
  - **`int width`**: �洢 HTML ����Ŀ�ȡ�
  - **`int height`**: �洢 HTML ����ĸ߶ȡ�

#### ��̬��Ա���� `objectsInFrame`

```cpp
static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame);
```

- **`static QList<WBWebKitUtils::HtmlObject> objectsInFrame(QWebEnginePage* frame)`**:
  - ����һ����̬���������ڴ� `QWebEnginePage` ʵ������ȡ HTML �����б�
  - **����**: `QWebEnginePage* frame` ��һ��ָ�� `QWebEnginePage` ��ָ�룬��ʾҪ������ȡ��Ϣ����ҳҳ�档
  - **����ֵ**: `QList<WBWebKitUtils::HtmlObject>`�������˴���ҳҳ����ȡ������ HTML ���������ԣ�Դ���롢��Ⱥ͸߶ȣ���

### �ܽ�

- **`WBWebKitUtils`** ����һ�������࣬��Ҫ���ڴ����� `QWebEnginePage` ��صĲ�����
- **`HtmlObject`** ��һ���ڲ��࣬���ڷ�װ HTML ���ݼ�����ʾ�ߴ硣
- **`objectsInFrame`** ��̬������ȡ��������ҳҳ���е����� HTML ������б�

ͨ�����ַ�ʽ��`WBWebKitUtils` �ṩ��һ�����߷��������Է���ش� `QWebEnginePage` �л�ȡ�й� HTML �������Ϣ�����ڴ���������ҳ����ʱ�ǳ����á�

*/
