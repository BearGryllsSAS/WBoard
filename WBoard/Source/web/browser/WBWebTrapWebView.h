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

��δ��붨���������ࣺ`WBWebTrapWebView` �� `UBWebTrapMouseEventMask`�������Ƕ�ÿ���༰���Ա����ϸ������

### `WBWebTrapWebView` ��

�̳��� `QWebEngineView`�����ڴ�����ҳ��ͼ�Ĳ�������������ҳԪ�صĲ���͸�����

#### �������캯������������

```cpp
WBWebTrapWebView(QWidget* parent = 0);
virtual ~WBWebTrapWebView();
```
- **���캯��**������һ�� `WBWebTrapWebView` ʵ������ѡ��ָ����������
- **��������**������ `WBWebTrapWebView` ʵ������Դ��

#### ��������

```cpp
void setIsTrapping(bool pIsTrapping);
bool isTrapping();
void highliteElementAtPos(const QPoint& pos);
void trapElementAtPos(const QPoint& pos);
```
- **`setIsTrapping`**�������Ƿ���벶��ģʽ��
- **`isTrapping`**�����ص�ǰ�Ƿ��ڲ���ģʽ��
- **`highliteElementAtPos`**����ָ��λ�ø�����ҳԪ�ء�
- **`trapElementAtPos`**������ָ��λ�õ���ҳԪ�ء�

#### �ź�

```cpp
signals:
void pixmapCaptured(const QPixmap& pixmap, bool pageMode);
void objectCaptured(const QUrl& pUrl, const QString& pMimeType, int pWidth, int pHeight);
void embedCodeCaptured(const QString& embedCode);
void webElementCaptured(const QUrl& pUrl, const QString& query);
```
- **`pixmapCaptured`**�������ͼ���ҳ��ģʽ��
- **`objectCaptured`**������Ķ�����Ϣ��URL��MIME ���͡���ȡ��߶ȣ���
- **`embedCodeCaptured`**�������Ƕ����롣
- **`webElementCaptured`**���������ҳԪ����Ϣ��URL �Ͳ�ѯ����

#### ˽�в�

```cpp
private slots:
void viewLoadFinished(bool ok);
```
- **`viewLoadFinished`**����ͼ�������ʱ�Ĵ���

#### �ܱ�������

```cpp
protected:
virtual void mousePressEvent(QMouseEvent* event);
virtual void mouseMoveEvent ( QMouseEvent * event );
virtual void mouseReleaseEvent ( QMouseEvent * event );
virtual void hideEvent ( QHideEvent * event );
virtual void paintEvent ( QPaintEvent * event );
```
- **`mousePressEvent`**��������갴���¼���
- **`mouseMoveEvent`**����������ƶ��¼���
- **`mouseReleaseEvent`**����������ͷ��¼���
- **`hideEvent`**������ؼ������¼���
- **`paintEvent`**����������¼���

#### ˽�з���

```cpp
QString potentialEmbedCodeAtPos(const QPoint& pos);
```
- **`potentialEmbedCodeAtPos`**����ָ��λ�ü��Ǳ�ڵ�Ƕ����롣

#### ö��

```cpp
enum WebContentType
{
    Unknown = 0, Image, Input, ObjectOrEmbed, ElementByQuery
};
```
- **`WebContentType`**�������˼�����ҳ�������ͣ���ͼ�����롢�����Ƕ�롢����ѯ��Ԫ�صȡ�

#### ˽�г�Ա����

```cpp
private:
QRect mDomElementRect;
QRect mWebViewElementRect;
QString mElementQuery;
WebContentType mCurrentContentType;
bool mIsTrapping;
QWidget* mTrapingWidget;
```
- **`mDomElementRect`**��DOM Ԫ�صľ�������
- **`mWebViewElementRect`**��Web ��ͼԪ�صľ�������
- **`mElementQuery`**��Ԫ�ز�ѯ�ַ�����
- **`mCurrentContentType`**����ǰ��ҳ���ݵ����͡�
- **`mIsTrapping`**������Ƿ��ڲ���ģʽ��
- **`mTrapingWidget`**�����ڲ���Ŀؼ���

### `UBWebTrapMouseEventMask` ��

���ڴ�������¼�������㣬ͨ������ `WBWebTrapWebView` �ĸ��ǲ㣬�Բ�׽�û��Ľ�����

#### �������캯������������

```cpp
UBWebTrapMouseEventMask(WBWebTrapWebView* pWebView);
virtual ~UBWebTrapMouseEventMask();
```
- **���캯��**������һ�� `UBWebTrapMouseEventMask` ʵ������������ `WBWebTrapWebView` ʵ��������
- **��������**������ `UBWebTrapMouseEventMask` ʵ������Դ��

#### �ܱ�������

```cpp
protected:
virtual void mousePressEvent(QMouseEvent* event);
virtual void mouseMoveEvent ( QMouseEvent * event );
virtual void mouseReleaseEvent ( QMouseEvent * event );
virtual void paintEvent(QPaintEvent *);
```
- **`mousePressEvent`**��������갴���¼���
- **`mouseMoveEvent`**����������ƶ��¼���
- **`mouseReleaseEvent`**����������ͷ��¼���
- **`paintEvent`**����������¼���

#### ˽�г�Ա����

```cpp
private:
WBWebTrapWebView *mTrappedWebView;
```
- **`mTrappedWebView`**��ָ�� `WBWebTrapWebView` ��ָ�룬��������ҳ��ͼʵ����

### �ܽ�

`WBWebTrapWebView` ����չ�� `QWebEngineView`���ṩ�˲���͸�����ҳԪ�صĹ��ܣ�ͬʱ֧��Ƕ�����Ͷ��󲶻�
`UBWebTrapMouseEventMask` �����ڸ��ǲ��Դ�������¼������� `WBWebTrapWebView` ʵ���û�������

*/