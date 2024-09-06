#ifndef WBMODELMENU_H
#define WBMODELMENU_H

#include <QtWidgets>
#include <QMenu>

class WBModelMenu : public QMenu
{
    Q_OBJECT

public:
    WBModelMenu(QWidget *parent = 0);

    void setModel(QAbstractItemModel *model);
    QAbstractItemModel *model() const;

    void setMaxRows(int max);
    int maxRows() const;

    void setFirstSeparator(int offset);
    int firstSeparator() const;

    void setRootIndex(const QModelIndex &index);
    QModelIndex rootIndex() const;

    void setHoverRole(int role);
    int hoverRole() const;

    void setSeparatorRole(int role);
    int separatorRole() const;

    QAction *makeAction(const QIcon &icon, const QString &text, QObject *parent);

protected:
    virtual bool prePopulated();
    virtual void postPopulated();
    void createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0);

signals:
	void activated(const QModelIndex &index);
	void hovered(const QString &text);

private slots:
    void aboutToShow();
    void triggered(QAction *action);
    void hovered(QAction *action);

private:
    QAction *makeAction(const QModelIndex &index);
    int m_maxRows;
    int m_firstSeparator;
    int m_maxWidth;
    int m_hoverRole;
    int m_separatorRole;
    QAbstractItemModel *m_model;
    QPersistentModelIndex m_root;
};

#endif // WBMODELMENU_H

/*

��δ��붨����һ�� `WBModelMenu` �࣬�̳��� `QMenu`�����ڴ���һ���Զ���������Ĳ˵����ܹ�����ģ�����ݶ�̬���ɲ˵�������Ƕ�ÿ����Ա�ͷ�������ϸ������

### `WBModelMenu` ��

#### ���캯��

```cpp
WBModelMenu(QWidget *parent = 0);
```
- **`WBModelMenu(QWidget *parent = 0)`**: ���캯�������ڴ��� `WBModelMenu` ʵ��������һ����ѡ�ĸ�����ָ�� `parent`��`QMenu` �ĸ�����ͨ�����ڹ����������ں���ʾλ�á�

#### ��������

```cpp
void setModel(QAbstractItemModel *model);
QAbstractItemModel *model() const;
```
- **`setModel(QAbstractItemModel *model)`**: ������˵�����������ģ�͡���ģ�������ṩ�˵�������ݡ�
- **`model() const`**: ��ȡ��ǰ���õ�����ģ�͡�

```cpp
void setMaxRows(int max);
int maxRows() const;
```
- **`setMaxRows(int max)`**: ���ò˵������������ʾ������������˵�����ڴ�ֵ��������Ҫ���з�ҳ����������
- **`maxRows() const`**: ��ȡ������ʾ�����������

```cpp
void setFirstSeparator(int offset);
int firstSeparator() const;
```
- **`setFirstSeparator(int offset)`**: ���ò˵��е�һ���ָ�����ƫ���������ڶ�����֮�����ָ�����
- **`firstSeparator() const`**: ��ȡ��һ���ָ�����ƫ������

```cpp
void setRootIndex(const QModelIndex &index);
QModelIndex rootIndex() const;
```
- **`setRootIndex(const QModelIndex &index)`**: ����ģ�͵ĸ�����������ȷ����ģ�͵��ĸ�λ�ÿ�ʼ�����˵��
- **`rootIndex() const`**: ��ȡ��ǰ�ĸ�������

```cpp
void setHoverRole(int role);
int hoverRole() const;
```
- **`setHoverRole(int role)`**: �������ڲ˵�����ͣ�Ľ�ɫ���������ھ�����ͣʱ��ʾ�����ݻ���ʽ��
- **`hoverRole() const`**: ��ȡ��ǰ����ͣ��ɫ��

```cpp
void setSeparatorRole(int role);
int separatorRole() const;
```
- **`setSeparatorRole(int role)`**: ���÷ָ����Ľ�ɫ����������ȷ���˵��в���ָ�����������
- **`separatorRole() const`**: ��ȡ��ǰ�ķָ�����ɫ��

```cpp
QAction *makeAction(const QIcon &icon, const QString &text, QObject *parent);
```
- **`makeAction(const QIcon &icon, const QString &text, QObject *parent)`**: ����������һ���µ� `QAction` ���󣬴���ͼ����ı�����ͨ���������ɲ˵��

#### �ܱ����ķ���

```cpp
virtual bool prePopulated();
virtual void postPopulated();
```
- **`prePopulated()`**: �ڲ˵�����֮ǰ���õ��麯��������������ʵ���Զ���ĳ�ʼ���߼���
- **`postPopulated()`**: �ڲ˵�����֮����õ��麯�������������Խ��к�������

```cpp
void createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0);
```
- **`createMenu(const QModelIndex &parent, int max, QMenu *parentMenu = 0, QMenu *menu = 0)`**: �ݹ�ش����˵���� `parent` ������ʼ����ഴ�� `max` �С�`parentMenu` �� `menu` ��������Ƕ�ײ˵��Ĵ�����

#### �ź�

```cpp
void activated(const QModelIndex &index);
void hovered(const QString &text);
```
- **`activated(const QModelIndex &index)`**: ���˵������ʱ������Я�����������ģ��������
- **`hovered(const QString &text)`**: ���˵����ͣʱ������Я����ͣ����ı���

#### ˽�вۺ���

```cpp
void aboutToShow();
void triggered(QAction *action);
void hovered(QAction *action);
```
- **`aboutToShow()`**: �˵�������ʾʱ���õĲۺ��������������ڲ˵���ʾǰ����һЩ׼����
- **`triggered(QAction *action)`**: ���˵�������������ʱ���õĲۺ������������¼���
- **`hovered(QAction *action)`**: ���˵����ͣʱ���õĲۺ�����������ͣ�¼���

#### ˽�з���

```cpp
QAction *makeAction(const QModelIndex &index);
```
- **`makeAction(const QModelIndex &index)`**: ������ģ��������� `QAction`�������������ɴ���ģ�����ݵĲ˵��

#### ˽�г�Ա����

- **`int m_maxRows`**: ���������
- **`int m_firstSeparator`**: ��һ���ָ�����ƫ������
- **`int m_maxWidth`**: ����ȣ�δ�ڴ�����ʹ�ã���
- **`int m_hoverRole`**: ��ͣ��ɫ��
- **`int m_separatorRole`**: �ָ�����ɫ��
- **`QAbstractItemModel *m_model`**: ����������ģ�͡�
- **`QPersistentModelIndex m_root`**: ���������������ɲ˵�����ʼ�㡣

### �ܽ�

`WBModelMenu` ��Ҫ���ڴ�����ģ���ж�̬���ɲ˵���������Զ���˵�����ۺ���Ϊ��
��֧������ģ�͡��������ָ������������ͽ�ɫ�����ԣ����ṩ�˲˵������ɺ��¼�����Ļ��ơ�

*/