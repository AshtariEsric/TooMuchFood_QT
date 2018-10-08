#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <QGraphicsItem>
#include <QKeyEvent>
#include <john.h>

class Movements : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
   Movements(QGraphicsItem *parent = nullptr);
   void keyPressEvent(QKeyEvent *event);
   void makeBoard();
   void movementsJohn();

public slots:
   void move();
   void makeFood();
   void makeFood2();

private:
   John *johnsHead = nullptr;
   John *johnsBody = nullptr;
   QString direction = nullptr;
   QTimer *t = nullptr;
   QTimer *burgerSpawn = nullptr;
   QTimer *frieSpawn = nullptr;
   QGraphicsTextItem *text = nullptr;


};

#endif // MOVEMENTS_H
