#ifndef WBGRAPHICSTEXTITEMDELEGATE_H_
#define WBGRAPHICSTEXTITEMDELEGATE_H_

#include <QtWidgets>

#include <QtSvg>

#include "core/WB.h"
#include "WBGraphicsItemDelegate.h"

class WBGraphicsTextItem;

// ��δ��붨����һ����Ϊ AlignTextButton ���࣬���̳��� DelegateButton����Ҫ�����ı����밴ť�Ĺ���
// �����ṩ�˶��뷽ʽ�����ú��л����ܣ������ݶ��뷽ʽ��Ⱦ��Ӧ��ͼ�ꡣ
// AlignTextButton �����ڹ����ı����밴ť���ṩ�����ú��л����뷽ʽ�Ĺ��ܣ������ݶ��뷽ʽ��Ⱦ��Ӧ��ͼ�ꡣ
// ͨ�����ַ�ʽ���������û��������ṩֱ�۵��ı����������
class AlignTextButton : public DelegateButton
{
    // AlignTextButton ��̳��� DelegateButton����ʾһ���ı����밴ť��
    Q_OBJECT

public:
    // ��һ�������������˶��뷽ʽ�����ֵ�������� k_mixed����
    static const int MAX_KIND = 3;
    // ö�ٶ��������ֶ��뷽ʽ������� (k_left)�����ж��� (k_center)���Ҷ��� (k_right) �ͻ�϶��� (k_mixed)��
    enum kind_t{
        k_left = 0
        , k_center
        , k_right
        , k_mixed
    };

    // ���ڳ�ʼ����ť������һ���ļ�������ί�ж��󡢸�����ʹ��ڿ�ܲ�����Ϊ������
    AlignTextButton(const QString & fileName, QGraphicsItem* pDelegated, QGraphicsItem * parent = 0, Qt::WindowFrameSection section = Qt::TopLeftSection);
    virtual ~AlignTextButton();

    void setKind(int pKind);                                            // ���õ�ǰ�Ķ��뷽ʽ��
    int kind() {return mKind;}                                          // ���ص�ǰ�Ķ��뷽ʽ��

    void setNextKind();                                                 // �л�����һ�����뷽ʽ��
    int nextKind() const;                                               // ������һ�����뷽ʽ��

    void setMixedButtonVisible(bool v = true) {mHideMixed = !v;}        // ���û�ϰ�ť�Ŀɼ��ԡ�
    bool isMixedButtonVisible() {return !mHideMixed;}                   // ���ػ�ϰ�ť�Ƿ�ɼ���

private:
    // ���ݶ��뷽ʽ������Ӧ�� QSvgRenderer ����
    QSvgRenderer *rndFromKind(int pknd)
    {
        switch (pknd) {
        case k_left:
            return lft;
            break;
        case k_center:
            return cntr;
            break;
        case k_right:
            return rght;
            break;
        case k_mixed:
            return mxd;
            break;
        }

        return 0;
    }

    // ���ص�ǰ���뷽ʽ�� QSvgRenderer ����
    QSvgRenderer *curRnd() {return rndFromKind(mKind);}

    // lft��cntr��rght �� mxd �� QSvgRenderer ��ָ�룬������Ⱦ��ͬ���뷽ʽ��ͼ�ꡣ
    QPointer<QSvgRenderer> lft;
    QPointer<QSvgRenderer> cntr;
    QPointer<QSvgRenderer> rght;
    QPointer<QSvgRenderer> mxd;

    // �洢��ǰ�Ķ��뷽ʽ��
    int mKind;
    // ��ʾ��ϰ�ť�Ƿ����ء�
    bool mHideMixed;
};

// WBGraphicsTextItemDelegate ��̳��� WBGraphicsItemDelegate����ҪΪ WBGraphicsTextItem �ṩ������ı��༭���ܺ��û��������ơ�
// ��ͨ��ί��ģʽ�����ı���ı༭�����š����롢��ɫ���ĵȲ�����
// WBGraphicsTextItemDelegate ��ͨ��ί��ģʽ��չ�� WBGraphicsItemDelegate �Ĺ��ܣ�ר�Ŵ��� WBGraphicsTextItem ���ı��༭���û������߼���
// ���ṩ�˷ḻ�Ľӿں��¼���������ʹ���ı���ı༭���ܸ�������ǿ��
// ͨ�����ַ�ʽ�����Ը��õط�������߼����û������߼�����ߴ���Ŀ�ά���ԺͿ���չ�ԡ�

