#ifndef WBEDITTABLEVIEW_H
#define WBEDITTABLEVIEW_H

#include <QtWidgets>
#include <QTableView>

class WBEditTableView : public QTableView
{
    Q_OBJECT;

public:
    WBEditTableView(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);

public slots:
    void removeOne();
    void removeAll();
};

#endif // WBEDITTABLEVIEW_H

/*

��δ��붨����һ����Ϊ `WBEditTableView` ���࣬�̳��� `QTableView`����ʵ����һЩ�Զ��幦�ܡ������Ƕ�ÿ�����ֺͷ�������ϸ������

### `WBEditTableView` ��

`WBEditTableView` ����һ���Զ���ı���ͼ�࣬��չ�� `QTableView` ��Ĺ��ܣ���֧�ֶ���Ĳ�����

#### ���캯��

```cpp
WBEditTableView(QWidget *parent = 0);
```

- **`WBEditTableView(QWidget *parent = 0)`**: ���캯�������ڴ��� `WBEditTableView` ʵ����������һ����ѡ�� `QWidget` ������ָ�룬Ĭ��ֵΪ `0`���� `nullptr`����������캯�����ʼ������ͼ�����ҿ��Դ���һ�����������й���

#### ��������

```cpp
void keyPressEvent(QKeyEvent *event);
```

- **`keyPressEvent(QKeyEvent *event)`**: ��д `QTableView` �� `keyPressEvent` ���������ڴ�������¼������������������ʵ���Զ���ļ��̲����߼���������ݰ��µļ�ִ���ض��Ĳ�����

#### �����ۺ���

```cpp
public slots:
void removeOne();
void removeAll();
```

- **`removeOne()`**: �Զ���ۺ��������ڴ���ͼ���Ƴ�һ����Ŀ�������ʵ�ֻ���Դ�ļ��ж��壬���ܻ�ʵ��ͨ��ѡ�е�����ض�������ɾ��һ�л�һ�����ݡ�
- **`removeAll()`**: �Զ���ۺ��������ڴ���ͼ���Ƴ�������Ŀ������ʵ�ֻ���Դ�ļ��ж��壬ͨ�������������ͼ��ģ�͵����ݡ�

### �ܽ�

- **`WBEditTableView`** ����չ�� `QTableView` �Ĺ��ܣ������Զ�������¼�������ṩɾ�������Ĳۺ�����
- **`keyPressEvent`** ��������Ӧ�����¼���
- **`removeOne`** �� **`removeAll`** �ṩ�˴���ͼ��ɾ�����ݵĹ��ܣ���Щ������Ҫ��ʵ���ļ��ж��������߼���

����������Ҫ������ǿ `QTableView` �Ĺ��ܣ��ر����ڱ༭��ɾ�����ݷ��档

*/