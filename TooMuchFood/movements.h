#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <QGraphicsItem>
#include <QKeyEvent>

class Movements : public QGraphicsItem
{
    Q_OBJECT

public:
   Movements(QGraphicsItem *parent = 0);
   void keyPressEvent(QKeyEvent *event);
   void makeBoard();
   void moveJohn();

   void move();
   void makeFood();
   void makeFood2();

private:

   QString direction;
   QTimer *t;
   QTimer *foodTimer;
   QTimer *food2Timer;
   QGraphicsTextItem *text;


};

#endif // MOVEMENTS_H
