#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QDebug>
#include "styledata.h"
#include <QSqlQueryModel>


class dbmanager
{
public:
    dbmanager(const QString &path);
    ~dbmanager();
    bool isOpen() const;
    bool addStyle(StyleData styleData);
    QSqlQueryModel *getStyleData(QString styleNo);

    StyleData *getStyle(QString ID);

private:
    QSqlDatabase m_db;


};



#endif // DBMANAGER_H
