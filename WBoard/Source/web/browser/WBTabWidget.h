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

这段代码定义了一个名为 `WBTabWidget` 的 Qt 类，它继承自 `QTabWidget` 并实现了一些浏览器标签页管理的功能。下面是对每个函数和成员变量的详细分析：

### 构造函数与析构函数
1. **`WBTabWidget(QWidget *parent = 0)`**:
   - 构造函数，初始化 `WBTabWidget` 对象。
   - 传入一个 `QWidget` 类型的父窗口指针，可用于设置父窗口的层级关系。

### 公共成员函数
2. **`void clear()`**:
   - 清除所有标签页和内容。

3. **`void addWebAction(QAction *action, QWebEnginePage::WebAction webAction)`**:
   - 将一个 `QAction` 对象添加到当前的 `QWebEnginePage` 的指定操作中，通常用于工具栏或上下文菜单。

4. **`QWidget *lineEditStack() const`**:
   - 返回一个 `QWidget` 指针，该指针指向一个堆叠的编辑控件。

5. **`QLineEdit *currentLineEdit() const`**:
   - 返回当前活动标签页中的 `QLineEdit` 对象。

6. **`WBWebView *currentWebView() const`**:
   - 返回当前活动标签页中的 `WBWebView` 对象。

7. **`WBWebView *webView(int index) const`**:
   - 返回指定索引的 `WBWebView` 对象。

8. **`QLineEdit *lineEdit(int index) const`**:
   - 返回指定索引的 `QLineEdit` 对象。

9. **`int webViewIndex(WBWebView *webView) const`**:
   - 返回给定的 `WBWebView` 对象在标签页中的索引。

10. **`QByteArray saveState() const`**:
    - 保存标签页的当前状态并返回一个 `QByteArray` 对象。

11. **`bool restoreState(const QByteArray &state)`**:
    - 恢复标签页的状态，接受一个 `QByteArray` 对象作为参数。

12. **`WBTabBar* tabBar()`**:
    - 返回 `WBTabBar` 对象，表示标签栏。

13. **`QStackedWidget* lineEdits()`**:
    - 返回 `QStackedWidget` 对象，包含所有的 `QLineEdit` 控件。

14. **`void setLineEditStackVisible(bool visible)`**:
    - 设置 `lineEdits` 的可见性，控制 `QStackedWidget` 的显示或隐藏。

### 保护成员函数
15. **`void mouseDoubleClickEvent(QMouseEvent *event)`**:
    - 处理鼠标双击事件，通常用于标签页的双击操作，如打开新标签页等。

16. **`void contextMenuEvent(QContextMenuEvent *event)`**:
    - 处理上下文菜单事件，为标签页提供右键菜单。

17. **`void mouseReleaseEvent(QMouseEvent *event)`**:
    - 处理鼠标释放事件，可能用于拖拽标签页或其他鼠标交互操作。

18. **`void paintEvent(QPaintEvent * event)`**:
    - 处理绘制事件，进行自定义绘制。

19. **`QRect addTabButtonRect()`**:
    - 返回“添加标签”按钮的矩形区域，用于绘制或调整按钮的位置。

### 公共槽函数
20. **`void loadUrlInCurrentTab(const QUrl &url)`**:
    - 在当前标签页中加载指定的 `QUrl`。

21. **`WBWebView *newTab(bool makeCurrent = true)`**:
    - 创建一个新的标签页，返回新标签页中的 `WBWebView` 对象，参数 `makeCurrent` 控制是否将新标签页设置为当前活动标签页。

22. **`void cloneTab(int index = -1)`**:
    - 复制指定索引的标签页，参数 `index` 默认为 -1，表示复制当前标签页。

23. **`void closeTab(int index = -1)`**:
    - 关闭指定索引的标签页，参数 `index` 默认为 -1，表示关闭当前标签页。

24. **`void closeOtherTabs(int index)`**:
    - 关闭除了指定索引外的所有标签页。

25. **`void reloadTab(int index = -1)`**:
    - 重新加载指定索引的标签页，参数 `index` 默认为 -1，表示重新加载当前标签页。

26. **`void reloadAllTabs()`**:
    - 重新加载所有标签页。

27. **`void nextTab()`**:
    - 切换到下一个标签页。

28. **`void previousTab()`**:
    - 切换到上一个标签页。

### 私有槽函数
29. **`void currentChanged(int index)`**:
    - 处理当前标签页变化的槽函数，`index` 为新的标签页索引。

30. **`void aboutToShowRecentTabsMenu()`**:
    - 即将显示最近关闭的标签页菜单时的槽函数。

31. **`void aboutToShowRecentTriggeredAction(QAction *action)`**:
    - 即将显示最近关闭标签页的操作时的槽函数。

32. **`void webViewLoadStarted()`**:
    - 处理网页加载开始的槽函数。

33. **`void webViewIconChanged()`**:
    - 处理网页图标变化的槽函数。

34. **`void webViewTitleChanged(const QString &title)`**:
    - 处理网页标题变化的槽函数。

35. **`void webViewUrlChanged(const QUrl &url)`**:
    - 处理网页 URL 变化的槽函数。

36. **`void lineEditReturnPressed()`**:
    - 处理 `QLineEdit` 控件中的回车键按下事件的槽函数。

37. **`void windowCloseRequested()`**:
    - 处理窗口关闭请求的槽函数。

38. **`void moveTab(int fromIndex, int toIndex)`**:
    - 处理标签页位置移动的槽函数，将标签页从 `fromIndex` 移动到 `toIndex`。

### 私有成员变量
- **`QAction *mRecentlyClosedTabsAction`**:
  - 操作用于最近关闭的标签页菜单。

- **`QMenu *mRecentlyClosedTabsMenu`**:
  - 存储最近关闭的标签页菜单。

- **`static const int sRecentlyClosedTabsSize`**:
  - 定义最近关闭标签页的最大数量。

- **`QList<QUrl> mRecentlyClosedTabs`**:
  - 存储最近关闭的标签页的 URL 列表。

- **`QList<WBWebActionMapper*> mWebActions`**:
  - 存储与网页操作相关的映射器。

- **`QCompleter *mLineEditCompleter`**:
  - 自动补全器，用于 `QLineEdit` 控件。

- **`QStackedWidget *mLineEdits`**:
  - 维护所有 `QLineEdit` 控件的堆叠控件。

- **`WBTabBar *mTabBar`**:
  - 自定义的标签栏控件。

- **`QPixmap mAddTabIcon`**:
  - “添加标签”按钮的图标。

这段代码整体上提供了一个功能丰富的标签页控件实现，包含了标签页管理、网页加载、历史记录管理和自定义绘制等功能。

*/
