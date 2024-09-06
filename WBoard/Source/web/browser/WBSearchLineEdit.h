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

��δ��붨���������� `WBClearButton` �� `WBSearchLineEdit`�����ṩ�����ǵĹ��ܺͽӿڵ���ϸ˵���������Ƕ�ÿ���༰���Ա��������ϸ������

### `WBClearButton` ��

`WBClearButton` �̳��� `QAbstractButton`�����ڴ���һ���Զ���������ť��

#### ���캯��

```cpp
WBClearButton(QWidget *parent = 0);
```
- **`WBClearButton(QWidget *parent = 0)`**: ���캯�������� `WBClearButton` ʵ��������һ����ѡ�ĸ�����ָ�� `parent`�����ڸ��ӹ�ϵ�Ĺ���

#### �����ۺ���

```cpp
void textChanged(const QString &text);
```
- **`textChanged(const QString &text)`**: �ۺ�����������Ӧ�ı��仯�����ܻ�����ı��ı仯�����°�ť��״̬����ۡ�

#### �ܱ����ķ���

```cpp
void paintEvent(QPaintEvent *event);
```
- **`paintEvent(QPaintEvent *event)`**: ��д�Ļ����¼������������Զ�����ư�ť����ۡ��⺯���ڰ�ť��Ҫ�����»���ʱ���ã������ڰ�ť����ʾ�����»��û�����ʱ��

### `WBSearchLineEdit` ��

`WBSearchLineEdit` �̳��� `WBExLineEdit`����һ�������������ܵ��ı��༭�������ܰ���������ť�������ť�Ͳ˵����ܡ�

#### ���캯��

```cpp
WBSearchLineEdit(QWidget *parent = 0);
```
- **`WBSearchLineEdit(QWidget *parent = 0)`**: ���캯�������� `WBSearchLineEdit` ʵ��������һ����ѡ�ĸ�����ָ�� `parent`�����ڹ���������ʾ���������ڡ�

#### ����

```cpp
QString inactiveText() const;
void setInactiveText(const QString &text);
```
- **`inactiveText() const`**: ��ȡ��ǰ�ķǻ�ı��������ı���Ϊ�ջ򲻾۽�ʱ��ʾ����ʾ�ı���
- **`setInactiveText(const QString &text)`**: ���÷ǻ�ı����������ı��򲻾۽���Ϊ��ʱ��ʾ����ʾ�ı���

#### �˵�����

```cpp
QMenu *menu() const;
void setMenu(QMenu *menu);
```
- **`menu() const`**: ��ȡ��ǰ�� `WBSearchLineEdit` �����Ĳ˵���
- **`setMenu(QMenu *menu)`**: ���� `WBSearchLineEdit` �����Ĳ˵���������ʾ���ӵĲ˵�ѡ�

#### ��ʾ״̬

```cpp
void setVisible(bool pVisible);
```
- **`setVisible(bool pVisible)`**: ���� `WBSearchLineEdit` �Ŀɼ��ԡ���� `pVisible` Ϊ `true`������ʾ�ı��򣻷������ء�

#### �ܱ����ķ���

```cpp
void resizeEvent(QResizeEvent *event);
void paintEvent(QPaintEvent *event);
```
- **`resizeEvent(QResizeEvent *event)`**: ��д�Ĵ�С�����¼��������� `WBSearchLineEdit` �Ĵ�С�����仯ʱ�����ã����ڵ��������Ĳ��ֻ�ߴ硣
- **`paintEvent(QPaintEvent *event)`**: ��д�Ļ����¼������������Զ������ `WBSearchLineEdit` ����ۡ��⺯���ڲ�����Ҫ���»���ʱ���á�

#### �ź�

```cpp
void textChanged(const QString &text);
```
- **`textChanged(const QString &text)`**: �źţ����ı����е��ı������仯ʱ������Я���µ��ı����ݡ�

#### ˽�з���

```cpp
void updateGeometries();
```
- **`updateGeometries()`**: ���²����ļ������ԣ����粼�ֻ�ߴ磬��ȷ���������ȷ��ʾ����Ϊ��

#### ˽�г�Ա����

```cpp
WBSearchButton *mSearchButton;
QString mInactiveText;
```
- **`WBSearchButton *mSearchButton`**: ָ�� `WBSearchButton` ��ָ�룬����������ʾ������ť��������������
- **`QString mInactiveText`**: �洢�ǻ�ı��������ı���Ϊ��ʱ��ʾ����ʾ�ı���

### �ܽ�

- **`WBClearButton`** �����ڴ���һ���Զ���������ť���ܹ������ı��仯���°�ť��״̬�����ҿ����Զ��尴ť�Ļ��Ʒ�ʽ��
- **`WBSearchLineEdit`** ����һ���Զ�����ı��༭�򣬾����������ܣ�֧�����÷ǻ�ı����˵����ܡ��ɼ��Կ��ƣ����ܹ���Ӧ��С�����ͻ����¼���
���������ı��仯�źţ�������Ҫʱ���¼������ԡ�

*/