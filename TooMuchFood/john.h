#ifndef JOHN_H
#define JOHN_H

#include <QGraphicsRectItem>


class John: public QGraphicsPixmapItem
{
public:

    John(QGraphicsItem * parent = nullptr);

    John *getForward();
    void setForward(John *value);

    John *getBackward();
    void setBackward(John *value);

    QString getDirection();
    void setDirection (QString value);

    void move();
    void checkCollidingObjects();

    QString part = nullptr;
    void setImage();

    //Pooh deklaration
    void pooh(QGraphicsItem *parent = nullptr);

private:
    John *forward = nullptr;
    John *backward = nullptr;
    QString direction = nullptr;

};

#endif // JOHN_H
