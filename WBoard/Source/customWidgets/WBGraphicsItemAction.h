#ifndef WBGRAPHICSITEMSACTIONS_H
#define WBGRAPHICSITEMSACTIONS_H

/*��δ��붨���˶�����ö�٣����ڹ���ͼ�����ڰװ�Ӧ���еĶ�����ͨ����Щ�࣬����ʵ����Ƶ���š�ҳ�浼������ҳ���ӵȹ��ܡ�ÿ�������඼�̳��� WBGraphicsItemAction ���࣬ȷ����ͳһ�Ľӿں���Ϊ��*/

#include <QObject>
#include <QtMultimedia>
#include <iostream>

// ���ö�����Ͷ�����ͼ�����ڰװ�Ӧ�����ƶ�ҳ��Ķ�������
enum eWBGraphicsItemMovePageAction {
    eMoveToFirstPage = 0,   // �ƶ�����һҳ
    eMoveToLastPage,        // �ƶ������һҳ
    eMoveToPreviousPage,    // �ƶ�����һҳ
    eMoveToNextPage,        // �ƶ�����һҳ
    eMoveToPage             // �ƶ���ָ��ҳ
};

// ���ö�����Ͷ�����ͼ���������������
enum eWBGraphicsItemLinkType
{
    eLinkToAudio = 0,       // ���ӵ���Ƶ
    eLinkToPage,            // ���ӵ�ҳ��
    eLinkToWebUrl           // ���ӵ�Web URL
};

// WBGraphicsItemAction ��һ��������࣬�̳��� QObject��
// ��Ҫ���ڴ���ͼ����ĸ��ֲ����Ͷ�����������ͼ��������Ļ����ӿ�, �����˴��麯�� play() ����ִ�в�����save() ���ڱ��������ص����ݡ�actionRemoved() ���ڴ���������Ƴ��������
class WBGraphicsItemAction : public QObject
{
    Q_OBJECT
public:
    // ���캯�� WBGraphicsItemAction ����һ�� eWBGraphicsItemLinkType ������ȷ���������������͡�
    WBGraphicsItemAction(eWBGraphicsItemLinkType linkType,QObject* parent = 0);
    // ���麯�� play() �� save() ��������������ʵ�֡�
    virtual void play() = 0;                    
    virtual QStringList save() = 0;             
    // actionRemoved() ��һ���麯��������������������д�����ڴ���������Ƴ������
    virtual void actionRemoved();
    // path() ����һ�����ַ����������������д�Է����ض�·����
    virtual QString path() {return "";}
    // linkType() ���ض������������͡�
    eWBGraphicsItemLinkType linkType() { return mLinkType;}

private:
    eWBGraphicsItemLinkType mLinkType;
};

// WBGraphicsItemPlayAudioAction ��ʾ������Ƶ�Ķ����࣬�����ڲ�����Ƶ��ͼ���������, �洢����Ƶ�ļ���·����ý�岥��������ȡ�
// ʵ���� play() ������������Ƶ, ʵ���� save() �����������������, ������ onSourceHide() �ۺ������������ڴ�����ƵԴ���ص������
class WBGraphicsItemPlayAudioAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // ���캯�����Դ�����Ƶ�ļ�·��������������
    WBGraphicsItemPlayAudioAction(QString audioFile, bool onImport = true, QObject* parent = 0);
    WBGraphicsItemPlayAudioAction();
    ~WBGraphicsItemPlayAudioAction();
    // play() �� save() ����ʵ���˴ӻ���̳еĴ��麯����
    void play();
    QStringList save();
    // actionRemoved() ��һ���麯������������Ҫʱ��д��
    void actionRemoved();
    // path() ������Ƶ�ļ�·����
    QString path() {return mAudioPath;}
    void setPath(QString audioPath);
    // fullPath() ������������Ƶ�ļ�·����
    QString fullPath();

public slots:
    // onSourceHide() ��һ���ۺ�����������Դ����ʱ������
    void onSourceHide();

private:
    QString mAudioPath;
	QMediaPlayer *mAudioOutput;
    bool mIsLoading;
    QString mFullPath;
};

// WBGraphicsItemMoveToPageAction ��ʾ�ƶ���ҳ��Ķ����࣬�������ƶ����ض�ҳ���ͼ��������ࡣ
// �������ƶ�ҳ��Ĳ������ͣ����ƶ�����ҳ��ĩҳ����һҳ����һҳ��ָ��ҳ����Ŀ��ҳ�������, ʵ���� play() ������ִ���ƶ�����, ʵ���� save() ���������������Ϣ��
class WBGraphicsItemMoveToPageAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // ���캯�������ƶ��������ͺ�ҳ����롣
    WBGraphicsItemMoveToPageAction(eWBGraphicsItemMovePageAction actionType, int page = 0, QObject* parent = 0);
    // play() �� save() ����ʵ���˴ӻ���̳еĴ��麯����
    void play();
    QStringList save();
    // page() �����ƶ�����ҳ��š�
    int page(){return mPage;}
    // actionType() �����ƶ����������͡�
    eWBGraphicsItemMovePageAction actionType(){return mActionType;}

private:
    eWBGraphicsItemMovePageAction mActionType;
    int mPage;
};

// WBGraphicsItemLinkToWebPageAction ��ʾ���ӵ���ҳ�Ķ����࣬���������ӵ���ҳ��ͼ��������ࡣ
// �洢�����ӵ���ҳ URL��ʵ���� play() ������ִ�д���ҳ�Ĳ�����ʵ���� save() ����������������� �����ݡ�
class WBGraphicsItemLinkToWebPageAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // ���캯������һ�� URL ������
    WBGraphicsItemLinkToWebPageAction(QString url, QObject* parent = 0);
    // play() �� save() ����ʵ���˴ӻ���̳еĴ��麯����
    void play();
    QStringList save();
    // url() �������ӵ� URL��
    QString url(){return mUrl;}

private:
    QString mUrl;
};

#endif // WBGRAPHICSITEMSACTIONS_H
