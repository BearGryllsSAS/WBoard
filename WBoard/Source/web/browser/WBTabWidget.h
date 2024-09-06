#ifndef WBTABWIDGET_H
#define WBTABWIDGET_H

#include <QtWidgets>
#include <QShortcut>
#include <QStackedWidget>
#include <QCompleter>
#include <QTabBar>
#include <QWebEnginePage>
#include <QTabWidget>
#include <QLineEdit>

class WBTabBar : public QTabBar
{
    Q_OBJECT;

public:
    WBTabBar(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

signals:
	void newTab();
	void cloneTab(int index);
	void closeTab(int index);
	void closeOtherTabs(int index);
	void reloadTab(int index);
	void reloadAllTabs();
	void tabMoveRequested(int fromIndex, int toIndex);

private slots:
    void selectTabAction();
    void cloneTab();
    void closeTab();
    void closeOtherTabs();
    void reloadTab();
    void contextMenuRequested(const QPoint &position);

private:
    QList<QShortcut*> mTabShortcuts;
    friend class WBTabWidget;

    QPoint mDragStartPos;
};

#include <QtWebEngine>


class WBWebView;

class WBWebActionMapper : public QObject
{
    Q_OBJECT;

    public:
        WBWebActionMapper(QAction *root, QWebEnginePage::WebAction webAction, QObject *parent);
		QWebEnginePage::WebAction webAction() const;
        void addChild(QAction *action);
        void updateCurrent(QWebEnginePage *currentParent);

    private slots:
        void rootTriggered();
        void childChanged();
        void rootDestroyed();
        void currentDestroyed();

    private:
		QWebEnginePage *mCurrentParent;
        QAction *mRootAction;
		QWebEnginePage::WebAction mWebAction;
};


class WBTabWidget : public QTabWidget
{
    Q_OBJECT

    signals:
        // tab widget signals
        void loadPage(const QString &url);

        // current tab signals
        void setCurrentTitle(const QString &url);
        void showStatusBarMessage(const QString &message);
        void linkHovered(const QString &link);
        void loadProgress(int progress);
        void loadFinished(bool pOk);
        void geometryChangeRequested(const QRect &geometry);
        void menuBarVisibilityChangeRequested(bool visible);
        void statusBarVisibilityChangeRequested(bool visible);
        void toolBarVisibilityChangeRequested(bool visible);
        void printRequested(QWebChannel *frame);

    public:
        WBTabWidget(QWidget *parent = 0);
        void clear();
        void addWebAction(QAction *action, QWebEnginePage::WebAction webAction);

        QWidget *lineEditStack() const;
        QLineEdit *currentLineEdit() const;
        WBWebView *currentWebView() const;
        WBWebView *webView(int index) const;
        QLineEdit *lineEdit(int index) const;
        int webViewIndex(WBWebView *webView) const;

        QByteArray saveState() const;
        bool restoreState(const QByteArray &state);

        WBTabBar* tabBar() { return mTabBar; }
        QStackedWidget* lineEdits() { return mLineEdits; }

        void setLineEditStackVisible(bool visible) {mLineEdits->setVisible(visible);mLineEdits->hide();}

