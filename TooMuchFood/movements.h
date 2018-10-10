#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <QGraphicsItem>
#include <QKeyEvent>
#include <john.h>

//class Food;//Vorwärtsdeklaration - class Food wird es später geben
//Fuer Pointer/Referenzen benutzbar



class Movements : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
   Movements(Gameplay* zweiteEtage, QGraphicsItem *parent = nullptr);
   void keyPressEvent(QKeyEvent *event);
   void makeBoard();
   void movementsJohn();

public slots:
   void move();
   void makeFood();
   void makeFood2();
   void makePoo();

private:
   John *johnsHead = nullptr;
   John *johnsBody = nullptr;
   QString direction = nullptr;
   // QTimer *t = nullptr;
   QTimer *burgerSpawn = nullptr;
   QTimer *frieSpawn = nullptr;
   QTimer *pooSpawn = nullptr;
   QGraphicsTextItem *text = nullptr;



};

#endif // MOVEMENTS_H
