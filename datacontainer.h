#ifndef DATACONTAINER_H
#define DATACONTAINER_H

#include <QQuickItem>
#include "listcontaineritem.h"
class DataContainer : public QQuickItem
{
    Q_OBJECT

public:
    DataContainer();
    ~DataContainer();

    Q_PROPERTY(QList<QObject*> objectsList READ getObjectsList
               WRITE setObjectsList NOTIFY objectsListChanged)

    QList<QObject*> getObjectsList() const;

    void setObjectsList(const QList<QObject*> objectsList);

    QList<QObject*> m_objectsList;

signals:
    void objectsListChanged();
};

#endif // DATACONTAINER_H
