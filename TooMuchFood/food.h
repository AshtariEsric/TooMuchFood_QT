#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsPixmapItem>


class Food : public QGraphicsPixmapItem
{
public:
    Food(QGraphicsItem *parent = nullptr, QString name = "");
    int score = 0;

};

#endif // FOOD_H
