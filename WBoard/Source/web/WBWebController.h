#ifndef WBWEBCONTROLLER_H_
#define WBWEBCONTROLLER_H_

#include <QtWidgets>
#include <QtWebEngine>
#include <QWebEnginePage>
#include <QWebEngineView>

#include "WBOEmbedParser.h"

class WBBrowserWindow;
class WBApplication;
class WBTrapFlashController;
class WBMainWindow;
class WBWebToolsPalette;
class WBWebView;
class WBServerXMLHttpRequest;

class WBWebController : public QObject
{
    Q_OBJECT

public:
    WBWebController(WBMainWindow* mainWindow);
    virtual ~WBWebController();
    void closing();
    void adaptToolBar();

    QPixmap captureCurrentPage();

    void showTabAtTop(bool attop);

    void loadUrl(const QUrl& url);

    QWebEngineView* createNewTab();

    QUrl currentPageUrl() const;

    void show();

    WBBrowserWindow* GetCurrentWebBrowser(){return mCurrentWebBrowser;}

protected:
    void setupPalettes();
    QPixmap getScreenPixmap();

signals:
	void imageCaptured(const QPixmap& pCapturedPixmap, bool pageMode, const QUrl& source);
	void activeWebPageChanged(WBWebView* pWebView);

public slots:
    void screenLayoutChanged();

    void setSourceWidget(QWidget* pWidget);
    void captureWindow();
    void customCapture();
    void toogleMirroring(bool checked);

    QWidget* controlView()
    {
        return mBrowserWidget;
    }

    void captureoEmbed();
    void captureEduMedia();

    bool isOEmbedable(const QUrl& pUrl);
    bool hasEmbeddedContent();
    void getEmbeddableContent();

    bool isEduMedia(const QUrl& pUrl);

    void copy();
    void paste();
    void cut();
	void triggerWebTools(bool checked);

private slots:
	void activePageChanged();
	void toggleWebTrap(bool checked);
	void onOEmbedParsed(QVector<sOEmbedContent> contents);

private:
    void initialiazemOEmbedProviders();
    void webBrowserInstance();
    void lookForEmbedContent(QString* pHtml, QString tag, QString attribute, QList<QUrl>* pList);
    void checkForOEmbed(QString* pHtml);

    WBMainWindow *mMainWindow;

    WBBrowserWindow* mCurrentWebBrowser;

    QWidget* mBrowserWidget;

    WBWebToolsPalette* mToolsCurrentPalette;

    bool mToolsPalettePositionned;

    bool mDownloadViewIsVisible;

    QStringList mOEmbedProviders;           // �����ҳ�ĳ�ʼ����

    WBOEmbedParser mOEmbedParser;

};

#endif /* WBWEBCONTROLLER_H_ */

/*

��δ��붨����һ�� `WBWebController` �࣬�̳��� `QObject`�����ڹ���������ĸ��ֹ��ܡ�������ÿ�������ľ������÷�����

1. **���캯�� (`WBWebController(WBMainWindow* mainWindow)`)**����ʼ�� `WBWebController` ���󣬲�����һ�� `WBMainWindow` ָ�롣

2. **�������� (`virtual ~WBWebController()`)**������ `WBWebController` �����ͷ���Դ��

3. **`void closing()`**������ر��¼��������漰����򱣴�״̬��

4. **`void adaptToolBar()`**���������������á�

5. **`QPixmap captureCurrentPage()`**������ǰ��ҳ��ͼ�񲢷��ء�

6. **`void showTabAtTop(bool attop)`**������ѡ��Ƿ���ʾ�ڶ�����

7. **`void loadUrl(const QUrl& url)`**������ָ���� URL��

8. **`QWebEngineView* createNewTab()`**������������һ���µ��������ǩҳ��ͼ��

9. **`QUrl currentPageUrl() const`**����ȡ��ǰҳ��� URL��

10. **`void show()`**����ʾ `WBWebController` ���ڻ���ͼ��

11. **`WBBrowserWindow* GetCurrentWebBrowser()`**����ȡ��ǰ����������ڶ���

12. **`void setupPalettes()`**�����õ�ɫ�壬���ڵ���������ɫ����

13. **`QPixmap getScreenPixmap()`**����ȡ��Ļ��ͼ�񣨿������ڽ�ͼ��¼������

14. **�ź� (`imageCaptured(const QPixmap& pCapturedPixmap, bool pageMode, const QUrl& source)`)**����ͼ�񱻲���ʱ���䣬����ͼ��ģʽ����Դ URL��

15. **�ź� (`activeWebPageChanged(WBWebView* pWebView)`)**�������ҳ�ı�ʱ���䣬�����µ� `WBWebView` ����

16. **�� (`screenLayoutChanged()`)**��������Ļ���ָ��ĵ��¼���

17. **�� (`setSourceWidget(QWidget* pWidget)`)**������ԴС�������������ڲ������ʾ����

18. **�� (`captureWindow()`)**�������������ڵ�ͼ��

19. **�� (`customCapture()`)**�������Զ���Ĳ��������

20. **�� (`toogleMirroring(bool checked)`)**���л�����ģʽ��

21. **�� (`captureoEmbed()`)**������Ƕ������ݡ�

22. **�� (`captureEduMedia()`)**���������ý�����ݡ�

23. **�� (`isOEmbedable(const QUrl& pUrl)`)**�����ָ�� URL �Ƿ���Խ��� oEmbed Ƕ�롣

24. **�� (`hasEmbeddedContent()`)**������Ƿ���Ƕ�����ݡ�

25. **�� (`getEmbeddableContent()`)**����ȡ��Ƕ������ݡ�

26. **�� (`isEduMedia(const QUrl& pUrl)`)**�����ָ�� URL �Ƿ����ڽ���ý�塣

27. **�� (`copy()`)**�����Ƶ�ǰѡ�е����ݡ�

28. **�� (`paste()`)**��ճ�����ݡ�

29. **�� (`cut()`)**�����е�ǰѡ�е����ݡ�

30. **�� (`triggerWebTools(bool checked)`)**������ web ���߹��ܣ����� `checked` ״̬��

31. **˽�в� (`activePageChanged()`)**������ҳ������¼���

32. **˽�в� (`toggleWebTrap(bool checked)`)**���л� web ����ģʽ��

33. **˽�в� (`onOEmbedParsed(QVector<sOEmbedContent> contents)`)**������ oEmbed ���ݽ�����Ľ����

34. **˽�з��� (`initialiazemOEmbedProviders()`)**����ʼ�� oEmbed �ṩ���б�

35. **˽�з��� (`webBrowserInstance()`)**����ȡ�򴴽������ʵ����

36. **˽�з��� (`lookForEmbedContent(QString* pHtml, QString tag, QString attribute, QList<QUrl>* pList)`)**������ HTML �����е�Ƕ�����ݡ�

37. **˽�з��� (`checkForOEmbed(QString* pHtml)`)**����� HTML �����Ƿ���� oEmbed ��Ϣ��

������˵������ฺ�������ҳ�������ͼ�����������á�oEmbed ��Ƕ�����ݵĴ���ȹ��ܡ�

*/