    protected:
        void mouseDoubleClickEvent(QMouseEvent *event);
        void contextMenuEvent(QContextMenuEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
        void paintEvent(QPaintEvent * event);
        QRect addTabButtonRect();

    public slots:
        void loadUrlInCurrentTab(const QUrl &url);
        WBWebView *newTab(bool makeCurrent = true);
        void cloneTab(int index = -1);
        void closeTab(int index = -1);
        void closeOtherTabs(int index);
        void reloadTab(int index = -1);
        void reloadAllTabs();
        void nextTab();
        void previousTab();

    private slots:
        void currentChanged(int index);
        void aboutToShowRecentTabsMenu();
        void aboutToShowRecentTriggeredAction(QAction *action);
        void webViewLoadStarted();
        void webViewIconChanged();
        void webViewTitleChanged(const QString &title);
        void webViewUrlChanged(const QUrl &url);
        void lineEditReturnPressed();
        void windowCloseRequested();
        void moveTab(int fromIndex, int toIndex);

    private:
        QAction *mRecentlyClosedTabsAction;

        QMenu *mRecentlyClosedTabsMenu;
        static const int sRecentlyClosedTabsSize = 10;
        QList<QUrl> mRecentlyClosedTabs;
        QList<WBWebActionMapper*> mWebActions;

        QCompleter *mLineEditCompleter;
        QStackedWidget *mLineEdits;
        WBTabBar *mTabBar;
        QPixmap mAddTabIcon;
};

#endif // WBTABWIDGET_H

/*

��δ��붨����һ����Ϊ `WBTabWidget` �� Qt �࣬���̳��� `QTabWidget` ��ʵ����һЩ�������ǩҳ����Ĺ��ܡ������Ƕ�ÿ�������ͳ�Ա��������ϸ������

### ���캯������������
1. **`WBTabWidget(QWidget *parent = 0)`**:
   - ���캯������ʼ�� `WBTabWidget` ����
   - ����һ�� `QWidget` ���͵ĸ�����ָ�룬���������ø����ڵĲ㼶��ϵ��

### ������Ա����
2. **`void clear()`**:
   - ������б�ǩҳ�����ݡ�

3. **`void addWebAction(QAction *action, QWebEnginePage::WebAction webAction)`**:
   - ��һ�� `QAction` ������ӵ���ǰ�� `QWebEnginePage` ��ָ�������У�ͨ�����ڹ������������Ĳ˵���

4. **`QWidget *lineEditStack() const`**:
   - ����һ�� `QWidget` ָ�룬��ָ��ָ��һ���ѵ��ı༭�ؼ���

5. **`QLineEdit *currentLineEdit() const`**:
   - ���ص�ǰ���ǩҳ�е� `QLineEdit` ����

6. **`WBWebView *currentWebView() const`**:
   - ���ص�ǰ���ǩҳ�е� `WBWebView` ����

7. **`WBWebView *webView(int index) const`**:
   - ����ָ�������� `WBWebView` ����

8. **`QLineEdit *lineEdit(int index) const`**:
   - ����ָ�������� `QLineEdit` ����

9. **`int webViewIndex(WBWebView *webView) const`**:
   - ���ظ����� `WBWebView` �����ڱ�ǩҳ�е�������

10. **`QByteArray saveState() const`**:
    - �����ǩҳ�ĵ�ǰ״̬������һ�� `QByteArray` ����

11. **`bool restoreState(const QByteArray &state)`**:
    - �ָ���ǩҳ��״̬������һ�� `QByteArray` ������Ϊ������

12. **`WBTabBar* tabBar()`**:
    - ���� `WBTabBar` ���󣬱�ʾ��ǩ����

13. **`QStackedWidget* lineEdits()`**:
    - ���� `QStackedWidget` ���󣬰������е� `QLineEdit` �ؼ���

14. **`void setLineEditStackVisible(bool visible)`**:
    - ���� `lineEdits` �Ŀɼ��ԣ����� `QStackedWidget` ����ʾ�����ء�

### ������Ա����
15. **`void mouseDoubleClickEvent(QMouseEvent *event)`**:
    - �������˫���¼���ͨ�����ڱ�ǩҳ��˫������������±�ǩҳ�ȡ�

16. **`void contextMenuEvent(QContextMenuEvent *event)`**:
    - ���������Ĳ˵��¼���Ϊ��ǩҳ�ṩ�Ҽ��˵���

17. **`void mouseReleaseEvent(QMouseEvent *event)`**:
    - ��������ͷ��¼�������������ק��ǩҳ��������꽻��������

18. **`void paintEvent(QPaintEvent * event)`**:
    - ��������¼��������Զ�����ơ�

19. **`QRect addTabButtonRect()`**:
    - ���ء���ӱ�ǩ����ť�ľ����������ڻ��ƻ������ť��λ�á�

### �����ۺ���
20. **`void loadUrlInCurrentTab(const QUrl &url)`**:
    - �ڵ�ǰ��ǩҳ�м���ָ���� `QUrl`��

21. **`WBWebView *newTab(bool makeCurrent = true)`**:
    - ����һ���µı�ǩҳ�������±�ǩҳ�е� `WBWebView` ���󣬲��� `makeCurrent` �����Ƿ��±�ǩҳ����Ϊ��ǰ���ǩҳ��

22. **`void cloneTab(int index = -1)`**:
    - ����ָ�������ı�ǩҳ������ `index` Ĭ��Ϊ -1����ʾ���Ƶ�ǰ��ǩҳ��

23. **`void closeTab(int index = -1)`**:
    - �ر�ָ�������ı�ǩҳ������ `index` Ĭ��Ϊ -1����ʾ�رյ�ǰ��ǩҳ��

24. **`void closeOtherTabs(int index)`**:
    - �رճ���ָ������������б�ǩҳ��

25. **`void reloadTab(int index = -1)`**:
    - ���¼���ָ�������ı�ǩҳ������ `index` Ĭ��Ϊ -1����ʾ���¼��ص�ǰ��ǩҳ��

26. **`void reloadAllTabs()`**:
    - ���¼������б�ǩҳ��

27. **`void nextTab()`**:
    - �л�����һ����ǩҳ��

28. **`void previousTab()`**:
    - �л�����һ����ǩҳ��

### ˽�вۺ���
29. **`void currentChanged(int index)`**:
    - ����ǰ��ǩҳ�仯�Ĳۺ�����`index` Ϊ�µı�ǩҳ������

30. **`void aboutToShowRecentTabsMenu()`**:
    - ������ʾ����رյı�ǩҳ�˵�ʱ�Ĳۺ�����

31. **`void aboutToShowRecentTriggeredAction(QAction *action)`**:
    - ������ʾ����رձ�ǩҳ�Ĳ���ʱ�Ĳۺ�����

32. **`void webViewLoadStarted()`**:
    - ������ҳ���ؿ�ʼ�Ĳۺ�����

33. **`void webViewIconChanged()`**:
    - ������ҳͼ��仯�Ĳۺ�����

34. **`void webViewTitleChanged(const QString &title)`**:
    - ������ҳ����仯�Ĳۺ�����

35. **`void webViewUrlChanged(const QUrl &url)`**:
    - ������ҳ URL �仯�Ĳۺ�����

36. **`void lineEditReturnPressed()`**:
    - ���� `QLineEdit` �ؼ��еĻس��������¼��Ĳۺ�����

37. **`void windowCloseRequested()`**:
    - �����ڹر�����Ĳۺ�����

38. **`void moveTab(int fromIndex, int toIndex)`**:
    - �����ǩҳλ���ƶ��Ĳۺ���������ǩҳ�� `fromIndex` �ƶ��� `toIndex`��

### ˽�г�Ա����
- **`QAction *mRecentlyClosedTabsAction`**:
  - ������������رյı�ǩҳ�˵���

- **`QMenu *mRecentlyClosedTabsMenu`**:
  - �洢����رյı�ǩҳ�˵���

- **`static const int sRecentlyClosedTabsSize`**:
  - ��������رձ�ǩҳ�����������

- **`QList<QUrl> mRecentlyClosedTabs`**:
  - �洢����رյı�ǩҳ�� URL �б�

- **`QList<WBWebActionMapper*> mWebActions`**:
  - �洢����ҳ������ص�ӳ������

- **`QCompleter *mLineEditCompleter`**:
  - �Զ���ȫ�������� `QLineEdit` �ؼ���

- **`QStackedWidget *mLineEdits`**:
  - ά������ `QLineEdit` �ؼ��Ķѵ��ؼ���

- **`WBTabBar *mTabBar`**:
  - �Զ���ı�ǩ���ؼ���

- **`QPixmap mAddTabIcon`**:
  - ����ӱ�ǩ����ť��ͼ�ꡣ

��δ����������ṩ��һ�����ܷḻ�ı�ǩҳ�ؼ�ʵ�֣������˱�ǩҳ������ҳ���ء���ʷ��¼������Զ�����Ƶȹ��ܡ�

*/
