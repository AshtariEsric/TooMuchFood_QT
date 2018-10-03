#include "food.h"
#include <QBrush>
#include <QGraphicsPixmapItem>


Food::Food(QGraphicsItem *parent, QString name):QGraphicsPixmapItem(parent)
{
    if(name == "BURGER"){
        setPixmap(QPixmap(":/images/burger.png").scaled(40,40));
        score = 3;
    }else{
        setPixmap(QPixmap(":/images/pommes.png").scaled(40,40));
        score = 1;
    }



}
