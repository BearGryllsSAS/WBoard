#include <QRegExp>
#include <QStringList>
#include <QDomDocument>
#include <QDomElement>
#include <QDomNode>
#include <QJSEngine>
#include <QDebug>

#include "WBOEmbedParser.h"

#include "core/memcheck.h"

WBOEmbedParser::WBOEmbedParser(QObject *parent, const char* name)
{
    Q_UNUSED(parent);
    setObjectName(name);
    mParsedTitles.clear();
    connect(this, SIGNAL(parseContent(QString)), this, SLOT(onParseContent(QString)));
}

WBOEmbedParser::~WBOEmbedParser()
{

}

void WBOEmbedParser::setNetworkAccessManager(QNetworkAccessManager *nam)
{
    mpNam = nam;
    connect(mpNam, SIGNAL(finished(QNetworkReply*)), this, SLOT(onFinished(QNetworkReply*)));
}

void WBOEmbedParser::parse(const QString& html)
{
    mContents.clear();
    QString query = "<link([^>]*)>";
    QRegExp exp(query);
    QStringList results;
    int count = 0;
    int pos = 0;
    while ((pos = exp.indexIn(html, pos)) != -1) {
        ++count;
        pos += exp.matchedLength();
        QStringList res = exp.capturedTexts();
        if("" != res.at(1)){
            results << res.at(1);
        }
    }

    QVector<QString> oembedUrls;

    if(2 <= results.size()){
        for(int i=1; i<results.size(); i++){
            if("" != results.at(i)){
                QString qsNode = QString("<link%0>").arg(results.at(i));
                QDomDocument domDoc;
                domDoc.setContent(qsNode);
                QDomNode linkNode = domDoc.documentElement();

                //  At this point, we have a node that is the <link> element. Now we have to parse its attributes
                //  in order to check if it is a oEmbed node or not
                QDomAttr typeAttribute = linkNode.toElement().attributeNode("type");
                if(typeAttribute.value().contains("oembed")){
                    // The node is an oembed one! We have to get the url and the type of oembed encoding
                    QDomAttr hrefAttribute = linkNode.toElement().attributeNode("href");
                    QString url = hrefAttribute.value();
                    oembedUrls.append(url);
                }
            }
        }
    }

    mPending = oembedUrls.size();

    if(0 == mPending){
        emit oembedParsed(mContents);
    }else{
        // Here we start the parsing (finally...)!
        for(int i=0; i<oembedUrls.size(); i++){
            emit parseContent(oembedUrls.at(i));
        }
    }
}

/**
  /brief Extract the oembed infos from the JSON
  @param jsonUrl as the url of the JSON file
  */
sOEmbedContent WBOEmbedParser::getJSONInfos(const QString &json)
{
    sOEmbedContent content;

	QJSValue scriptValue;
	QJSEngine scriptEngine;
    scriptValue = scriptEngine.evaluate ("(" + json + ")");

	 QString providerUrl = scriptValue.property("provider_url").toString();
    QString title = scriptValue.property("title").toString();
    QString html = scriptValue.property("html").toString();
    QString authorName = scriptValue.property("author_name").toString();
    int height = scriptValue.property("height").toInt();
    int thumbnailWidth = scriptValue.property("thumbnail_width").toInt();
    int width = scriptValue.property("width").toInt();
    float version = scriptValue.property("version").toString().toFloat();
    QString authorUrl = scriptValue.property("author_url").toString();
    QString providerName = scriptValue.property("provider_name").toString();
    QString thumbnailUrl = scriptValue.property("thumbnail_url").toString();
    QString type = scriptValue.property("type").toString();
    int thumbnailHeight = scriptValue.property("thumbnail_height").toInt();

    content.providerUrl = providerUrl;
    content.title = title;
    content.html = html;
    content.author = authorName;
    content.height = height;
    content.thumbWidth = thumbnailWidth;
    content.width = width;
    content.version = version;
    content.authorUrl = authorUrl;
    content.providerName = providerName;
    content.thumbUrl = thumbnailUrl;
    content.type = type;
    content.thumbHeight = thumbnailHeight;

    if("photo" == content.type){
        content.url = scriptValue.property("url").toString();
    }else if("video" == content.type){
        QStringList strl = content.html.split('\"');
        for(int i=0; i<strl.size(); i++){
            if(strl.at(i).endsWith("src=") && strl.size() > (i+1)){
                content.url = strl.at(i+1);
            }
        }
    }

    return content;
}

/**
  /brief Extract the oembed infos from the XML
  @param xmlUrl as the url of the XML file
  */
