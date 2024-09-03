#ifndef WBURLLINEEDIT_H
#define WBURLLINEEDIT_H

// ��δ��붨���������Զ����С������ WBExLineEdit �� WBUrlLineEdit�����Ƕ��̳��� QWidget������������ Qt ��һЩ����������¼����������ʵ���Զ���Ĺ��ܺͽ�����
// ��δ���ʵ���������Զ����С�����࣬WBExLineEdit �� WBUrlLineEdit������������ǿ QLineEdit �Ĺ��ܣ�������������Զ��岿���������ض��¼����罹���¼��������¼��ȣ���
// �Լ��������Զ��岿�����������ť����ҳ��ͼ���Ľ������������ͨ���̳к��¼�������ƣ���չ�� Qt ���ԭ���ؼ��Ĺ��ܣ�ʹ����ʵ��Ӧ���п��Ը����ض����û�����ͽ�����Ϊ��

#include <QtWidgets>
#include <QWidget>
#include <QLineEdit>
#include <QStyleOption>

#include "WBWebView.h"

class WBClearButton;

// WBExLineEdit���̳��� QWidget ʵ����һ���Զ���ı༭�ؼ���
// ������һЩ�������������ҵĲ�������������¼����罹���¼��������¼��������¼��ȣ����ṩ�˷��������²����ļ�����״�ͳ�ʼ����ʽѡ�
class WBExLineEdit : public QWidget
{
    Q_OBJECT;

public:
    WBExLineEdit(QWidget *parent = 0);                                  // ���캯�������Դ��븸��������ʼ���� mLeftWidget��mLineEdit �� mClearButton��

    inline QLineEdit *lineEdit() const { return mLineEdit; }            // ���� mLineEdit ���������ⲿ���ʺͲ��������

    void setLeftWidget(QWidget *widget);                                // ���������Զ��岿����
    QWidget *leftWidget() const;                                        // ��ȡ�����Զ��岿����

    QSize sizeHint() const;                                             // ����С�������Ƽ���С��
        
    QVariant inputMethodQuery(Qt::InputMethodQuery property) const;      

    void setVisible(bool pVisible);                                     // ���ò����Ŀɼ��ԡ�

protected:
    // ���ڴ���С�����ĸ����¼������罹��仯�������¼��������¼��ȡ�
    void focusInEvent(QFocusEvent *event);
    void focusOutEvent(QFocusEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
    void inputMethodEvent(QInputMethodEvent *e);
    bool event(QEvent *event);

protected:
    // ���²����ļ������Ժͳ�ʼ����ʽѡ�
    void updateGeometries();
    void initStyleOption(QStyleOptionFrameV2 *option) const;

    QWidget*        mLeftWidget;                                        // �����Զ��岿��������ͨ�� setLeftWidget ���á�
    QLineEdit*      mLineEdit;                                          // �ڲ�ʹ�õ� QLineEdit �ؼ�������ͨ�� lineEdit() ���ء�
    WBClearButton*    mClearButton;                                     // һ���Զ���������ť������Ϊ WBClearButton��
};


class WBWebView;

// WBUrlLineEdit���̳��� `WBExLineEdit` ��
// �������ù����� `WBWebView` �����ڽ���ʧȥ�¼���`WebView` ��URL�仯ʱ������Ӧ����ר�����ڴ����� URL ��ص�������� `WBWebView` �Ľ�����
class WBUrlLineEdit : public WBExLineEdit
{
    Q_OBJECT;

public:
    WBUrlLineEdit(QWidget *parent = 0);             // ���캯������ʼ������ WBExLineEdit��
    void setWebView(WBWebView *webView);            // ���ù����� WBWebView ����������������ַ����ض�Ӧ��ҳ�档

protected:

    void focusOutEvent(QFocusEvent *event);         // ��д����ķ���������С����ʧȥ������¼���

private slots:
    void webViewUrlChanged(const QUrl &url);        // �������� WBWebView �� URL �����仯ʱ���ã��������ڸ�����������ʾ���ݡ�

private:
    WBWebView *mWebView;                            // ָ�� WBWebView �����ָ�룬������������ַ�������Ӧ��ҳ�档
};

#endif // WBURLLINEEDIT_H

