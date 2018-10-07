#ifndef JOHN_H
#define JOHN_H

#include <QGraphicsRectItem>


class John: public QGraphicsPixmapItem
{
public:

    John(QGraphicsItem * parent = 0);

    John *getForward();
    void setForward(John *value);

    John *getBackward();
    void setBackward(John *value);

    QString getDirection();
    void setDirection (QString value);

    void move();
    void checkCollidingObjects();
    QString part;
    void setImage();

private:
    John *forward;
    John *backward;
    QString direction;

};

#endif // JOHN_H
