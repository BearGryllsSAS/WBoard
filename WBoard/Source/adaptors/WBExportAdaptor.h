#ifndef WBEXPORTADAPTOR_H_
#define WBEXPORTADAPTOR_H_

/*WBExportAdaptor：是一个基于 QObject 的抽象基类，主要用于定义与文档导出相关的通用接口和一些辅助功能。
这个类为不同的导出适配器提供了一个统一的接口框架，使得在处理各种不同类型的文档导出操作时，可以遵循相同的基本结构和方法，同时允许每个具体的导出适配器根据自身需求实现特定的导出逻辑和行为*/

/*以下是对其作用的详细分析：
- `exportName()`要求子类必须实现，用于指定导出操作的名称。
- `exportExtention()`默认返回空字符串，子类可以重写以提供特定的导出文件扩展名。
- `persist(WBDocumentProxy* pDocument)`要求子类必须实现，执行实际的文档持久化（导出）操作。- `persistDocument(WBDocumentProxy* pDocument, const QString& filename)`默认实现，可能提供了一些通用的文档持久化逻辑。
- `associatedActionactionAvailableFor(const QModelIndex &selectedIndex)`默认返回 false ，子类可以重写以根据特定条件判断相关操作是否可用。
- askForFileName 和 askForDirName ：用于向用户请求文件名和目录名。
- persistLocally ：由子类重写以实现本地持久化的具体逻辑。
- showErrorsList ：用于显示错误列表。
总的来说，这个类为不同的导出适配器提供了一个统一的接口框架，使得在处理各种不同类型的文档导出操作时，可以遵循相同的基本结构和方法，同时允许每个具体的导出适配器根据自身需求实现特定的导出逻辑和行为。
例如，假设我们有一个子类 PDFExportAdaptor 继承自 WBExportAdaptor ，它可以重写exportName 函数返回"PDFExport" ，重写 persist 函数实现将文档导出为 PDF 格式的具体逻辑，并根据 PDF 导出的特点重写其他相关函数。*/

#include <QtWidgets>

class WBDocumentProxy;

// 这段代码定义了一个名为 WBExportAdaptor 的类，它是一个基于 Qt 的抽象类，用于导出文档的适配器。
// WBExportAdaptor 类是一个抽象基类，定义了导出文档的通用接口和一些默认实现。
// 派生类必须实现纯虚函数 exportName() 和 persist() 来实现具体的导出逻辑。
// 该类还提供了一些可选的虚函数和保护方法，用于定制化导出行为、处理文件名、目录名的请求以及显示错误信息等功能。
// 通过这种设计，可以实现不同类型文档的导出适配器，并与其他 Qt 组件（如 QAction）集成，以支持用户交互和操作。
class WBExportAdaptor : public QObject
{
    Q_OBJECT

    public:
        WBExportAdaptor(QObject *parent = 0);
        virtual ~WBExportAdaptor();

        // 纯虚函数，派生类必须实现，返回导出的名称。
        virtual QString exportName() = 0;

        // 虚函数，默认返回空字符串，可以被子类重写以返回特定的导出文件扩展名。
        virtual QString exportExtention() { return "";}

        // 纯虚函数，派生类必须实现，用于持久化（导出）文档。
        virtual void persist(WBDocumentProxy* pDocument) = 0;

        // 虚函数，提供默认实现，可由派生类重写以指定特定的文档持久化行为。
        virtual bool persistsDocument(WBDocumentProxy* pDocument, const QString& filename);

        // 虚函数，返回是否针对给定的索引有关联操作可用，默认不可用。
        virtual bool associatedActionactionAvailableFor(const QModelIndex &selectedIndex) {Q_UNUSED(selectedIndex); return false;}

        // 虚函数，用于设置和获取详细输出模式的状态。
        QAction *associatedAction() {return mAssociatedAction;}
        void setAssociatedAction(QAction *pAssociatedAction) {mAssociatedAction = pAssociatedAction;}

        // 获取和设置与适配器关联的动作对象。
        virtual void setVerbose(bool verbose)
        {
            mIsVerbose = verbose;
        }

        virtual bool isVerbose() const
        {
            return mIsVerbose;
        }

    protected:
        // 用于向用户请求文件名。
        QString askForFileName(WBDocumentProxy* pDocument, const QString& pDialogTitle);

        // 用于向用户请求目录名。
        QString askForDirName(WBDocumentProxy* pDocument, const QString& pDialogTitle);

        // 提供文档本地持久化的默认实现。
        virtual void persistLocally(WBDocumentProxy* pDocumentProxy, const QString &pDialogTitle);

        // 显示错误列表。
        void showErrorsList(QList<QString> errorsList);

        // 布尔类型，用于标记是否启用详细输出模式。
        bool mIsVerbose;                           
        // 与适配器关联的动作，类型为 QAction*。
        QAction* mAssociatedAction;

};

#endif /* WBEXPORTADAPTOR_H_ */
