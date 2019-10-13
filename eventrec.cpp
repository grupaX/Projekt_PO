#include "eventrec.h"


EventRec::EventRec(QString title,QString systemName,QDate eventDate,QString description,QString tileColor,QString maker)
{
    if(title!="")
    {
        this->title=title;
    }

    if(systemName!="")
    {
        this->systemName=systemName;
    }
    if(eventDate.isValid())
    {
        this->eventDate=eventDate;
    }
    if(description!="")
    {
        this->description=description;
    }
    if(tileColor != "")
    {
        this->tileColor=tileColor;
    }
    if(maker!="")
    {
        this->maker=maker;
    }

}

QString EventRec::getTitle()
{
    return title;
}

QString EventRec::getSystemName()
{
    return systemName;
}
QDate EventRec::getDate()
{
    return eventDate;
}
QString EventRec::getDescription()
{
    return description;
}
QString EventRec::getTileColor()
{
    return tileColor;
}
QString EventRec::getMakerName()
{
    return maker;
}
