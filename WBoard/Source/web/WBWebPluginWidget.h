#ifndef WBWEBPLUGINWIDGET_H
#define WBWEBPLUGINWIDGET_H

#include <QWidget>
#include <QProgressBar>
#include <QToolButton>

#include "network/WBHttpGet.h"

class WBWebPluginWidget : public QWidget
{
    Q_OBJECT

public:
    WBWebPluginWidget(const QUrl &url, QWidget *parent = 0);
    virtual ~WBWebPluginWidget();

    virtual QString title() const;

protected:
    virtual void handleFile(const QString &filePath) = 0;

    virtual void paintEvent(QPaintEvent *paintEvent) = 0;
    virtual void resizeEvent(QResizeEvent *event);

private slots:
    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
    void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData);

private:
    QProgressBar mLoadingProgressBar;
};

#endif // WBWEBPLUGINWIDGET_H

/*

��δ��붨����һ����Ϊ `WBWebPluginWidget` �� C++ �࣬�����̳��� `QWidget`�����ڴ���һ���Զ���� Qt С��������������ϸ������δ���Ĺ��ܺ���ƣ�

### ͷ�ļ�����

1. **ͷ�ļ�������**��
   ```cpp
   #ifndef WBWEBPLUGINWIDGET_H
   #define WBWEBPLUGINWIDGET_H
   ```
   ��Щ�����ڷ�ֹͷ�ļ�����ΰ�������ɱ������⡣

2. **������Ҫ�� Qt ͷ�ļ�**��
   ```cpp
   #include <QWidget>
   #include <QProgressBar>
   #include <QToolButton>
   ```
   - `QWidget` �� Qt �Ļ������ڲ����ࡣ
   - `QProgressBar` ������ʾ��������
   - `QToolButton` ��һ�����߰�ť����������ļ���û�н�һ��ʹ�ã���������ʵ�����õ���

   ```cpp
   #include "network/WBHttpGet.h"
   ```
   - `WBHttpGet` ��һ���Զ���������࣬�������ڴ��� HTTP GET ����

3. **������**��
   ```cpp
   class WBWebPluginWidget : public QWidget
   {
       Q_OBJECT
   ```
   - `WBWebPluginWidget` �̳��� `QWidget`����ʾ����һ�� Qt ���ڲ�����
   - `Q_OBJECT` ���� Qt Ԫ����ϵͳ��һ���֣����������źźͲۻ��ơ�

4. **������Ա����**��
   ```cpp
   public:
       WBWebPluginWidget(const QUrl &url, QWidget *parent = 0);
       virtual ~WBWebPluginWidget();
       virtual QString title() const;
   ```
   - ���캯�� `WBWebPluginWidget` ����һ�� `QUrl` ��һ����ѡ�ĸ�������
   - ���������� `~WBWebPluginWidget`��
   - �麯�� `title` ���ڻ�ȡ�����ı��⣬ͨ���������д�˺������ṩ����ı��⡣

5. **������Ա����**��
   ```cpp
   protected:
       virtual void handleFile(const QString &filePath) = 0;
       virtual void paintEvent(QPaintEvent *paintEvent) = 0;
       virtual void resizeEvent(QResizeEvent *event);
   ```
   - `handleFile` ��һ�����麯����= 0�������ڴ����ļ����������ʵ�����������
   - `paintEvent` ��һ�����麯���������ͼ�¼����������ʵ�����������
   - `resizeEvent` �����ڲ����Ĵ�С�����¼������������д���Զ�����Ϊ��

6. **˽�вۺ���**��
   ```cpp
   private slots:
       void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
       void downloadFinished(bool pSuccess, QUrl sourceUrl, QString pContentTypeHeader, QByteArray pData);
   ```
   - `downloadProgress` �� `downloadFinished` �����ڴ������ؽ��Ⱥ���������źŵĲۺ�����

7. **˽�г�Ա����**��
   ```cpp
   private:
       QProgressBar mLoadingProgressBar;
   ```
   - `mLoadingProgressBar` ��һ��������������������ʾ���صĽ��ȡ�

### �ܽ�

`WBWebPluginWidget` ����һ���Զ���� Qt С������������ʾ��������صĹ��ܡ�
���ṩ�����ؽ��ȵ���ʾ���ܣ�ͨ�� `QProgressBar`������������һЩ�麯���ʹ��麯�������ڴ����ļ�����ͼ�͵�����С�¼���
��������һЩ�ۺ������ڴ������صĽ��Ⱥ�����¼���������Ҫʵ����Щ���麯�����ṩ����Ĺ��ܺ���Ϊ��

- **���캯��** ���ڳ�ʼ���������������� URL��
- **�麯��** �ṩ�ӿ������Զ����ͼ���ļ�����
- **�ۺ���** �����������صĽ��Ⱥ�����¼���

*/