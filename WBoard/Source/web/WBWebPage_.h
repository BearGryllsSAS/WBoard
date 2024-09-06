#ifndef WBWEBPAGE_H_
#define WBWEBPAGE_H_

#include <QtCore>
#include <QWebEnginePage>

class WBWebPage_ : public QWebEnginePage
{
    Q_OBJECT;

public:
    WBWebPage_(QObject *parent = 0);
    virtual ~WBWebPage_();

    virtual void javaScriptConsoleMessage(const QString &message, int lineNumber, const QString &sourceID);

    virtual QString userAgentForUrl(const QUrl& url) const;

private:
    QString mCachedUserAgentString;
    /*QWebPluginFactory *mPluginFactory;*/

};

#endif /* WBWEBPAGE_H_ */

/*

��δ��붨����һ����Ϊ `WBWebPage_` ���࣬���̳��� `QWebEnginePage` �࣬����д��һЩ�������������ҪĿ������չ���޸� `QWebEnginePage` ��Ĭ����Ϊ�������Ƕ�ÿ�����ֵ���ϸ������

### ͷ�ļ�������

```cpp
#ifndef WBWEBPAGE_H_
#define WBWEBPAGE_H_
```

- **`#ifndef WBWEBPAGE_H_`* * �� * *`#define WBWEBPAGE_H_`* * :
-��Щ�궨�����ڷ�ֹͷ�ļ��Ķ��ذ�����`#ifndef` ��� `WBWEBPAGE_H_` �Ƿ��ѱ����壬���û�ж��壬��������������ͷ�ļ����ݡ���������ȷ����һ�����뵥Ԫ��ֻ����һ�θ�ͷ�ļ���

### ͷ�ļ�����

```cpp
#include <QtCore>
#include <QWebEnginePage>
```

- **`#include <QtCore>`* * :
-���� Qt �ĺ���ģ��ͷ�ļ���`QtCore` ������һЩ������ Qt �࣬�� `QString` �� `QObject`��

- **`#include <QWebEnginePage>`* * :
-���� `QWebEnginePage` ���ͷ�ļ������� Qt WebEngine �����ڱ�ʾ��ҳ���࣬�ṩ������ҳ���ݽ����Ĺ��ܡ�

### `WBWebPage_` �ඨ��

```cpp
class WBWebPage_ : public QWebEnginePage
{
    Q_OBJECT;

public:
    WBWebPage_(QObject* parent = 0);
    virtual ~WBWebPage_();

    virtual void javaScriptConsoleMessage(const QString& message, int lineNumber, const QString& sourceID);

    virtual QString userAgentForUrl(const QUrl& url) const;

private:
    QString mCachedUserAgentString;
};
```

#### �̳й�ϵ

- `WBWebPage_` ��̳��� `QWebEnginePage`����ζ�����̳��� `QWebEnginePage` �����й��ܣ���������д����չ��Щ���ܡ�

#### `Q_OBJECT` ��

- `Q_OBJECT` ���� Qt Ԫ����ϵͳ��һ���֣�������ʹ�� Qt ���źźͲۻ��ơ���ʹ�����ܹ�֧���źźͲ۵Ĺ��ܡ�����ʱ������Ϣ�ȡ�

#### ���캯��

```cpp
WBWebPage_(QObject * parent = 0);
```

- **`WBWebPage_(QObject * parent = 0)`** :
-���캯�����ڳ�ʼ�� `WBWebPage_` ʵ����`parent` ������һ��ָ�� `QObject` ��ָ�룬Ĭ��Ϊ `0`���� `nullptr`������ָ���� `WBWebPage_` �ĸ��������ڹ����ڴ�Ͷ����������ڡ�

#### ��������

```cpp
virtual ~WBWebPage_();
```

- **`virtual ~WBWebPage_()`* * :
-�������������������� `WBWebPage_` ʵ�������Ϊ `virtual` ��ȷ�������������ȷ�ص���������������������Դй©��

#### ��д�� `javaScriptConsoleMessage` ����

```cpp
virtual void javaScriptConsoleMessage(const QString & message, int lineNumber, const QString & sourceID);
```

- **`javaScriptConsoleMessage(const QString & message, int lineNumber, const QString& sourceID)`** :
-�÷�����д�� `QWebEnginePage` ���鷽�������ڴ��� JavaScript ����̨��Ϣ��
- **���� * *:
-`message`��JavaScript ����̨�������Ϣ���ݡ�
- `lineNumber`����Ϣ�������кš�
- `sourceID`����Ϣ��Դ�� ID��
- **���� * *: �������ڲ�׽������ JavaScript ����������Ϣ��ͨ��������־��¼����ʾ����̨��Ϣ��

#### ��д�� `userAgentForUrl` ����

```cpp
virtual QString userAgentForUrl(const QUrl & url) const;
```

- **`userAgentForUrl(const QUrl & url) const`** :
-�÷�����д�� `QWebEnginePage` ���鷽���������ṩ�ض� URL ���û������ַ�����User - Agent����
- **���� * *:
-`url`����ҪΪ���ṩ�û������ URL��
- **����ֵ * *: ����һ�� `QString` ���͵��û������ַ�����
- **���� * *: ���������޸Ļ����ض� URL ���û������ַ���������ģ�ⲻͬ���������ƽ̨��

#### ˽�г�Ա����

```cpp
private:
    QString mCachedUserAgentString;
    ```

        - **`QString mCachedUserAgentString`* * :
    -һ��˽�г�Ա���������ڻ����û������ַ����������������ܣ�������ÿ������ʱ�����������û������ַ�����

        ### �ܽ�

        - **`WBWebPage_`* * ��̳��� `QWebEnginePage`��������չ `QWebEnginePage` �Ĺ��ܡ�
        - ͨ����д `javaScriptConsoleMessage` ��������������Զ��� JavaScript ����̨��Ϣ�Ĵ���
        - ͨ����д `userAgentForUrl` ��������������ṩ�ض� URL ���Զ����û������ַ�����
        - ������һ��˽�г�Ա���� `mCachedUserAgentString` ���ڻ����û������ַ�������������ܡ�

*/