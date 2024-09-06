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

��δ��붨����һ���Զ���� `QLabel` �࣬`WBSqueezeLabel`�����Ұ����˱�Ҫ��ͷ�ļ��ͻ������������������Ƕ�ÿ�����ֵ���ϸ������

### ͷ�ļ�����

```cpp
#ifndef WBSQUEEZELABEL_H
#define WBSQUEEZELABEL_H
```
- �ⲿ����ͷ�ļ������ĺ꣬��ֹͷ�ļ�����ΰ�����`#endif` ����˱����Ľ�����

### ������

```cpp
#include <QLabel>

class WBSqueezeLabel : public QLabel
{
    Q_OBJECT;
```
- `#include <QLabel>`: ������ Qt �� `QLabel` �࣬���� `WBSqueezeLabel` ���Լ̳��书�ܡ�
- `class WBSqueezeLabel : public QLabel`: ������һ����Ϊ `WBSqueezeLabel` ���࣬���̳��� `QLabel`������ཫ��չ `QLabel` �Ĺ��ܡ�

### ���캯��

```cpp
public:
    WBSqueezeLabel(QWidget *parent = 0);
```
- `WBSqueezeLabel(QWidget *parent = 0)`: ���ǹ��캯�������� `WBSqueezeLabel` ʵ�������� `parent` ��һ����ѡ�ĸ�����ָ�룬�������ò����ĸ��ӹ�ϵ��Ĭ��Ϊ `0`����ʾû�и�������

### �ܱ����ķ���

```cpp
protected:
    void paintEvent(QPaintEvent *event);
```
- `void paintEvent(QPaintEvent *event)`: ����һ���ܱ����ķ�����������д `QLabel` �� `paintEvent` ��������������� `WBSqueezeLabel` ��Ҫ������ʱ���á�ͨ����д���������`WBSqueezeLabel` �����Զ����������Ϊ�����������ʾ���ı���ͼ�λ���ʽ��

### ͷ�ļ�����

```cpp
#endif // WBSQUEEZELABEL_H
```
- ����ͷ�ļ������Ľ������֡�

### �ܽ�

- `WBSqueezeLabel` ��̳��� `QLabel`��������Ҫ�������Զ����ǩ�Ļ��Ʒ�ʽ��
- ���캯���������ø�����������ͨ�� `paintEvent` ���������Զ�����Ʊ�ǩ�����ݺ���ʽ��

*/