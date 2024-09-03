#ifndef WBFLOATINGPALLETTE_H_
#define WBFLOATINGPALLETTE_H_

/*WBFloatingPalette: ����Ϊ�ɸ����ĵ�ɫ��򴰿������������һ��ö������ `eMinimizedLocation` �����ڱ�ʾ��ɫ����С��ʱ
�� λ �� ѡ �� �� �� �� �� `QWidget` �� д �� һ Щ �� �� �� �� �� �� �� �� �� �� `mouseMoveEvent` �� `mousePressEvent` ��
`mouseReleaseEvent` ����������ʵ�ִ��ڵ��϶����ܡ��ṩ��һЩ��������������ĵ�ɫ�塢������С��λ�á������Զ���λ�á�
����ˢ��ץȡ״̬����С��Ȩ�޵ȡ���д��һЩ������Ա�������� `enterEvent`��`showEvent` �� `paintEvent` ���������ڴ�����
����롢��ʾ�ͻ����¼�������һЩ˽�з��������ڲ��������Ƴ����й����ĵ�ɫ�塢��С����ɫ��ȡ�������һЩ�źţ�����ͨ
֪�ⲿ���������롢��С����ʼ����󻯿�ʼ������󻯺������ƶ���״̬�ı仯��*/

#include <QWidget>
#include <QPoint>

typedef enum
{
    eMinimizedLocation_None,
    eMinimizedLocation_Left,
    eMinimizedLocation_Top,
    eMinimizedLocation_Right,
    eMinimizedLocation_Bottom
}eMinimizedLocation;

// WBFloatingPalette ���ṩ��һ����������ʵ�֣����Դ����϶���������С����С���ȹ��ܡ�
// ͨ�������¼����������źţ��ܹ�ʵ�ַḻ���û�������
// ����������������һ���������ɸ����͵����Ĺ�����壬����Ӧ�ó�����û�������ơ�
class WBFloatingPalette : public QWidget
{
    Q_OBJECT

public:
    WBFloatingPalette(Qt::Corner = Qt::TopLeftCorner, QWidget *parent = 0);

    virtual void mouseMoveEvent(QMouseEvent *event);                        // ��¼��갴��λ�á�
    virtual void mousePressEvent(QMouseEvent *event);                       // ��������ƶ��������λ�á�
    virtual void mouseReleaseEvent(QMouseEvent *event);                     // �����϶�������

    void addAssociatedPalette(WBFloatingPalette* pOtherPalette);            // ��ӹ����ĸ�����塣��Щ������һ���ƶ��������С��
    void removeAssociatedPalette(WBFloatingPalette* pOtherPalette);         // �Ƴ������ĸ�����塣��Щ������һ���ƶ��������С��

    virtual void adjustSizeAndPosition(bool pUp = true);                    // �������Ĵ�С��λ�á�
        
    void setCustomPosition(bool pFlag);                                     // �����Զ���λ�ñ�־��

    QSize preferredSize();                                                  // ����������ѡ��С��

    void setBackgroundBrush(const QBrush& brush);                           // ���ñ�����ˢ��
    void setGrip(bool newGrip);                                             // �����Ƿ�����϶���

    void setMinimizePermission(bool permission);                            // �����Ƿ�������С����

protected:
    virtual void enterEvent(QEvent *event);                                 // �����������ʱ���á�
    virtual void showEvent(QShowEvent *event);                              // �������ʾʱ���á�
    virtual void paintEvent(QPaintEvent *event);                            // ������塣

    virtual int radius();                                                   // �������İ뾶���߿���϶���С��
    virtual int border();                                                   // �������ı߿�
    virtual int gripSize();                                                 // ���������϶���С

    QBrush mBackgroundBrush;                                                // ������ˢ��
    bool mbGrip;                                                            // �Ƿ�����϶��ı�־��
    static const int sLayoutContentMargin = 12;                              
    static const int sLayoutSpacing = 15;                                    
    void moveInsideParent(const QPoint &position);                          // �����ƶ���嵽���ؼ��ڲ���
    bool mCustomPosition;                                                   // �Զ���λ�ñ�־��
    bool mIsMoving;                                                         // �Ƿ������ƶ��ı�־��

    virtual int getParentRightOffset();                                     // ���ظ��ؼ��Ҳ��ƫ������

    eMinimizedLocation minimizedLocation(){return mMinimizedLocation;}      // ���������С����λ�á�

private:
    void removeAllAssociatedPalette();                                      // �Ƴ����й����ĸ�����塣
    void minimizePalette(const QPoint& pos);                                // minimizePalette ���ݸ���λ����С����塣

    QList<WBFloatingPalette*> mAssociatedPalette;                           // �����ĸ�������б�
    QPoint mDragPosition;                                                   // �϶�λ�á�
    bool mCanBeMinimized;                                                   // �Ƿ������С���ı�־��
    eMinimizedLocation mMinimizedLocation;                                  // ��С��λ�á�
    Qt::Corner mDefaultPosition;                                            // Ĭ��λ�á�

signals:
    void mouseEntered();                                                    // �����������ʱ������
    void minimizeStart(eMinimizedLocation location);                        // ��ʼ��С��ʱ������
    void maximizeStart();                                                   // ��ʼ���ʱ������
    void maximized();                                                       // ������ʱ������
    void moving();                                                          // �ƶ�ʱ������
};

#endif /* WBFLOATINGPALLETTE_H_ */
