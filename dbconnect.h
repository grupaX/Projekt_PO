#ifndef DBCONNECT_H
#define DBCONNECT_H

#include <QString>
#include <QSqlDatabase>
#include <QDebug>

class DbConnect
{
public:
    DbConnect(const QString& filepath);

private:
    QSqlDatabase db;




};

#endif // DBCONNECT_H
