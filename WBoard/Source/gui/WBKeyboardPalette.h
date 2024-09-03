#ifndef WBKEYBOARDPALETTE_H
#define WBKEYBOARDPALETTE_H

/*WBKeyboardPalette�� ������Ϊһ��������̵Ľ��������ͨ����������¼����źţ���Ӧ�õ��������ֽ��н�����ʵ�ּ�������Ĺ��ܡ����û����ĳ�����̰�ťʱ���ᴥ����Ӧ�� `onPress` �� `onRelease` ������������������*/

#include "WBActionPalette.h"

#include <QLayout>
#include <QPainter>
#include <QMenu>
#include <QIcon>

#include "frameworks/WBPlatformUtils.h"

class WBKeyButton;
class WBKeyboardButton;

class WBApplication;
class WBMainWindow;

class BTNImages
{
public:
    BTNImages(QString _strHeight, int _width, int _height);

    QString m_strHeight;
    int m_width;
    int m_height;

    QImage m_btnLeftPassive;
    QImage m_btnCenterPassive;
    QImage m_btnRightPassive;
    QImage m_btnLeftActive;
    QImage m_btnCenterActive;
    QImage m_btnRightActive;

private:
    QString m_strLeftPassive;
    QString m_strCenterPassive;
    QString m_strRightPassive;
    QString m_strLeftActive;
    QString m_strCenterActive;
    QString m_strRightActive;

};

class ContentImage
{
public:
    ContentImage(QString strHeight, int m_height, QString strContentPath);

    QString m_strHeight;
    int m_height;

    QImage m_btnContent;

private:
    QString m_strContent;
};
// ��δ��붨����һ����Ϊ WBKeyboardPalette ���࣬���̳��� WBActionPalette�������������Զ���Ĺ��ܺ����ԣ�����ʵ�ּ��̵�ɫ��Ĺ��ܡ�
// WBKeyboardPalette ����һ�����ӵļ��̵�ɫ��ʵ�֣��̳��� WBActionPalette������չ���������̽�����صĹ��ܺ��߼���
// ���������״̬����ť��С����������ȣ�ͨ���źźͲۻ������ⲿ������
// �������������ڲ�ͬƽ̨�ϣ������� Linux�����ж��ƺ���չ����֧���ض��ļ��̲��ֺ͹�������
class WBKeyboardPalette : public WBActionPalette
{
    Q_OBJECT

// WBKeyboardPalette �����˼�����Ԫ�࣬���� WBKeyboardButton��WBCapsLockButton��WBShiftButton��WBLocaleButton �� WBKeyButton����Щ���������̵�ɫ���еİ�ť�͹����������
friend class WBKeyboardButton;
friend class WBCapsLockButton;
friend class WBShiftButton;
friend class WBLocaleButton;
friend class WBKeyButton;

public:
    WBKeyboardPalette(QWidget *parent);
    ~WBKeyboardPalette();

    BTNImages *currBtnImages;                                            // ָ�� BTNImages ���͵�ָ�룬�������ڹ���ťͼ��

    bool isEnabled(){return locales!= NULL;}                            // ����ɫ���Ƿ����õķ��������� locales ��Ա�����Ƿ�Ϊ NULL ���ز���ֵ��
    virtual QSize  sizeHint () const;                                   // �麯�������ڵ�����ɫ��Ĵ�С��
    virtual void adjustSizeAndPosition(bool pUp = true);                // �麯�������ڵ�����ɫ���λ�á�
    QString getKeyButtonSize() const {QString res; res.sprintf("%dx%d", btnWidth, btnHeight); return res;}      // ��ȡ���̰�ť�Ĵ�С��
    void setKeyButtonSize(const QString& strSize);                      // ���ü��̰�ť�Ĵ�С��

    bool m_isVisible;                                                   // ��ɫ��Ŀɼ��ԡ�
    QPoint m_pos;                                                       // ��ɫ���λ�á�

signals:
    // �ƶ������Ըı�ͼ��̼���״̬�ı�ʱ�������źš�
    void moved(const QPoint&);
    void localeChanged(int);
    void keyboardActivated(bool);

private slots:
    // �����ɫ���ڲ��߼��Ĳۺ���
    void syncPosition(const QPoint & pos);
    void syncLocale(int nLocale);
    void keyboardPaletteButtonSizeChanged(QVariant size);
    void onActivated(bool b);
    void onDeactivated();
    void showKeyboard(bool show);
    void hideKeyboard();

protected:
    // ����״̬����д������Shift ��״̬������ǰ���������������������������б�
    bool capsLock;
    bool shift;
    int nCurrentLocale;
    int nLocalesCount;
    WBKeyboardLocale** locales;

    // �����޸������������޸������͡�
    int nSpecialModifierIndex;
    KEYCODE specialModifier;

    // ��ť��С��ص����ԡ�
    QString strSize;
    int btnWidth;
    int btnHeight;

    // ���Ե�����ͼ��̼���״̬��
    bool languagePopupActive;
    bool keyboardActive;

    // ���롢�뿪�����ƺ��ƶ��¼���������
    virtual void  enterEvent ( QEvent * event );
    virtual void  leaveEvent ( QEvent * event );
    virtual void  paintEvent(QPaintEvent *event);
    virtual void  moveEvent ( QMoveEvent * event );

    // ���ͼ����¼��ķ�����
    void sendKeyEvent(KEYCODE keyCode);

    // ���úͻ�ȡ��ǰ��������ķ�����
    void setLocale(int nLocale);
    const QString* getLocaleName();

    // ��ʼ����ɫ��ķ�����
    void init();

private:
    QRect originalRect;

