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

// WBW3CWebStorage：是一个抽象基类，用于定义与网络存储相关的基本接口。
// 这段代码定义了一个名为 WBW3CWebStorage 的类，它继承自 QObject，并且使用了 Qt 框架提供的宏 Q_OBJECT，表示这是一个QObject派生类，支持信号与槽机制。
// 这段代码定义了一个抽象基类 WBW3CWebStorage，用于表示 Web 存储的接口规范。
// 通过纯虚函数定义了存储操作的接口，包括获取键、获取值、设置值、移除键值对以及清空存储。
// 具体的存储实现可以通过继承 WBW3CWebStorage 并实现这些纯虚函数来完成，从而实现不同的 Web 存储后端，例如基于本地文件、数据库或网络服务的存储方案。
class WBW3CWebStorage : public QObject
{
    Q_OBJECT

    // 定义了一个属性 length，类型为整数，可以通过 READ 宏指定读取该属性的方法 length()，并且标记为 SCRIPTABLE，表示这个属性可以在脚本中访问。
    Q_PROPERTY(int length READ length SCRIPTABLE true);

    public:
        WBW3CWebStorage(QObject *parent = 0)
        : QObject(parent){/* NOOP */}
        virtual ~WBW3CWebStorage(){/* NOOP */}

    public slots:

        virtual QString key(int index) = 0;                                             // 纯虚函数，用于获取指定索引位置的存储键。
        virtual QString getItem(const QString& key) = 0;                                // 纯虚函数，用于获取指定键对应的值。
        virtual void setItem(const QString& key, const QString& value) = 0;             // 纯虚函数，用于设置指定键对应的值。
        virtual void removeItem(const QString& key) = 0;                                // 纯虚函数，用于移除指定键及其对应的值。
        virtual void clear() = 0;                                                       // 纯虚函数，用于清空存储中的所有键值对。

    protected:  
        virtual int length() = 0;                                                       // 纯虚函数，用于获取存储中键值对的数量，子类需要实现这个方法来提供具体的长度信息。

};

// WBW3CWidgetPreferenceAPI：继承自 WBW3CWebStorage ，它与 WBGraphicsW3CWidgetItem 相关联，
// 实现了获取键、获取项、设置项、移除项和清空等操作，用于处理该控件的偏好设置的存储和操作。
// 例如，在一个应用中，可以创建 WBW3CWidgetAPI 对象来获取和设置 WBGraphicsW3CWidgetItem 的各种属性，通过
// preferences 获取偏好设置并进行操作。而 WBW3CWidgetPreferenceAPI 则专门负责处理偏好设置的具体存储和修改逻辑。
// 这段代码定义了一个名为 WBW3CWidgetPreferenceAPI 的类，它继承自 WBW3CWebStorage 类，并使用了 Qt 的元对象系统（通过 Q_OBJECT 宏）。
// WBW3CWidgetPreferenceAPI 类通过继承 WBW3CWebStorage 类，实现了对 Web 存储的接口规范。
// 它提供了操作存储数据的方法，如获取、设置、移除数据项以及清空存储等功能。
// 通过成员变量 mGraphicsW3CWidget，它还持有一个 WBGraphicsW3CWidgetItem 对象的指针，可能用于管理相关的图形小部件数据。
class WBW3CWidgetPreferenceAPI : public WBW3CWebStorage
{
    // WBW3CWidgetPreferenceAPI 继承自 WBW3CWebStorage。
    // 这意味着 WBW3CWidgetPreferenceAPI 类将实现 WBW3CWebStorage 中声明的纯虚函数，
    // 即 key(int index)、getItem(const QString& key)、setItem(const QString& key, const QString& value)、removeItem(const QString& key)、clear() 和 length() 函数。
    Q_OBJECT

    public:
        // 构造函数，接受一个 WBGraphicsW3CWidgetItem 对象的指针 graphicsWidget 和一个可选的 QObject 类型的父对象指针。
        // 构造函数的主要目的是初始化 WBW3CWidgetPreferenceAPI 的实例，通常用于设置初始状态和连接信号与槽。
        WBW3CWidgetPreferenceAPI(WBGraphicsW3CWidgetItem *graphicsWidget, QObject *parent = 0);

        virtual ~WBW3CWidgetPreferenceAPI();

    public slots:
        virtual QString key(int index);                                     // 实现从 WBW3CWebStorage 继承的纯虚函数，返回指定索引位置的存储键。
        virtual QString getItem(const QString& key);                        // 实现从 WBW3CWebStorage 继承的纯虚函数，返回指定键对应的值。
        virtual void setItem(const QString& key, const QString& value);     // 实现从 WBW3CWebStorage 继承的纯虚函数，设置指定键对应的值。
        virtual void removeItem(const QString& key);                        // 实现从 WBW3CWebStorage 继承的纯虚函数，移除指定键及其对应的值。
        virtual void clear();                                               // 实现从 WBW3CWebStorage 继承的纯虚函数，清空存储中的所有键值对。
            
    protected:
        virtual int length();                                               // 实现从 WBW3CWebStorage 继承的纯虚函数，返回存储中键值对的数量。

    private:
        // 私有成员变量，类型为 WBGraphicsW3CWidgetItem*，用于存储一个 WBGraphicsW3CWidgetItem 对象的指针。
        WBGraphicsW3CWidgetItem* mGraphicsW3CWidget;

};
#endif /* WBW3CWIDGETAPI_H_ */
