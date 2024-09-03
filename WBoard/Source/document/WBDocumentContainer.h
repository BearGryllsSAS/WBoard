#ifndef WBDOCUMENTCONTAINER_H_
#define WBDOCUMENTCONTAINER_H_

/*WBDocumentContainer����Ҫ���ڹ����ĵ���صĲ��������ݡ������˶��ĵ�����ͼ��һϵ�в������������ʼ�������¡���ӡ�ɾ��������ȡ�֪ͨ������������ĵ������á�ҳ��ĸ��¡�����ͼ�Ĳ����������*/

#include <QtWidgets>
#include "WBDocumentProxy.h"

// ��δ��붨����һ����Ϊ WBDocumentContainer ���࣬����һ���̳��� QObject �Ķ������ڹ����ĵ���صĲ������źš�
// WBDocumentContainer ��ʵ���˶��ĵ�����Ĺ���Ͳ��������������ĵ��������ĵ�ҳ����������ͼ�ȹ��ܡ�
// ��ͨ���ź��������������ͨ�ţ������ⲿ������ĵ�״̬�仯ʱ������Ӧ��
// �������ʹ���ĵ�����ģ���ܹ������ش����ĵ������������û�����������߼�ģ��������õĽ�����Э����
class WBDocumentContainer : public QObject
{
    Q_OBJECT

    public:
        WBDocumentContainer(QObject * parent = 0);
        virtual ~WBDocumentContainer();

        void setDocument(WBDocumentProxy* document, bool forceReload = false);                  // ���õ�ǰ���ĵ����󣬲����� forceReload ���������Ƿ�ǿ�����¼��ء�
        void pureSetDocument(WBDocumentProxy *document) {mCurrentDocument = document;}          // �����õ�ǰ�ĵ����󣬲���������������

        WBDocumentProxy* selectedDocument(){return mCurrentDocument;}                           // ���ص�ǰѡ�е��ĵ�����
        int pageCount(){return mCurrentDocument->pageCount();}                                  // ���ص�ǰ�ĵ���ҳ����
        const QPixmap* pageAt(int index)                                                        // �������������ĵ�ҳ������ͼ���������������Χ�򷵻� NULL��
        {
            if (index < mDocumentThumbs.size())
                return mDocumentThumbs[index];
            else
            {
                return NULL;
            }
        }

        // ��������̬������������ת��ҳ�������ͳ�������֮��Ĺ�ϵ������ʵ��δ�ڴ�������ʾ��
        static int pageFromSceneIndex(int sceneIndex);
        static int sceneIndexFromPage(int sceneIndex);

        // ��Щ�����������ĵ�ҳ�ĸ��ơ��ƶ���ɾ������ʼ������ӡ����º����¼�������ͼ�Ȳ�����
        void duplicatePages(QList<int>& pageIndexes);
        bool movePageToIndex(int source, int target);
        void deletePages(QList<int>& pageIndexes);
        void clearThumbPage();
        void initThumbPage();
        void addPage(int index);
        void addPixmapAt(const QPixmap *pix, int index);
        void updatePage(int index);
        void addEmptyThumbPage();
        void reloadThumbnails();

        void insertThumbPage(int index);

    private:
        WBDocumentProxy* mCurrentDocument;                                          // ��ǰ������ĵ���������Ϊ WBDocumentProxy*��
        QList<const QPixmap*>  mDocumentThumbs;                                     // �����ĵ�����ͼ���б�ÿ��Ԫ���� QPixmap ָ�롣

    protected:
        void deleteThumbPage(int index);                                            // ɾ��ָ������������ͼ��
        void updateThumbPage(int index);                                            // ����ָ������������ͼ��
            
    signals:
        // ��Щ�ź�����֪ͨ������������ĵ����á�ҳ����¡�����ͼ������������ṩ�������������߼����֮���ͨ�Ż��ơ�
        void documentSet(WBDocumentProxy* document);
        void documentPageUpdated(int index);

        void initThumbnailsRequired(WBDocumentContainer* source);
        void addThumbnailRequired(WBDocumentContainer* source, int index);
        void removeThumbnailRequired(int index);
        void moveThumbnailRequired(int from, int to);
        void updateThumbnailsRequired();

