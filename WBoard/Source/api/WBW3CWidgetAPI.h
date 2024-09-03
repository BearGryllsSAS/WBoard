#ifndef WBW3CWIDGETAPI_H_
#define WBW3CWIDGETAPI_H_

#include <QtCore>

class WBGraphicsW3CWidgetItem;
class WBW3CWidgetPreferenceAPI;
class WBW3CWidget;

class WBW3CWidgetAPI : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString id READ id SCRIPTABLE true);
    Q_PROPERTY(QString name READ name SCRIPTABLE true);
    Q_PROPERTY(QString description READ description SCRIPTABLE true);
    Q_PROPERTY(QString author READ author SCRIPTABLE true);

    Q_PROPERTY(QString authorEmail READ authorEmail SCRIPTABLE true);
    Q_PROPERTY(QString authorHref READ authorHref SCRIPTABLE true);
    Q_PROPERTY(QString version READ version SCRIPTABLE true);

    Q_PROPERTY(int width READ width SCRIPTABLE true);
    Q_PROPERTY(int height READ height SCRIPTABLE true);

    Q_PROPERTY(QObject* preferences READ preferences SCRIPTABLE true);

    // Mnemis extensions
    Q_PROPERTY(QString uuid READ uuid SCRIPTABLE true);

    public:
        WBW3CWidgetAPI(WBGraphicsW3CWidgetItem *graphicsWidget, QObject *parent = 0);

        virtual ~WBW3CWidgetAPI();

        QString uuid();

        QString id();
        QString name();
        QString description();
        QString author();
        QString authorEmail();
        QString authorHref();
        QString version();

        QObject* preferences();

        int width();
        int height();

        void openURL(const QString& url);

    private:
        WBGraphicsW3CWidgetItem* mGraphicsW3CWidget;
        WBW3CWidgetPreferenceAPI* mPreferencesAPI;
};

// WBW3CWebStorage����һ��������࣬���ڶ���������洢��صĻ����ӿڡ�
// ��δ��붨����һ����Ϊ WBW3CWebStorage ���࣬���̳��� QObject������ʹ���� Qt ����ṩ�ĺ� Q_OBJECT����ʾ����һ��QObject�����֧࣬���ź���ۻ��ơ�
// ��δ��붨����һ��������� WBW3CWebStorage�����ڱ�ʾ Web �洢�Ľӿڹ淶��
// ͨ�����麯�������˴洢�����Ľӿڣ�������ȡ������ȡֵ������ֵ���Ƴ���ֵ���Լ���մ洢��
// ����Ĵ洢ʵ�ֿ���ͨ���̳� WBW3CWebStorage ��ʵ����Щ���麯������ɣ��Ӷ�ʵ�ֲ�ͬ�� Web �洢��ˣ�������ڱ����ļ������ݿ���������Ĵ洢������
class WBW3CWebStorage : public QObject
{
    Q_OBJECT

    // ������һ������ length������Ϊ����������ͨ�� READ ��ָ����ȡ�����Եķ��� length()�����ұ��Ϊ SCRIPTABLE����ʾ������Կ����ڽű��з��ʡ�
    Q_PROPERTY(int length READ length SCRIPTABLE true);

    public:
        WBW3CWebStorage(QObject *parent = 0)
        : QObject(parent){/* NOOP */}
        virtual ~WBW3CWebStorage(){/* NOOP */}

    public slots:

        virtual QString key(int index) = 0;                                             // ���麯�������ڻ�ȡָ������λ�õĴ洢����
        virtual QString getItem(const QString& key) = 0;                                // ���麯�������ڻ�ȡָ������Ӧ��ֵ��
        virtual void setItem(const QString& key, const QString& value) = 0;             // ���麯������������ָ������Ӧ��ֵ��
        virtual void removeItem(const QString& key) = 0;                                // ���麯���������Ƴ�ָ���������Ӧ��ֵ��
        virtual void clear() = 0;                                                       // ���麯����������մ洢�е����м�ֵ�ԡ�

    protected:  
        virtual int length() = 0;                                                       // ���麯�������ڻ�ȡ�洢�м�ֵ�Ե�������������Ҫʵ������������ṩ����ĳ�����Ϣ��

};

// WBW3CWidgetPreferenceAPI���̳��� WBW3CWebStorage ������ WBGraphicsW3CWidgetItem �������
// ʵ���˻�ȡ������ȡ�������Ƴ������յȲ��������ڴ���ÿؼ���ƫ�����õĴ洢�Ͳ�����
// ���磬��һ��Ӧ���У����Դ��� WBW3CWidgetAPI ��������ȡ������ WBGraphicsW3CWidgetItem �ĸ������ԣ�ͨ��
// preferences ��ȡƫ�����ò����в������� WBW3CWidgetPreferenceAPI ��ר�Ÿ�����ƫ�����õľ���洢���޸��߼���
// ��δ��붨����һ����Ϊ WBW3CWidgetPreferenceAPI ���࣬���̳��� WBW3CWebStorage �࣬��ʹ���� Qt ��Ԫ����ϵͳ��ͨ�� Q_OBJECT �꣩��
// WBW3CWidgetPreferenceAPI ��ͨ���̳� WBW3CWebStorage �࣬ʵ���˶� Web �洢�Ľӿڹ淶��
// ���ṩ�˲����洢���ݵķ��������ȡ�����á��Ƴ��������Լ���մ洢�ȹ��ܡ�
// ͨ����Ա���� mGraphicsW3CWidget����������һ�� WBGraphicsW3CWidgetItem �����ָ�룬�������ڹ�����ص�ͼ��С�������ݡ�
class WBW3CWidgetPreferenceAPI : public WBW3CWebStorage
{
    // WBW3CWidgetPreferenceAPI �̳��� WBW3CWebStorage��
    // ����ζ�� WBW3CWidgetPreferenceAPI �ཫʵ�� WBW3CWebStorage �������Ĵ��麯����
    // �� key(int index)��getItem(const QString& key)��setItem(const QString& key, const QString& value)��removeItem(const QString& key)��clear() �� length() ������
    Q_OBJECT

    public:
        // ���캯��������һ�� WBGraphicsW3CWidgetItem �����ָ�� graphicsWidget ��һ����ѡ�� QObject ���͵ĸ�����ָ�롣
        // ���캯������ҪĿ���ǳ�ʼ�� WBW3CWidgetPreferenceAPI ��ʵ����ͨ���������ó�ʼ״̬�������ź���ۡ�
        WBW3CWidgetPreferenceAPI(WBGraphicsW3CWidgetItem *graphicsWidget, QObject *parent = 0);

        virtual ~WBW3CWidgetPreferenceAPI();

    public slots:
        virtual QString key(int index);                                     // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯��������ָ������λ�õĴ洢����
        virtual QString getItem(const QString& key);                        // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯��������ָ������Ӧ��ֵ��
        virtual void setItem(const QString& key, const QString& value);     // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯��������ָ������Ӧ��ֵ��
        virtual void removeItem(const QString& key);                        // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯�����Ƴ�ָ���������Ӧ��ֵ��
        virtual void clear();                                               // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯������մ洢�е����м�ֵ�ԡ�
            
    protected:
        virtual int length();                                               // ʵ�ִ� WBW3CWebStorage �̳еĴ��麯�������ش洢�м�ֵ�Ե�������

    private:
        // ˽�г�Ա����������Ϊ WBGraphicsW3CWidgetItem*�����ڴ洢һ�� WBGraphicsW3CWidgetItem �����ָ�롣
        WBGraphicsW3CWidgetItem* mGraphicsW3CWidget;

};
#endif /* WBW3CWIDGETAPI_H_ */
