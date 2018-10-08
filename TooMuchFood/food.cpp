#include "food.h"
#include <QBrush>



Food::Food(QGraphicsItem *parent, QString name):QGraphicsPixmapItem(parent)
{
    if(name == "BURGER"){
        setPixmap(QPixmap(":/images/burger/burger.png").scaled(40,40));
        score = 5;
    }else{
        setPixmap(QPixmap(":/images/burger/fries.png").scaled(40,40));
        score = 2;
    }
}
