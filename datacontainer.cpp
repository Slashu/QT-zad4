#include "datacontainer.h"

DataContainer::DataContainer(){

    m_objectsList.append(new ListContainerItem("raz", 1, true,1));
    m_objectsList.append(new ListContainerItem("dwa", 2, false,2));
    m_objectsList.append(new ListContainerItem("trzy", 3, true,3));
    m_objectsList.append(new ListContainerItem("cztery", 4, false,4));
    m_objectsList.append(new ListContainerItem("piec", 5, true,5));
    m_objectsList.append(new ListContainerItem("szesc", 6, false,4));
    m_objectsList.append(new ListContainerItem("siedem", 7, true,3));
    m_objectsList.append(new ListContainerItem("osiem", 8, false,2));
    m_objectsList.append(new ListContainerItem("dziewiec", 9, true,1));
}
DataContainer::~DataContainer(){
    m_objectsList.clear();
    qDeleteAll(m_objectsList);
}

QList<QObject*> DataContainer::getObjectsList() const{
    return m_objectsList;
}

void DataContainer::setObjectsList(const QList<QObject*> sideWheelItems){
    if(sideWheelItems != m_objectsList){
        m_objectsList = sideWheelItems;
        emit objectsListChanged();
    }
}
