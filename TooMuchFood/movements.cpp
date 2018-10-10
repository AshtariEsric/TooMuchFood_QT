#include "movements.h"
#include <QTimer>
#include <QDebug>
#include <QFont>
#include <QGraphicsRectItem>
#include "john.h"
#include "food.h"
#include <gameplay.h>


Movements::Movements(QGraphicsItem *parent):QGraphicsRectItem (parent)
{
       johnsHead = new John(this);
       johnsHead->setForward(nullptr);
       johnsHead->setBackward(nullptr);
       johnsHead->setPos(200,200);
       johnsHead->setDirection("d");
       johnsHead->part = "HEAD";
       johnsHead->setImage();
       johnsBody = johnsHead;

       t = new QTimer();
       connect(t,SIGNAL(timeout()),this,SLOT(move));

       burgerSpawn = new QTimer();
        connect(burgerSpawn, SIGNAL(timeout()),this,SLOT(makeFood()));

       frieSpawn = new QTimer();
       connect(frieSpawn,SIGNAL(timeout()),this,SLOT(makeFood2()));

       direction = "d";

       text = new QGraphicsTextItem(this);
       text->setVisible(true);
       text->setPlainText("Press SPACE to continue");
       text->setPos(650,250);
       text->setFont(QFont("",14));

}

    //Keyboard movement action
    void Movements::keyPressEvent(QKeyEvent *event)
    {
    if(event->key() == Qt::Key_S && johnsHead->getDirection() != "w"){
       johnsHead->setY(johnsHead->y()+40);
        direction = "s";
        johnsHead->setDirection(direction);
        johnsHead->QGraphicsPixmapItem::setPixmap(QPixmap(":/images/burger/down.png").scaled(60,60));

    }else if(event->key() ==Qt::Key_W && johnsHead->getDirection() != "s"){
        johnsHead->setY(johnsHead->y()-40);
        direction = "w";
        johnsHead->setDirection(direction);
        johnsHead->QGraphicsPixmapItem::setPixmap(QPixmap(":/images/burger/up.png").scaled(60,60));
    }else if(event->key() ==Qt::Key_D && johnsHead->getDirection() != "a"){
        johnsHead->setX(johnsHead->x()+40);
        direction = "d";
        johnsHead->setDirection(direction);
        johnsHead->QGraphicsPixmapItem::setPixmap(QPixmap(":/images/burger/right.png").scaled(60,60));
    }else if(event->key() ==Qt::Key_A && johnsHead->getDirection() != "d"){
       johnsHead->setX(johnsHead->x()-40);
        direction = "a";
        johnsHead->setDirection(direction);
        johnsHead->QGraphicsPixmapItem::setPixmap(QPixmap(":/images/burger/left.png").scaled(60,60));
    }else if(event->key() ==Qt::Key_Space){
        if(t->isActive())
        {
            burgerSpawn->stop();
            frieSpawn->stop();
            t->stop();
            text->setVisible(true);
        }
        else
        {
            burgerSpawn->start(6000);
            frieSpawn->start(4000);
            t->start(90);
            text->setVisible(false);
        }
    }
    }

    void Movements::makeBoard()
    {
        for(int i = 0; i <9*5; i++)
        {
           for(int j = 0; j < 14*5; j++)
           {
               QGraphicsRectItem *rect = new QGraphicsRectItem(this);
               rect->setRect(j*40,i*40,40,40);
           }
        }
    }

    void Movements::move()
    {
    johnsHead->setDirection(direction);
    movementsJohn();
    }

//Food Spawn

    void Movements::makeFood()
    {
        Food *F= new Food(this, "BURGER");
        F->setX(qrand()%(1400/40)*40);
        F->setY(qrand() % (880/40)*40);


    }

    void Movements::makeFood2()
    {
        Food*F = new Food(this, "FRIES");
        F->setX(qrand()%(1400/40)*40);
        F->setY(qrand() % (880/40)*40);

    }

void Movements::movementsJohn()
{
    John* temp = johnsBody;

    while(temp!=nullptr)
    {
        temp->move();
        temp = temp->getForward();
    }
}

