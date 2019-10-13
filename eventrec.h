#ifndef EVENTREC_H
#define EVENTREC_H

#include <QString>
#include <QDate>


class EventRec
{
public:

    EventRec(QString="None",QString="None",QDate=QDate(),QString="None",QString="#c23616",QString="Unknow user");

    QString getTitle(); //Metoda zwracająca string tytuł
    QString getSystemName();
    QDate getDate();
    QString getDescription();
    QString getTileColor();
    QString getMakerName();
private:
    QString title; //Tytuł zdarzenia
    QString systemName; //Nazwa systemu którego dotyczy
    QDate eventDate; //Data powstania zdarzenia
    QString description; //Opis zdarzenia/przyczyna/podjęte działania
    QString tileColor; //kolor kafelka w formacie HEX, np: #7f8fa6
    QString maker; //użytkownik który utworzył zdarzenie
};

#endif // EVENTREC_H