        void documentThumbnailsUpdated(WBDocumentContainer* source);
};

#endif /* WBDOCUMENTPROXY_H_ */

/*

��δ��붨����һ�� `WBDocumentContainer` �࣬���ڹ����ĵ�����ز��������ݡ�������ÿ����������ϸ���ͣ�

1. **���캯������������**:
   - `WBDocumentContainer(QObject *parent = 0);`: ���캯�������ڳ�ʼ�����ʵ����
   - `virtual ~WBDocumentContainer();`: ��������������������Դ��

2. **�ĵ�����**:
   - `void setDocument(WBDocumentProxy* document, bool forceReload = false);`: ���õ�ǰ���ĵ�����`forceReload` ���������Ƿ�ǿ�����¼����ĵ���
   - `void pureSetDocument(WBDocumentProxy *document)`: �����õ�ǰ�ĵ����󣬲���������������

3. **��ȡ��ǰ�ĵ���Ϣ**:
   - `WBDocumentProxy* selectedDocument()`: ���ص�ǰѡ�е��ĵ�����
   - `int pageCount()`: ���ص�ǰ�ĵ���ҳ����
   - `const QPixmap* pageAt(int index)`: �������������ĵ�ҳ������ͼ���������������Χ������ `NULL`��

4. **ҳ��ͳ�������ת��**:
   - `static int pageFromSceneIndex(int sceneIndex);`: ����������ת��Ϊҳ��������
   - `static int sceneIndexFromPage(int sceneIndex);`: ��ҳ������ת��Ϊ����������

5. **ҳ�����**:
   - `void duplicatePages(QList<int>& pageIndexes);`: ����ָ��ҳ���б�
   - `bool movePageToIndex(int source, int target);`: ��ҳ���Դ�����ƶ���Ŀ��������
   - `void deletePages(QList<int>& pageIndexes);`: ɾ��ָ��ҳ���б�
   - `void clearThumbPage();`: �������ͼҳ�档
   - `void initThumbPage();`: ��ʼ������ͼҳ�档
   - `void addPage(int index);`: ��ָ�����������һ��ҳ�档
   - `void addPixmapAt(const QPixmap *pix, int index);`: ��ָ�����������һ�� `QPixmap` ����ͼ��
   - `void updatePage(int index);`: ����ָ����������ҳ�档
   - `void addEmptyThumbPage();`: ���һ���յ�����ͼҳ�档
   - `void reloadThumbnails();`: ���¼�����������ͼ��
   - `void insertThumbPage(int index);`: ��ָ������������һ������ͼҳ�档

6. **˽�г�Ա����**:
   - `void deleteThumbPage(int index);`: ɾ��ָ������������ͼ��
   - `void updateThumbPage(int index);`: ����ָ������������ͼ��

7. **�ź�**:
   - `void documentSet(WBDocumentProxy* document);`: �ĵ����õ�֪ͨ�źš�
   - `void documentPageUpdated(int index);`: �ĵ�ҳ����µ�֪ͨ�źš�
   - `void initThumbnailsRequired(WBDocumentContainer* source);`: ��Ҫ��ʼ������ͼ��֪ͨ�źš�
   - `void addThumbnailRequired(WBDocumentContainer* source, int index);`: ��Ҫ�������ͼ��֪ͨ�źš�
   - `void removeThumbnailRequired(int index);`: ��Ҫ�Ƴ�����ͼ��֪ͨ�źš�
   - `void moveThumbnailRequired(int from, int to);`: ��Ҫ�ƶ�����ͼ��֪ͨ�źš�
   - `void updateThumbnailsRequired();`: ��Ҫ��������ͼ��֪ͨ�źš�
   - `void documentThumbnailsUpdated(WBDocumentContainer* source);`: �ĵ�����ͼ���µ�֪ͨ�źš�

����ͨ���źźͲۻ����������������ͨ�ţ�ȷ�����ĵ�����ʱ����ؽ�����߼�ģ����Լ�ʱ��Ӧ��

*/
