#ifndef WBEXPORTADAPTOR_H_
#define WBEXPORTADAPTOR_H_

/*WBExportAdaptor����һ������ QObject �ĳ�����࣬��Ҫ���ڶ������ĵ�������ص�ͨ�ýӿں�һЩ�������ܡ�
�����Ϊ��ͬ�ĵ����������ṩ��һ��ͳһ�Ľӿڿ�ܣ�ʹ���ڴ�����ֲ�ͬ���͵��ĵ���������ʱ��������ѭ��ͬ�Ļ����ṹ�ͷ�����ͬʱ����ÿ������ĵ���������������������ʵ���ض��ĵ����߼�����Ϊ*/

/*�����Ƕ������õ���ϸ������
- `exportName()`Ҫ���������ʵ�֣�����ָ���������������ơ�
- `exportExtention()`Ĭ�Ϸ��ؿ��ַ��������������д���ṩ�ض��ĵ����ļ���չ����
- `persist(WBDocumentProxy* pDocument)`Ҫ���������ʵ�֣�ִ��ʵ�ʵ��ĵ��־û���������������- `persistDocument(WBDocumentProxy* pDocument, const QString& filename)`Ĭ��ʵ�֣������ṩ��һЩͨ�õ��ĵ��־û��߼���
- `associatedActionactionAvailableFor(const QModelIndex &selectedIndex)`Ĭ�Ϸ��� false �����������д�Ը����ض������ж���ز����Ƿ���á�
- askForFileName �� askForDirName ���������û������ļ�����Ŀ¼����
- persistLocally ����������д��ʵ�ֱ��س־û��ľ����߼���
- showErrorsList ��������ʾ�����б�
�ܵ���˵�������Ϊ��ͬ�ĵ����������ṩ��һ��ͳһ�Ľӿڿ�ܣ�ʹ���ڴ�����ֲ�ͬ���͵��ĵ���������ʱ��������ѭ��ͬ�Ļ����ṹ�ͷ�����ͬʱ����ÿ������ĵ���������������������ʵ���ض��ĵ����߼�����Ϊ��
���磬����������һ������ PDFExportAdaptor �̳��� WBExportAdaptor ����������дexportName ��������"PDFExport" ����д persist ����ʵ�ֽ��ĵ�����Ϊ PDF ��ʽ�ľ����߼��������� PDF �������ص���д������غ�����*/

#include <QtWidgets>

class WBDocumentProxy;

// ��δ��붨����һ����Ϊ WBExportAdaptor ���࣬����һ������ Qt �ĳ����࣬���ڵ����ĵ�����������
// WBExportAdaptor ����һ��������࣬�����˵����ĵ���ͨ�ýӿں�һЩĬ��ʵ�֡�
// ���������ʵ�ִ��麯�� exportName() �� persist() ��ʵ�־���ĵ����߼���
// ���໹�ṩ��һЩ��ѡ���麯���ͱ������������ڶ��ƻ�������Ϊ�������ļ�����Ŀ¼���������Լ���ʾ������Ϣ�ȹ��ܡ�
// ͨ��������ƣ�����ʵ�ֲ�ͬ�����ĵ��ĵ������������������� Qt ������� QAction�����ɣ���֧���û������Ͳ�����
class WBExportAdaptor : public QObject
{
    Q_OBJECT

    public:
        WBExportAdaptor(QObject *parent = 0);
        virtual ~WBExportAdaptor();

        // ���麯�������������ʵ�֣����ص��������ơ�
        virtual QString exportName() = 0;

        // �麯����Ĭ�Ϸ��ؿ��ַ��������Ա�������д�Է����ض��ĵ����ļ���չ����
        virtual QString exportExtention() { return "";}

        // ���麯�������������ʵ�֣����ڳ־û����������ĵ���
        virtual void persist(WBDocumentProxy* pDocument) = 0;

        // �麯�����ṩĬ��ʵ�֣�������������д��ָ���ض����ĵ��־û���Ϊ��
        virtual bool persistsDocument(WBDocumentProxy* pDocument, const QString& filename);

        // �麯���������Ƿ���Ը����������й����������ã�Ĭ�ϲ����á�
        virtual bool associatedActionactionAvailableFor(const QModelIndex &selectedIndex) {Q_UNUSED(selectedIndex); return false;}

        // �麯�����������úͻ�ȡ��ϸ���ģʽ��״̬��
        QAction *associatedAction() {return mAssociatedAction;}
        void setAssociatedAction(QAction *pAssociatedAction) {mAssociatedAction = pAssociatedAction;}

        // ��ȡ�������������������Ķ�������
        virtual void setVerbose(bool verbose)
        {
            mIsVerbose = verbose;
        }

        virtual bool isVerbose() const
        {
            return mIsVerbose;
        }

    protected:
        // �������û������ļ�����
        QString askForFileName(WBDocumentProxy* pDocument, const QString& pDialogTitle);

        // �������û�����Ŀ¼����
        QString askForDirName(WBDocumentProxy* pDocument, const QString& pDialogTitle);

        // �ṩ�ĵ����س־û���Ĭ��ʵ�֡�
        virtual void persistLocally(WBDocumentProxy* pDocumentProxy, const QString &pDialogTitle);

        // ��ʾ�����б�
        void showErrorsList(QList<QString> errorsList);

        // �������ͣ����ڱ���Ƿ�������ϸ���ģʽ��
        bool mIsVerbose;                           
        // �������������Ķ���������Ϊ QAction*��
        QAction* mAssociatedAction;

};

#endif /* WBEXPORTADAPTOR_H_ */
