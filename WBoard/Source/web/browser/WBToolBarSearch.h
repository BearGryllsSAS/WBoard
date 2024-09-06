#ifndef WBTOOLBARSEARCH_H
#define WBTOOLBARSEARCH_H

#include "WBSearchLineEdit.h"

#include <QtWidgets>

class WBAutoSaver;

class WBToolbarSearch : public WBSearchLineEdit
{
    Q_OBJECT;

public:
    WBToolbarSearch(QWidget *parent = 0);
    ~WBToolbarSearch();

signals:
	void search(const QUrl &url);

public slots:
    void clear();
    void searchNow();

private slots:
    void save();
    void aboutToShowMenu();
    void triggeredMenuAction(QAction *action);

private:
    void load();

    WBAutoSaver *mAutosaver;
    int mMaxSavedSearches;
    QStringListModel *mStringListModel;
};

#endif // WBTOOLBARSEARCH_H

/*

��δ��붨����һ���Զ���� `WBToolbarSearch` �࣬�̳��� `WBSearchLineEdit`��������������һ���������У��ṩ�������ܲ��Ҿ����Զ�������������ܡ������Ƕ�ÿ�����ֵ���ϸ������

### ͷ�ļ�����

```cpp
#ifndef WBTOOLBARSEARCH_H
#define WBTOOLBARSEARCH_H
```
- �ⲿ����ͷ�ļ������꣬ȷ��ͷ�ļ�ֻ������һ�Σ��Ա����ظ�����ͱ������

### ����ͷ�ļ�

```cpp
#include "WBSearchLineEdit.h"
#include <QtWidgets>
```
- `#include "WBSearchLineEdit.h"`: �����Զ���� `WBSearchLineEdit` ͷ�ļ���`WBToolbarSearch` ��̳��� `WBSearchLineEdit`��
- `#include <QtWidgets>`: ���� Qt Widgets ģ���е������࣬�ṩͼ���û����������͹��ܡ�

### ������

```cpp
class WBAutoSaver;

class WBToolbarSearch : public WBSearchLineEdit
{
    Q_OBJECT;
```
- `class WBAutoSaver;`: ǰ������ `WBAutoSaver` �࣬��ͨ������ָ����������͡�
- `class WBToolbarSearch : public WBSearchLineEdit`: ���� `WBToolbarSearch` �࣬�̳��� `WBSearchLineEdit`������ζ�� `WBToolbarSearch` ������ `WBSearchLineEdit` �����й��ܣ���������չ����д���ǡ�

### �������캯������������

```cpp
public:
    WBToolbarSearch(QWidget *parent = 0);
    ~WBToolbarSearch();
```
- `WBToolbarSearch(QWidget *parent = 0)`: ���캯�������� `WBToolbarSearch` ʵ����`parent` �����������ø�������Ĭ��Ϊ `0`����ʾû�и�������
- `~WBToolbarSearch()`: ������������������ `WBToolbarSearch` ʵ��ʱ����Դ��

### �ź�

```cpp
signals:
    void search(const QUrl &url);
```
- `void search(const QUrl &url)`: �Զ����źţ�����������ʱ���䡣�źŻ�Я��һ�� `QUrl` ���󣬱�ʾ������ URL��

### ������

```cpp
public slots:
    void clear();
    void searchNow();
```
- `void clear()`: �ۺ�����������������ֶλ���ʷ��¼��
- `void searchNow()`: �ۺ���������ִ������������

### ˽�в�

```cpp
private slots:
    void save();
    void aboutToShowMenu();
    void triggeredMenuAction(QAction *action);
```
- `void save()`: ˽�вۺ��������ڱ��浱ǰ״̬��������¼��
- `void aboutToShowMenu()`: ˽�вۺ������ڲ˵�������ʾʱ���ã��������ڸ��²˵����ݻ�׼��״̬��
- `void triggeredMenuAction(QAction *action)`: ˽�вۺ��������˵��е�ĳ������������ʱ���ã����ڴ���˵����ѡ��

### ˽�з����ͳ�Ա����

```cpp
private:
    void load();

    WBAutoSaver *mAutosaver;
    int mMaxSavedSearches;
    QStringListModel *mStringListModel;
```
- `void load()`: ˽�з��������ڼ��ر����������¼���������ݡ�
- `WBAutoSaver *mAutosaver;`: ָ�� `WBAutoSaver` ʵ����ָ�룬�����Զ����湦�ܡ�
- `int mMaxSavedSearches;`: ���ͱ�������ʾ��ౣ���������¼����
- `QStringListModel *mStringListModel;`: ָ�� `QStringListModel` ʵ����ָ�룬���ڹ������ʾ������¼���б�

### �ܽ�

- `WBToolbarSearch` �̳��� `WBSearchLineEdit`��������Զ���Ĺ��ܣ������������Զ����档
- ��Ҫ���ܰ�����
  - ͨ���ź� `search` ������������
  - ʹ�ò� `clear` �� `searchNow` ʵ������������������ܡ�
  - ����˵���ع��ܵ�˽�вۣ��� `save`��`aboutToShowMenu` �� `triggeredMenuAction`��
  - ˽�з��� `load` ���ڼ������ݣ���Ա���������Զ����桢���������¼����������¼ģ�͡�

*/