#ifndef WBWIDGETAPI_H
#define WBWIDGETAPI_H

#include <QtCore>
#include <QGraphicsSceneDragDropEvent>

#include "WBW3CWidgetAPI.h"
#include "core/WBDownloadManager.h"

class WBGraphicsScene;
class WBGraphicsWidgetItem;
class WBGraphicsW3CWidgetItem;

class WBWidgetMessageAPI;
class WBDatastoreAPI;
class WBDocumentDatastoreAPI;

class WBWidgetUniboardAPI : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int pageCount READ pageCount SCRIPTABLE true)

    Q_PROPERTY(int currentPageNumber READ currentPageNumber SCRIPTABLE true)

    Q_PROPERTY(QString uuid READ uuid SCRIPTABLE true)
    
    Q_PROPERTY(QString lang READ lang SCRIPTABLE true)

    Q_PROPERTY(QObject* messages READ messages SCRIPTABLE true)

    Q_PROPERTY(QObject* datastore READ datastore SCRIPTABLE true)

    public:
        WBWidgetUniboardAPI(WBGraphicsScene *pScene, WBGraphicsWidgetItem *widget = 0);
        ~WBWidgetUniboardAPI();

        QObject* messages();

        QObject* datastore();

    public slots:
        void setScene(WBGraphicsScene* pScene)
        {
            mScene = pScene;
        }

        void setTool(const QString& toolString);

        void setPenColor(const QString& penColor);

        void setMarkerColor(const QString& penColor);

        QString pageThumbnail(const int pageNumber);

        void zoom(const qreal factor, const qreal x, const qreal y);

        void move(const qreal x, const qreal y);

        void moveTo(const qreal x, const qreal y);

        void drawLineTo(const qreal x, const qreal y, const qreal pWidth);

        void eraseLineTo(const qreal x, const qreal y, const qreal pWidth);

        void clear();

        void setBackground(bool pIsDark, bool pIsCrossed);

        void addObject(QString pUrl, int width = 0, int height = 0, int x = 0, int y = 0, bool background = false);

        void resize(qreal width, qreal height);

        QString locale();

        void setPreference(const QString& key, QString value);

        QString preference(const QString& key, const QString& pDefault = QString());

        QStringList preferenceKeys();

        void showMessage(const QString& message);

        void centerOn(const qreal x, const qreal y);

        void addText(const QString& text, const qreal x, const qreal y, const int height = -1, const QString& font = ""
                , bool bold = false, bool italic = false);

        void returnStatus(const QString& method, const QString& status);
        void usedMethods(QStringList methods);
        void response(bool correct);

        void sendFileMetadata(QString metaData);

        void enableDropOnWidget (bool enable = true);

        void ProcessDropEvent(QGraphicsSceneDragDropEvent *);
        bool isDropableData(const QMimeData *pMimeData) const;

	private slots:
        void onDownloadFinished(bool pSuccess, sDownloadFileDesc desc, QByteArray pData);

	private:
        inline void registerIDWidget(int id){webDownloadIds.append(id);}
        inline bool takeIDWidget(int id);

    private:
        QString uuid();

        QString lang();

        int pageCount();

        int currentPageNumber();
        QString getObjDir();
        QString createMimeText(bool downloaded, const QString &mimeType, const QString &fileName);
        bool supportedTypeHeader(const QString &) const;
        QString boolToStr(bool value) const {return value ? "true" : "false";}

        WBGraphicsScene* mScene;

        WBGraphicsWidgetItem* mGraphicsWidget;

        bool mIsVisible;

        WBWidgetMessageAPI* mMessagesAPI;

        WBDatastoreAPI* mDatastoreAPI;
        QList<int> webDownloadIds;
};

class WBDatastoreAPI : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QObject* document READ document SCRIPTABLE true)

    public:
        WBDatastoreAPI(WBGraphicsW3CWidgetItem *widget);
        virtual ~WBDatastoreAPI(){;}

        QObject* document();

    private:
        WBDocumentDatastoreAPI* mDocumentDatastore;

};

// WBDocumentDatastoreAPI：继承自 `WBW3CWebStorage` ，专门处理与文档相关的数据存储的具体操作，如获取键、获取项、设置项、移除项和清空等。
// 例如，在一个图形应用中，可以使用 `WBWidgetUniboardAPI` 对象来控制场景和部件的各种属性和操作，通过 `WBDatastoreAPI` 和 `WBDocumentDatastoreAPI` 来管理和操作与部件相关的数据存储。
// 这段代码定义了一个名为 WBDocumentDatastoreAPI 的类，它继承自 WBW3CWebStorage 类，并且使用了 Qt 的元对象系统（通过 Q_OBJECT 宏）。
// WBDocumentDatastoreAPI 类实现了 WBW3CWebStorage 接口，提供了对文档数据存储的管理能力。
// 通过继承 WBW3CWebStorage，它包含了操作存储数据的核心方法，如获取、设置、移除数据项以及清空整个存储。
// 通过 mGraphicsW3CWidget 成员变量，它可能能够与特定的图形小部件进行交互，实现更复杂的数据存储和管理逻辑。
class WBDocumentDatastoreAPI : public WBW3CWebStorage
{
    // WBDocumentDatastoreAPI 继承自 WBW3CWebStorage。
    // 这意味着 WBDocumentDatastoreAPI 类将实现 WBW3CWebStorage 中声明的纯虚函数，
    // 即 key(int index)、getItem(const QString& key)、setItem(const QString& key, const QString& value)、removeItem(const QString& key)、clear() 和 length() 函数。
    Q_OBJECT

    public:
        WBDocumentDatastoreAPI(WBGraphicsW3CWidgetItem *graphicsWidget);

        virtual ~WBDocumentDatastoreAPI();

    public slots:
        virtual QString key(int index);                                     // 继承的纯虚函数，返回指定索引位置的存储键。
        virtual QString getItem(const QString& key);                        // 实现从 WBW3CWebStorage 继承的纯虚函数，返回指定键对应的值。
        virtual void setItem(const QString& key, const QString& value);     // 实现从 WBW3CWebStorage 继承的纯虚函数，设置指定键对应的值。
        virtual void removeItem(const QString& key);                        // 实现从 WBW3CWebStorage 继承的纯虚函数，移除指定键及其对应的值。
        virtual void clear();                                               // 实现从 WBW3CWebStorage 继承的纯虚函数，清空存储中的所有键值对。

    protected:
        virtual int length();                                               // 实现从 WBW3CWebStorage 继承的纯虚函数，返回存储中键值对的数量。

    private:
        WBGraphicsW3CWidgetItem* mGraphicsW3CWidget;                        // 用于在类内部持有一个 WBGraphicsW3CWidgetItem 对象的指针，可能用于与图形小部件相关的数据交互。

};

#endif // WBWIDGETAPI_H