/*WBGraphicsTextItemDelegate: �� `WBGraphicsItemDelegate` �������࣬ר�����ڴ��� `WBGraphicsTextItem` ��ί�в�����
`WBGraphicsTextItem` �ṩ�˸�����Ͷ��ƻ���ί�в������������ı��༭��صĸ��ֹ��ܺͽ�������
1.�ṩ���ж��ı��Ƿ�ɱ༭�������ı���С��������ɫ�ȷ�����
2.��д�� `itemChange` �����Դ���ͼ����ı仯��ʵ���˴����ؼ�������ۺ����������ݸı䡢���ÿɱ༭�ԡ��Ƴ��ȣ���
3.������������װ�β˵������²˵�����״̬���ͷŰ�ť�Լ��������ͼ����¼���>3.˽�з����ͳ�Ա�������ڴ�������ѡ����ɫ
ѡ���ı���С���������밴ť״̬���¡�����ѡ�����ݡ�����Ĭ������Ȳ�����*/
class WBGraphicsTextItemDelegate : public WBGraphicsItemDelegate
{
    Q_OBJECT

    enum textChangeMode
    {
        changeSize = 0,
        scaleSize
    };

    public:
        // ���캯����ʼ�� WBGraphicsTextItemDelegate���� WBGraphicsTextItem ��Ϊί�ж���
        WBGraphicsTextItemDelegate(WBGraphicsTextItem* pDelegated, QObject * parent = 0);
        virtual ~WBGraphicsTextItemDelegate();

        bool isEditable();                                                                                  // ����ı����Ƿ�ɱ༭��
        void scaleTextSize(qreal multiplyer);                                                               // �����������ı���С��
        void recolor();                                                                                     // �����ı���ɫ��
        virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value);       // ����ͼ����ı仯��
        virtual void createControls();                                                                      // �������ư�ť��
        qreal titleBarWidth();                                                                              // ��ȡ��������ȡ�

    public slots:
        void contentsChanged();                                                                             // ��Ӧ�ı����ݱ仯��
        virtual void setEditable(bool);                                                                     // �����ı����Ƿ�ɱ༭��
        virtual void remove(bool canUndo);                                                                  // �Ƴ��ı��

    protected:
        virtual void decorateMenu(QMenu *menu);                                                             // װ�������Ĳ˵���
        virtual void updateMenuActionState();                                                               // ���²˵���״̬��

        virtual void freeButtons();                                                                         // �ͷŰ�ť��Դ��

        // ��������¼���
        virtual bool mousePressEvent(QGraphicsSceneMouseEvent *event);          
        virtual bool mouseMoveEvent(QGraphicsSceneMouseEvent *event);           
        virtual bool mouseReleaseEvent(QGraphicsSceneMouseEvent *event);        

        // ��������¼�
        virtual bool keyPressEvent(QKeyEvent *event);                           
        virtual bool keyReleaseEvent(QKeyEvent *event);                         

    private:
        // �����˶��˽�г�Ա���������ڴ洢��ť�������С��ѡ�����ݵȡ�
        WBGraphicsTextItem* delegated();           

        DelegateButton* mFontButton;               
        DelegateButton* mColorButton;              
        DelegateButton* mDecreaseSizeButton;       
        DelegateButton* mIncreaseSizeButton;       
        DelegateButton* mAlignButton;              

        int mLastFontPixelSize;

        static const int sMinPixelSize;
        static const int sMinPointSize;

    private:
        void customize(QFontDialog &fontDialog);                            // �Զ�������Ի���
        void ChangeTextSize(qreal factor, textChangeMode changeMode);       // �����ı���С��
        void updateAlighButtonState();                                      // ���¶��밴ť״̬��
        bool oneBlockSelection();                                           // ����Ƿ񵥿�ѡ��
        void saveTextCursorFormats();                                       // �����ı�����ʽ��
        void restoreTextCursorFormats();                                    // �ָ��ı�����ʽ��
        QFont createDefaultFont();                                          // ����Ĭ�����塣

        QAction *mEditableAction;
        struct selectionData_t {
            selectionData_t()
                : mButtonIsPressed(false)
            {}
            bool mButtonIsPressed;
            int position;
            int anchor;
            QString html;
            QTextDocumentFragment selection;
            QList<QTextBlockFormat> fmts;

        } mSelectionData;

    private slots:
        void pickFont();                                                    // ѡ�����塣
        void pickColor();                                                   // ѡ����ɫ��

        void decreaseSize();                                                // ��С�����С��
        void increaseSize();                                                // ���������С��

        void alignButtonProcess();                                          // ������밴ť��
        void onCursorPositionChanged(const QTextCursor& cursor);            // ���λ�ñ仯ʱ�Ĵ���
        void onModificationChanged(bool ch);                                // �޸�״̬�仯ʱ�Ĵ���
        void onContentChanged();                                            // ���ݱ仯ʱ�Ĵ���

	private:
      const int delta;
};

#endif /* WBGRAPHICSTEXTITEMDELEGATE_H_ */
