#include "dbconnect.h"

DbConnect::DbConnect(const QString& filepath)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName(filepath);

       if (!db.open())
       {
          qDebug() << "Error: connection with database fail";
       }
       else
       {
          qDebug() << "Database: connection ok";
       }
}
