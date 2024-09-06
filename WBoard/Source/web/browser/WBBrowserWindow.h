#ifndef WBBROWSERMAINWINDOW_H
#define WBBROWSERMAINWINDOW_H

#include <QtWidgets>
#include <QtWebEngine>

class WBChaseWidget;
class WBTabWidget;
class WBToolbarSearch;
class WBWebView;
class WBHistoryManager;
class WBDownloadManager_;
class UBCookieJar;

#include "ui_mainWindow.h"

class WBBrowserWindow : public QWidget
{
    Q_OBJECT;

public:
    WBBrowserWindow(QWidget *parent = 0, Ui::MainWindow* uniboardMainWindow = 0);
    ~WBBrowserWindow();
    QSize sizeHint() const;

public:
    static QUrl guessUrlFromString(const QString &url);
    WBTabWidget *tabWidget() const;
    WBWebView *currentTabWebView() const;

    //void adaptToolBar(bool wideRes);

    //static WBHistoryManager *historyManager();
    static UBCookieJar *cookieJar();
    static WBDownloadManager_ *downloadManager();

public slots:
    void loadPage(const QString &url);
    void slotHome();

    void loadUrl(const QUrl &url);
    void loadUrlInNewTab(const QUrl &url);

    WBWebView *createNewTab();

    WBWebView* paintWidget();

    void tabCurrentChanged(int);

    void bookmarks();
    void addBookmark();

    void showTabAtTop(bool attop);

    void aboutToShowBackMenu();
    void aboutToShowForwardMenu();
    void openActionUrl(QAction *action);

signals:
    void activeViewPageChanged();
    void activeViewChange(QWidget*);
    void mirroringEnabled(bool checked);

protected:
    void closeEvent(QCloseEvent *event);

private slots:

    void slotLoadProgress(int);
    void slotUpdateStatusbar(const QString &string);
    void slotUpdateWindowTitle(const QString &title = QString());

    void slotFileSaveAs();

    void slotViewZoomIn();
    void slotViewZoomOut();
    void slotViewResetZoom();
    void slotViewZoomTextOnly(bool enable);

    void slotWebSearch();
    void slotToggleInspector(bool enable);
    void slotSelectLineEdit();
    void slotSwapFocus();

    void geometryChangeRequested(const QRect &geometry);

private:
    static WBHistoryManager *sHistoryManager;
    static WBDownloadManager_ *sDownloadManager;

    void setupMenu();
    void setupToolBar();
    void updateStatusbarActionText(bool visible);

    QToolBar *mWebToolBar;
    //WBToolbarSearch *mSearchToolBar;
    WBChaseWidget *mChaseWidget;
    WBTabWidget *mTabWidget;

    //QAction *mSearchAction;

    QString mLastSearch;

    Ui::MainWindow* mUniboardMainWindow;

    QMenu    *mHistoryBackMenu;
    QMenu    *mHistoryForwardMenu;
};

#endif // WBBROWSERMAINWINDOW_H

/*

��δ��붨����һ����Ϊ `WBBrowserWindow` �� Qt �����࣬��Ҫ����ʵ��һ����������ڵĹ��ܡ�������ÿ�������ľ������÷�����

1. **���캯�� `WBBrowserWindow(QWidget *parent = 0, Ui::MainWindow* uniboardMainWindow = 0)`**: ��ʼ�����ڣ���������������һ���Ǹ����ڣ���һ���� `Ui::MainWindow` ��ָ�롣

2. **�������� `~WBBrowserWindow()`**: �������ٴ��ڶ����ͷ������Դ��

3. **`QSize sizeHint() const`**: ���ش��ڵĽ����С��

4. **`static QUrl guessUrlFromString(const QString &url)`**: ���ݸ������ַ����²Ⲣ����һ�� `QUrl` ����

5. **`WBTabWidget *tabWidget() const`**: ���ص�ǰ���ڵı�ǩҳ�ؼ���

6. **`WBWebView *currentTabWebView() const`**: ���ص�ǰ��ǩҳ�� `WBWebView` ����

7. **`void loadPage(const QString &url)`**: ����ָ���� URL ��ַ��

8. **`void slotHome()`**: ��������ҳ��

9. **`void loadUrl(const QUrl &url)`**: ����ָ���� `QUrl` ��ַ��

10. **`void loadUrlInNewTab(const QUrl &url)`**: ���±�ǩҳ�м���ָ���� URL ��ַ��

11. **`WBWebView *createNewTab()`**: ����������һ���µı�ǩҳ��

12. **`WBWebView* paintWidget()`**: �������ڻ��Ƶ� `WBWebView` ����

13. **`void tabCurrentChanged(int)`**: ����ǰ��ǩҳ�仯�Ĳۺ�����

14. **`void bookmarks()`**: ����ǩ�˵���

15. **`void addBookmark()`**: ��ӵ�ǰҳ�浽��ǩ��

16. **`void showTabAtTop(bool attop)`**: �����Ƿ񽫱�ǩҳ��ʾ�ڴ��ڶ�����

17. **`void aboutToShowBackMenu()`**: ������ʾ���˲˵�ʱ�Ĳۺ�����

18. **`void aboutToShowForwardMenu()`**: ������ʾǰ���˵�ʱ�Ĳۺ�����

19. **`void openActionUrl(QAction *action)`**: �����ָ�� `QAction` �� URL ��ַ��

20. **`void closeEvent(QCloseEvent *event)`**: �����ڹر��¼���

21. **`void slotLoadProgress(int)`**: ������ؽ��ȱ仯�Ĳۺ�����

22. **`void slotUpdateStatusbar(const QString &string)`**: ����״̬���ı���

23. **`void slotUpdateWindowTitle(const QString &title = QString())`**: ���´��ڱ��⡣

24. **`void slotFileSaveAs()`**: �������Ϊ��������

25. **`void slotViewZoomIn()`**: �Ŵ���ͼ��

26. **`void slotViewZoomOut()`**: ��С��ͼ��

27. **`void slotViewResetZoom()`**: ������ͼ���š�

28. **`void slotViewZoomTextOnly(bool enable)`**: �������ı���

29. **`void slotWebSearch()`**: ������ҳ����������

30. **`void slotToggleInspector(bool enable)`**: �л����������ʾ״̬��

31. **`void slotSelectLineEdit()`**: ѡ���б༭�ؼ���

32. **`void slotSwapFocus()`**: �л����㡣

33. **`void geometryChangeRequested(const QRect &geometry)`**: ��������״�仯������

### ˽�г�Ա������
- **`sHistoryManager` �� `sDownloadManager`**: ��̬��Ա�����ڹ�����ʷ��¼�����ء�
- **`QToolBar *mWebToolBar`**: ����������
- **`WBChaseWidget *mChaseWidget`**: �������ؼ���
- **`WBTabWidget *mTabWidget`**: ��ǩҳ�ؼ���
- **`QString mLastSearch`**: �����ϴ��������ַ�����
- **`Ui::MainWindow* mUniboardMainWindow`**: `Ui` ����ָ�롣
- **`QMenu *mHistoryBackMenu` �� `mHistoryForwardMenu`**: ���˺�ǰ���˵���

��δ���������ʵ����һ����������ڵĻ������ܣ�������ǩҳ����ҳ����ء���ǩ����ͽ�����µȡ�

*/

