#include "listcontaineritem.h"

ListContainerItem::ListContainerItem():
    m_myText(""),
    m_itemId(0),
    m_boolVal(false),
    m_borderSize(2)
{
}

ListContainerItem::ListContainerItem(QString itemString, int itemId,
                                     bool itemBoolVal,int borderSize):

    m_myText(itemString),
    m_itemId(itemId),
    m_boolVal(itemBoolVal),
    m_borderSize(borderSize)
{
}

int ListContainerItem::getItemId() const{
    return m_itemId;
}

QString ListContainerItem::getMyText() const{
    return m_myText;
}
bool ListContainerItem::getBoolVal() const{
    return m_boolVal;
}
int ListContainerItem::getBorderSize() const{
    return m_borderSize;
}
void ListContainerItem::setItemId(const int itemId){
    if(itemId != m_itemId){
        m_itemId=itemId;
        emit itemIdChanged();
    }
}
void ListContainerItem::setMyText(const QString &newMyText){
    if(newMyText != m_myText){
        m_myText = newMyText;
        emit myTextChanged();
    }
}
void ListContainerItem::setBoolVal(const bool newBoolVal){
    if(newBoolVal != m_boolVal){
        m_boolVal = newBoolVal;
        emit boolValChanged();
    }
}
void ListContainerItem::setBorderSize(const int newBorderSize){
    if(newBorderSize != m_borderSize){
        m_borderSize=newBorderSize;
        emit borderSizeChanged();
    }
}