    WBKeyButton** buttons;
    WBKeyboardButton** ctrlButtons;

    // �������ڼ���ɫ�岼�֡�
    void checkLayout();

    // �������ư�ť��������������Ըı�ʱ�Ĵ�������
    void createCtrlButtons();
    void setInput(const WBKeyboardLocale* locale);
    // Can be redefined under each platform
    void onLocaleChanged(WBKeyboardLocale* locale);

    // ƽ̨��صĴ洢�Ͳ������ر��� Linux ��صļ��������
    // Storage for platform-dependent objects (linux)
    void* storage;
    // Linux-related parameters
    int min_keycodes, max_keycodes, byte_per_code;
};

// WBKeyboardButton �༰�����ࣨWBKeyButton��WBCntrlButton��WBCapsLockButton��WBShiftButton��WBLocaleButton������Щ��̳��� `WBKeyboardButton` �����ֱ�ʵ���˲�ͬ���ͼ��̰�ť���ض���Ϊ�ͻ��Ʒ�ʽ��
// ��δ��붨����һ����Ϊ WBKeyboardButton ���࣬����һ���Զ���ļ��̰�ť�������̳��� QWidget��������ʾ�ʹ�����̰�ť�Ľ����ͻ��ơ�
/*��� WBKeyboardButton ����һ���Զ���ļ��̰�ť���������̳��� QWidget�������ڼ��̽�������ʾ��ť�����������û��Ľ�������Ҫ���ܰ�����
���ƣ�ͨ����д paintEvent ʵ�ְ�ť�Ļ��ƣ���������ͼ��Ļ��ơ�
�¼��������������롢�뿪�����¡��ͷŵ��¼����Ըı䰴ť����ۺ�״̬��
�麯���ʹ��麯����������������Ӧ��ť״̬�仯�ͻ������ݵ��麯���ʹ��麯������Ҫ����ʵ�־������Ϊ��
״̬����ͨ����Ա���� bFocused �� bPressed ����ť�Ľ���״̬�Ͱ���״̬��
��Ϣ���ͣ��ṩ sendUnicodeSymbol �� sendControlSymbol ���������ڷ��ͼ����¼���ص���Ϣ��
��������������߸��ݾ������󴴽���ͬ���͵ļ��̰�ť�����������ǵ���ۺ���Ϊ��*/
class WBKeyboardButton : public QWidget
{
    Q_OBJECT

public:
    WBKeyboardButton(WBKeyboardPalette* parent, QString contentImagePath);
    ~WBKeyboardButton();

protected:
    WBKeyboardPalette* m_parent;                                    // ָ�򸸲�����ָ�롣
    ContentImage *imgContent;                                       // ���ڴ洢��ť����ͼ���ָ�롣
    QString m_contentImagePath;                                     //�洢��ť����ͼ��·�����ַ�����

    void paintEvent(QPaintEvent *event);                            // ��д�Ļ����¼������������ڻ��ư�ť����ۡ�
        
    virtual void  enterEvent ( QEvent * event );                    // �������¼���
    virtual void  leaveEvent ( QEvent * event );                    // ����뿪�¼���
    virtual void  mousePressEvent ( QMouseEvent * event );          // ��갴���¼���
    virtual void  mouseReleaseEvent ( QMouseEvent * event );        // ����ͷ��¼���

    // �ֱ��ڰ�ť���º��ͷ�ʱ���ã���Ҫ��������ʵ�־����߼���
    virtual void onPress() = 0;                                     
    virtual void onRelease() = 0;                    

    virtual void paintContent(QPainter& painter) = 0;               // ���ڻ��ư�ť���ݵĳ��������������ʵ�־���Ļ����߼���       

    virtual bool isPressed();                                       // ���ذ�ť��ǰ�Ƿ񱻰��£���������������д��ʵ���ض��İ���״̬�߼���

    WBKeyboardPalette* keyboard;                                    // 

    void sendUnicodeSymbol(KEYCODE keycode);                        // ���͸����ļ����Ӧ�� Unicode ���š�
    void sendControlSymbol(int nSymbol);                            // ���͸����Ŀ��Ʒ��š�

private:
    bool bFocused;                                                  // ��ʾ��ť��ǰ�Ƿ���н��㡣
    bool bPressed;                                                  // ��ʾ��ť��ǰ�Ƿ񱻰��¡�
};


class WBKeyButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBKeyButton(WBKeyboardPalette* parent);
    ~WBKeyButton();

    void setKeyBt(const KEYBT* keybt){this->keybt = keybt;}

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

private:
    bool shifted();
    const KEYBT* keybt;
};

class WBCntrlButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBCntrlButton(WBKeyboardPalette* parent, int _code, const QString& _contentImagePath );
    WBCntrlButton(WBKeyboardPalette* parent, const QString& _label, int _code );
    ~WBCntrlButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

private:
    QString label;
    int code;
};

class WBCapsLockButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBCapsLockButton(WBKeyboardPalette* parent, const QString _contentImagePath);
    ~WBCapsLockButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    virtual bool isPressed();
};

class WBShiftButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBShiftButton(WBKeyboardPalette* parent, const QString _contentImagePath);
    ~WBShiftButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    virtual bool isPressed();
};

class WBLocaleButton : public WBKeyboardButton
{
    Q_OBJECT

public:
    WBLocaleButton(WBKeyboardPalette* parent);
    ~WBLocaleButton();

    virtual void onPress();
    virtual void onRelease();
    virtual void paintContent(QPainter& painter);

protected:
    QMenu* localeMenu;
};

#endif // WBKEYBOARDPALETTE_H
