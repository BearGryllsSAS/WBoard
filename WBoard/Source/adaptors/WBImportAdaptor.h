#ifndef WBIMPORTADAPTOR_H_
#define WBIMPORTADAPTOR_H_

/*WBImportAdaptor ��һ��������࣬�����˵�����������ͨ�ýӿڣ������ļ�����֧�ֺ��ļ�ѡ��������ȡ�
WBPageBasedImportAdaptor �� WBDocumentBasedImportAdaptor �ֱ��ǻ���ҳ��ͻ����ĵ��ľ��嵼�����������࣬�ֱ�ʵ���˲�ͬ�����ļ�����ľ����߼���
��Щ��ṹ�������� Qt Ӧ�ó�����ʵ�������ļ����빦�ܣ�֧�ֲ�ͬ�ĵ��볡���Ͳ�����*/

#include <QtGui>

class WBGraphicsItem;
class WBGraphicsScene;
class WBDocumentProxy;

// WBImportAdaptor����Ϊ���е����������Ļ��ࡣ�����ļ�����ӿڶ���
// WBImportAdaptor ��һ��������࣬���ڶ��嵼���������Ľӿڡ�
class WBImportAdaptor : public QObject
{
    Q_OBJECT;

    protected:
        WBImportAdaptor(bool _documentBased, QObject *parent = 0);
        virtual ~WBImportAdaptor();

    public:
        virtual QStringList supportedExtentions() = 0;                                                  // �������ʵ�֣�����֧�ֵ��ļ���չ���б�
        virtual QString importFileFilter() = 0;                                                         // �������ʵ�֣����������ļ�ѡ��Ի���Ĺ�������

        bool isDocumentBased(){return documentBased;}                                                   // ���� documentBased ��Ա������ֵ��ָʾ�Ƿ�����ĵ���

    private:
        bool documentBased;                                             
        
};

// WBPageBasedImportAdaptor���̳��� WBImportAdaptor���ǻ���ҳ��ĵ����������ĳ�����
// WBPageBasedImportAdaptor �̳��� WBImportAdaptor����ʾ����ҳ��ĵ�����������
class WBPageBasedImportAdaptor : public WBImportAdaptor
{
	protected:
        WBPageBasedImportAdaptor(QObject *parent = 0);

	public:
        virtual QList<WBGraphicsItem*> import(const QUuid& uuid, const QString& filePath) = 0;          // �������ʵ�֣�����ָ���ļ������ص����ͼ�����б�
        virtual void placeImportedItemToScene(WBGraphicsScene* scene, WBGraphicsItem* item) = 0;        // �������ʵ�֣��������ͼ������õ������С�
        virtual const QString& folderToCopy() = 0;                                                      // �������ʵ�֣����ص���ʱ��Ҫ���Ƶ��ļ���·����
};      

// WBDocumentBasedImportAdaptor��ͬ���̳��� WBImportAdaptor���ǻ����ĵ��ĵ����������ĳ����ࡣ
// WBDocumentBasedImportAdaptor �̳��� WBImportAdaptor����ʾ�����ĵ��ĵ�����������
class WBDocumentBasedImportAdaptor : public WBImportAdaptor
{
	protected:
        WBDocumentBasedImportAdaptor(QObject *parent = 0);
	public:
    virtual WBDocumentProxy* importFile(const QFile& pFile, const QString& pGroup) = 0;                 // �������ʵ�֣�����ָ���ļ��������ĵ��������
    virtual bool addFileToDocument(WBDocumentProxy* pDocument, const QFile& pFile) = 0;                 // �������ʵ�֣����ļ���ӵ��ĵ��С�
};


#endif /* WBIMPORTADAPTOR_H_ */