sOEmbedContent WBOEmbedParser::getXMLInfos(const QString &xml)
{
    sOEmbedContent content;

    QDomDocument domDoc;
    domDoc.setContent(xml);
    QDomNode oembed = domDoc.documentElement();

    QDomNodeList children = oembed.toElement().childNodes();

    for(int i=0; i<children.size(); i++){
        QDomNode node = children.at(i);
        QString tag = node.nodeName();
        QString value = node.toElement().text();
        if("provider_url" == tag){
            content.providerUrl = value;
        }else if("title" == tag){
            content.title = value;
        }else if("html" == tag){
            content.html = value;
        }else if("author_name" == tag){
            content.author = value;
        }else if("height" == tag){
            content.height = value.toInt();
        }else if("thumbnail_width" == tag){
            content.thumbWidth = value.toInt();
        }else if("width" == tag){
            content.width = value.toInt();
        }else if("version" == tag){
            content.version = value.toFloat();
        }else if("author_url" == tag){
            content.authorUrl = value;
        }else if("provider_name" == tag){
            content.providerName = value;
        }else if("thumbnail_url" == tag){
            content.thumbUrl = value;
        }else if("type" == tag){
            content.type = value;
        }else if("thumbnail_height" == tag){
            content.thumbHeight = value.toInt();
        }else if("url" == tag){
            content.url = value; // This case appears only for type = photo
        }
    }

    if("video" == content.type){
        QStringList strl = content.html.split('\"');
        for(int i=0; i<strl.size(); i++){
            if(strl.at(i).endsWith("src=") && strl.size() > (i+1)){
                content.url = strl.at(i+1);
            }
        }
    }

    return content;
}

void WBOEmbedParser::onParseContent(QString url)
{
    QUrl qurl = QUrl::fromEncoded(url.toLatin1());

    QNetworkRequest req;
    req.setUrl(qurl);
    if(NULL != mpNam){
        mpNam->get(req);
    }
}

void WBOEmbedParser::onFinished(QNetworkReply *reply)
{
    if(QNetworkReply::NoError == reply->error()){
        QString receivedDatas = reply->readAll().constData();
        sOEmbedContent crntContent;
        // The received datas can be in two different formats: JSON or XML
        if(receivedDatas.contains("<oembed>")){
            // XML !
            crntContent = getXMLInfos(receivedDatas);
        }else if(receivedDatas.contains("{\"provider_url")){
            // JSON !
            crntContent = getJSONInfos(receivedDatas);
        }

        //  As we don't want duplicates, we have to check if the content title has already
        //  been parsed.
        if("" != crntContent.title && !mParsedTitles.contains(crntContent.title)){
            mParsedTitles << crntContent.title;
            mContents << crntContent;
        }

    }else{
        //  We decided to not handle the error case here. If there is a problem with
        //  getting the oembed content information, we just don't handle it: the content
        //  will not be available for importation.
    }

    // Decrement the number of content to analyze
    mPending--;
    if(0 == mPending){
        //  All the oembed contents have been parsed. We notify it!
        emit oembedParsed(mContents);
    }
}

/*

这段代码定义了一个 `WBOEmbedParser` 类，用于解析网页中的 oEmbed 信息。具体功能和每个函数的作用如下：

### `WBOEmbedParser` 类

1. **构造函数 `WBOEmbedParser(QObject *parent, const char* name)`**
   - 初始化 `WBOEmbedParser` 对象。设置对象名称，并连接 `parseContent` 信号到 `onParseContent` 槽函数。

2. **析构函数 `~WBOEmbedParser()`**
   - 析构函数，不执行任何操作。

3. **`setNetworkAccessManager(QNetworkAccessManager *nam)`**
   - 设置网络访问管理器 `mpNam`，并将 `QNetworkAccessManager` 的 `finished` 信号连接到 `onFinished` 槽函数。

4. **`parse(const QString& html)`**
   - 解析 HTML 内容，提取 `<link>` 元素的属性。检查这些 `<link>` 元素是否包含 oEmbed 相关的信息（`type` 属性包含 "oembed"），并收集 oEmbed URL。若找到 oEmbed URL，则发射 `parseContent` 信号以处理每个 URL。

5. **`getJSONInfos(const QString &json)`**
   - 解析 JSON 格式的 oEmbed 数据。使用 `QJSEngine` 执行 JSON 数据，并提取相关字段（如 `provider_url`、`title`、`html`、`author_name` 等）。根据 oEmbed 的 `type` 字段（"photo" 或 "video"），进一步提取 URL。

6. **`getXMLInfos(const QString &xml)`**
   - 解析 XML 格式的 oEmbed 数据。使用 `QDomDocument` 解析 XML 数据，提取相关字段（如 `provider_url`、`title`、`html`、`author_name` 等）。根据 oEmbed 的 `type` 字段（"photo" 或 "video"），进一步提取 URL。

7. **`onParseContent(QString url)`**
   - 处理 oEmbed URL。将 URL 转换为 `QUrl` 并创建 `QNetworkRequest`。如果 `mpNam` 不为空，则发起网络请求获取 URL 对应的内容。

8. **`onFinished(QNetworkReply *reply)`**
   - 处理网络请求完成的结果。根据返回的数据格式（JSON 或 XML），调用相应的解析函数（`getJSONInfos` 或 `getXMLInfos`）。检查内容的标题是否已解析，以避免重复。更新 `mPending` 计数器，并在所有 oEmbed 内容解析完成时发射 `oembedParsed` 信号。

### 总结

`WBOEmbedParser` 类用于从 HTML 内容中提取 oEmbed URL，并通过网络请求获取 oEmbed 数据。根据数据格式（JSON 或 XML），它解析数据并提取相关信息。解析结果不包括重复的标题，并在所有内容解析完成后发射信号通知解析结束。

*/