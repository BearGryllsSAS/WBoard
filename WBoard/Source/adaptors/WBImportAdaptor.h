#ifndef WBIMPORTADAPTOR_H_
#define WBIMPORTADAPTOR_H_

/*WBImportAdaptor 是一个抽象基类，定义了导入适配器的通用接口，包括文件类型支持和文件选择过滤器等。
WBPageBasedImportAdaptor 和 WBDocumentBasedImportAdaptor 分别是基于页面和基于文档的具体导入适配器子类，分别实现了不同类型文件导入的具体逻辑。
这些类结构有助于在 Qt 应用程序中实现灵活的文件导入功能，支持不同的导入场景和操作。*/

#include <QtGui>

class WBGraphicsItem;
class WBGraphicsScene;
class WBDocumentProxy;

// WBImportAdaptor：作为所有导入适配器的基类。用于文件导入接口定义
// WBImportAdaptor 是一个抽象基类，用于定义导入适配器的接口。
class WBImportAdaptor : public QObject
{
    Q_OBJECT;

    protected:
        WBImportAdaptor(bool _documentBased, QObject *parent = 0);
        virtual ~WBImportAdaptor();

    public:
        virtual QStringList supportedExtentions() = 0;                                                  // 子类必须实现，返回支持的文件扩展名列表。
        virtual QString importFileFilter() = 0;                                                         // 子类必须实现，返回用于文件选择对话框的过滤器。

        bool isDocumentBased(){return documentBased;}                                                   // 返回 documentBased 成员变量的值，指示是否基于文档。

    private:
        bool documentBased;                                             
        
};

// WBPageBasedImportAdaptor：继承自 WBImportAdaptor，是基于页面的导入适配器的抽象类
// WBPageBasedImportAdaptor 继承自 WBImportAdaptor，表示基于页面的导入适配器。
class WBPageBasedImportAdaptor : public WBImportAdaptor
{
	protected:
        WBPageBasedImportAdaptor(QObject *parent = 0);

	public:
        virtual QList<WBGraphicsItem*> import(const QUuid& uuid, const QString& filePath) = 0;          // 子类必须实现，导入指定文件并返回导入的图形项列表。
        virtual void placeImportedItemToScene(WBGraphicsScene* scene, WBGraphicsItem* item) = 0;        // 子类必须实现，将导入的图形项放置到场景中。
        virtual const QString& folderToCopy() = 0;                                                      // 子类必须实现，返回导入时需要复制的文件夹路径。
};      

// WBDocumentBasedImportAdaptor：同样继承自 WBImportAdaptor，是基于文档的导入适配器的抽象类。
// WBDocumentBasedImportAdaptor 继承自 WBImportAdaptor，表示基于文档的导入适配器。
class WBDocumentBasedImportAdaptor : public WBImportAdaptor
{
	protected:
        WBDocumentBasedImportAdaptor(QObject *parent = 0);
	public:
    virtual WBDocumentProxy* importFile(const QFile& pFile, const QString& pGroup) = 0;                 // 子类必须实现，导入指定文件并返回文档代理对象。
    virtual bool addFileToDocument(WBDocumentProxy* pDocument, const QFile& pFile) = 0;                 // 子类必须实现，将文件添加到文档中。
};


#endif /* WBIMPORTADAPTOR_H_ */
