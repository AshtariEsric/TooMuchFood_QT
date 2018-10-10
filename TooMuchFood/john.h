#ifndef JOHN_H
#define JOHN_H

#include <QGraphicsRectItem>

class Gameplay;

class John: public QGraphicsPixmapItem
{
public:

    //methode == speichert nichts, tut etwas
    John(Gameplay* newGame, QGraphicsItem * parent = nullptr);

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
    // member == datentypen, speichert dinge, kann nichts
    John *forward = nullptr;
    John *backward = nullptr;
    QString direction = nullptr;
    Gameplay* game = nullptr;

};

#endif // JOHN_H
