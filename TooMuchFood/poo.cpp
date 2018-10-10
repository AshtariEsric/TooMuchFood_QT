#include "poo.h"



poo::poo(QGraphicsItem *parent, QString fail):QGraphicsPixmapItem (parent)
{
    if(fail == "KACKHAUFEN")
    {
        setPixmap(QPixmap(":/images/burger/vogelschiss.png").scaled(40,40));
    }
}
