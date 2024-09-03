#ifndef WBGRAPHICSITEMSACTIONS_H
#define WBGRAPHICSITEMSACTIONS_H

/*这段代码定义了多个类和枚举，用于管理图形项在白板应用中的动作。通过这些类，可以实现音频播放、页面导航和网页链接等功能。每个动作类都继承自 WBGraphicsItemAction 基类，确保了统一的接口和行为。*/

#include <QObject>
#include <QtMultimedia>
#include <iostream>

// 这个枚举类型定义了图形项在白板应用中移动页面的动作类型
enum eWBGraphicsItemMovePageAction {
    eMoveToFirstPage = 0,   // 移动到第一页
    eMoveToLastPage,        // 移动到最后一页
    eMoveToPreviousPage,    // 移动到上一页
    eMoveToNextPage,        // 移动到下一页
    eMoveToPage             // 移动到指定页
};

// 这个枚举类型定义了图形项动作的链接类型
enum eWBGraphicsItemLinkType
{
    eLinkToAudio = 0,       // 链接到音频
    eLinkToPage,            // 链接到页面
    eLinkToWebUrl           // 链接到Web URL
};

// WBGraphicsItemAction 是一个抽象基类，继承自 QObject。
// 主要用于处理图形项的各种操作和动作，定义了图形项操作的基本接口, 声明了纯虚函数 play() 用于执行操作、save() 用于保存操作相关的数据、actionRemoved() 用于处理操作被移除的情况。
class WBGraphicsItemAction : public QObject
{
    Q_OBJECT
public:
    // 构造函数 WBGraphicsItemAction 接受一个 eWBGraphicsItemLinkType 参数，确定动作的链接类型。
    WBGraphicsItemAction(eWBGraphicsItemLinkType linkType,QObject* parent = 0);
    // 纯虚函数 play() 和 save() 必须在派生类中实现。
    virtual void play() = 0;                    
    virtual QStringList save() = 0;             
    // actionRemoved() 是一个虚函数，可以在派生类中重写，用于处理操作被移除的情况
    virtual void actionRemoved();
    // path() 返回一个空字符串，派生类可以重写以返回特定路径。
    virtual QString path() {return "";}
    // linkType() 返回动作的链接类型。
    eWBGraphicsItemLinkType linkType() { return mLinkType;}

private:
    eWBGraphicsItemLinkType mLinkType;
};

// WBGraphicsItemPlayAudioAction 表示播放音频的动作类，是用于播放音频的图形项操作类, 存储了音频文件的路径、媒体播放器对象等。
// 实现了 play() 方法来播放音频, 实现了 save() 方法来保存相关数据, 定义了 onSourceHide() 槽函数，可能用于处理音频源隐藏的情况。
class WBGraphicsItemPlayAudioAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // 构造函数可以传入音频文件路径和其他参数。
    WBGraphicsItemPlayAudioAction(QString audioFile, bool onImport = true, QObject* parent = 0);
    WBGraphicsItemPlayAudioAction();
    ~WBGraphicsItemPlayAudioAction();
    // play() 和 save() 函数实现了从基类继承的纯虚函数。
    void play();
    QStringList save();
    // actionRemoved() 是一个虚函数，可以在需要时重写。
    void actionRemoved();
    // path() 返回音频文件路径。
    QString path() {return mAudioPath;}
    void setPath(QString audioPath);
    // fullPath() 返回完整的音频文件路径。
    QString fullPath();

public slots:
    // onSourceHide() 是一个槽函数，可能在源隐藏时触发。
    void onSourceHide();

private:
    QString mAudioPath;
	QMediaPlayer *mAudioOutput;
    bool mIsLoading;
    QString mFullPath;
};

// WBGraphicsItemMoveToPageAction 表示移动到页面的动作类，是用于移动到特定页面的图形项操作类。
// 包含了移动页面的操作类型（如移动到首页、末页、上一页、下一页或指定页）和目标页面的索引, 实现了 play() 方法来执行移动操作, 实现了 save() 方法来保存相关信息。
class WBGraphicsItemMoveToPageAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // 构造函数接受移动操作类型和页面号码。
    WBGraphicsItemMoveToPageAction(eWBGraphicsItemMovePageAction actionType, int page = 0, QObject* parent = 0);
    // play() 和 save() 函数实现了从基类继承的纯虚函数。
    void play();
    QStringList save();
    // page() 返回移动到的页面号。
    int page(){return mPage;}
    // actionType() 返回移动操作的类型。
    eWBGraphicsItemMovePageAction actionType(){return mActionType;}

private:
    eWBGraphicsItemMovePageAction mActionType;
    int mPage;
};

// WBGraphicsItemLinkToWebPageAction 表示链接到网页的动作类，是用于链接到网页的图形项操作类。
// 存储了链接的网页 URL，实现了 play() 方法来执行打开网页的操作、实现了 save() 方法来保存链接相关 的数据。
class WBGraphicsItemLinkToWebPageAction : public WBGraphicsItemAction
{
    Q_OBJECT

public:
    // 构造函数接受一个 URL 参数。
    WBGraphicsItemLinkToWebPageAction(QString url, QObject* parent = 0);
    // play() 和 save() 函数实现了从基类继承的纯虚函数。
    void play();
    QStringList save();
    // url() 返回链接的 URL。
    QString url(){return mUrl;}

private:
    QString mUrl;
};

#endif // WBGRAPHICSITEMSACTIONS_H
