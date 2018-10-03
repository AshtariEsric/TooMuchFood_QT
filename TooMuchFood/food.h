#ifndef FOOD_H
#define FOOD_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>


class Food : public QGraphicsPixmapItem
{
public:
    Food(QGraphicsItem *parent = nullptr, QString name = "");
    int score;

};

#endif // FOOD_H
