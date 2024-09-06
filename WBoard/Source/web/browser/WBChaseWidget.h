#ifndef WBCHASEWIDGET_H
#define WBCHASEWIDGET_H

#include <QtWidgets>
#include <QWidget>


class WBChaseWidget : public QWidget
{
    Q_OBJECT

public:
    WBChaseWidget(QWidget *parent = 0, QPixmap pixmap = QPixmap(), bool pixmapEnabled = false);

    void setAnimated(bool value);
    void setPixmapEnabled(bool enable);
    QSize sizeHint() const;

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);

private:
    int segmentCount() const;
    QColor colorForSegment(int segment) const;

    int mSegment;
    int mDelay;
    int mStep;
    int mTimerID;
    bool mAnimated;
    QPixmap mPixmap;
    bool mPixmapEnabled;
};

#endif //WBCHASEWIDGET_H

/*

��δ��붨����һ����Ϊ `WBChaseWidget` ���࣬�̳��� `QWidget`�����ڴ���һ���Զ���Ķ����ؼ��������Ƕ�ÿ�����ֵ���ϸ������

### ͷ�ļ�������

```cpp
#ifndef WBCHASEWIDGET_H
#define WBCHASEWIDGET_H
```

- **`#ifndef WBCHASEWIDGET_H`** �� **`#define WBCHASEWIDGET_H`**:
  - ��Щ�����ڷ�ֹͷ�ļ��Ķ��ذ�����`#ifndef` ��� `WBCHASEWIDGET_H` �Ƿ��ѱ����壬���û�ж��壬��������������ͷ�ļ����ݡ������ȷ����ͷ�ļ���һ�����뵥Ԫ��ֻ������һ�Ρ�

### ͷ�ļ�����

```cpp
#include <QtWidgets>
#include <QWidget>
```

- **`#include <QtWidgets>`**:
  - ���� Qt ������С��������ع��ܵ�ͷ�ļ������� `QWidget` ���������õ� Qt С������

- **`#include <QWidget>`**:
  - ���� `QWidget` ���ͷ�ļ���`QWidget` ������ Qt ���ڲ����Ļ��ࡣ

### `WBChaseWidget` �ඨ��

```cpp
class WBChaseWidget : public QWidget
{
    Q_OBJECT
```

- **`WBChaseWidget`**:
  - ����һ���Զ���� QWidget ���࣬���ڴ����Զ���С����������������Ч���Ϳ�ѡ��ͼ����ʾ���ܡ�

- **`Q_OBJECT`**:
  - ���� Qt �ĺ꣬������ʹ�� Qt ���źźͲۻ��ƣ�֧��Ԫ����ϵͳ��

#### ���캯��

```cpp
public:
    WBChaseWidget(QWidget *parent = 0, QPixmap pixmap = QPixmap(), bool pixmapEnabled = false);
```

- **`WBChaseWidget(QWidget *parent = 0, QPixmap pixmap = QPixmap(), bool pixmapEnabled = false)`**:
  - ���캯�����ڳ�ʼ�� `WBChaseWidget` ʵ����
  - **����**:
    - `parent`: ָ����������Ĭ��Ϊ `0`���� `nullptr`������ʾû�и�������
    - `pixmap`: һ�� `QPixmap` ���󣬱�ʾҪ��ʾ��ͼ��Ĭ��Ϊһ���յ� `QPixmap`��
    - `pixmapEnabled`: һ������ֵ��ָʾ�Ƿ�����ͼ����ʾ��Ĭ��Ϊ `false`��

#### ��������

```cpp
    void setAnimated(bool value);
    void setPixmapEnabled(bool enable);
    QSize sizeHint() const;
```

- **`void setAnimated(bool value)`**:
  - ���ÿؼ��Ƿ�Ӧ���Զ�����ʽ��ʾ����� `value` Ϊ `true`���ؼ������ö���Ч�������Ϊ `false`��������ֹͣ��

- **`void setPixmapEnabled(bool enable)`**:
  - �����Ƿ�����ͼ����ʾ����� `enable` Ϊ `true`���ؼ�����ʾͼ�����Ϊ `false`��ͼ�񽫱����á�

- **`QSize sizeHint() const`**:
  - ���ؿؼ����Ƽ���С������һ���鷽�����������ڸ�����ϵͳ�ṩ�ؼ��Ľ����С��

#### �ܱ�������

```cpp
protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
```

- **`void paintEvent(QPaintEvent *event)`**:
  - ����ؼ��Ļ����¼���ÿ���ؼ���Ҫ���»���ʱ��Qt ���������������˷�������ʵ�ֿؼ��Ļ����߼������������ĳ��֡�

- **`void timerEvent(QTimerEvent *event)`**:
  - �����ʱ���¼�������ʵ�ֶ�ʱ�������Ķ���Ч����ÿ����ʱ����ʱʱ��Qt ��������������

#### ˽�з���

```cpp
private:
    int segmentCount() const;
    QColor colorForSegment(int segment) const;
```

- **`int segmentCount() const`**:
  - ���ض����зֶε��������������ڼ����ȷ����������ʾЧ����

- **`QColor colorForSegment(int segment) const`**:
  - �����ض��ֶε���ɫ�������������ö����е���ɫ�仯��

#### ˽�г�Ա����

```cpp
private:
    int mSegment;
    int mDelay;
    int mStep;
    int mTimerID;
    bool mAnimated;
    QPixmap mPixmap;
    bool mPixmapEnabled;
```

- **`int mSegment`**:
  - ��ǰ�Ķ����ֶλ�״̬���������ڶ����Ľ��ȿ��ơ�

- **`int mDelay`**:
  - ��ʱ���ӳٵ�ʱ�䣬��λ�����Ǻ��롣���ƶ������µ�Ƶ�ʡ�

- **`int mStep`**:
  - �����Ĳ������������������ڿ���ÿ�ζ������µı仯����

- **`int mTimerID`**:
  - ��ʱ���� ID�����ڹ���ʱ���¼���

- **`bool mAnimated`**:
  - ��־λ��ָʾ�Ƿ����ö���Ч����

- **`QPixmap mPixmap`**:
  - �洢Ҫ��ʾ��ͼ��

- **`bool mPixmapEnabled`**:
  - ��־λ��ָʾͼ���Ƿ�������ʾ��

### �ܽ�

`WBChaseWidget` ��һ���Զ���� Qt С��������Ҫ���ܰ�����
- ֧�ֶ���Ч������ʾ��
- ����ѡ���Ե���ʾͼ��
- ͨ����д `paintEvent` ������������ƺͶ���Ч����
- ͨ����д `timerEvent` ���������������¡�
- �ṩ�˼����������������ö���״̬��ͼ����ʾ״̬���Լ��ṩ�ؼ����Ƽ���С��
- ʹ��˽�г�Ա������������״̬��ͼ��Ͷ�ʱ����

*/