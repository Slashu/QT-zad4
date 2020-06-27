#ifndef LISTCONTAINERITEM_H
#define LISTCONTAINERITEM_H

#include <QObject>

class ListContainerItem : public QObject
{
    Q_OBJECT
public:

    ListContainerItem();
    ListContainerItem(QString itemString, int itemId,
                      bool itemBoolVal,int borderSize);

    Q_PROPERTY(int itemId READ getItemId WRITE setItemId NOTIFY itemIdChanged)
    Q_PROPERTY(QString myText READ getMyText WRITE setMyText NOTIFY myTextChanged)
    Q_PROPERTY(bool boolVal READ getBoolVal WRITE setBoolVal NOTIFY boolValChanged)
    Q_PROPERTY(int borderSize READ getBorderSize WRITE setBorderSize NOTIFY borderSizeChanged)
    int getItemId() const;
    void setItemId(const int itemId);
    QString getMyText() const;
    void setMyText(const QString &newMyText);
    bool getBoolVal() const;
    void setBoolVal(const bool newBoolVal);
    int getBorderSize() const;
    void setBorderSize(const int newBorderSize);

signals:
    void itemIdChanged();
    void myTextChanged();
    void boolValChanged();
    void borderSizeChanged();

private:
    QString m_myText;
    int m_itemId;
    bool m_boolVal;
    int m_borderSize;

};

#endif // LISTCONTAINERITEM_H
