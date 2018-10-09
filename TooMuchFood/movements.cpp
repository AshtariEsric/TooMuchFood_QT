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
       johnsHead->setDirection("RIGHT");
       johnsHead->part = "HEAD";
       johnsHead->setImage();
       johnsBody = johnsHead;

       t = new QTimer();
       connect(t,SIGNAL(timeout()),this,SLOT(move));

       burgerSpawn = new QTimer();
        connect(burgerSpawn, SIGNAL(timeout()),this,SLOT(makeFood()));

       frieSpawn = new QTimer();
       connect(frieSpawn,SIGNAL(timeout()),this,SLOT(makeFood2()));

       direction = "RIGHT";

       text = new QGraphicsTextItem(this);
       text->setVisible(true);
       text->setPlainText("Press SPACE to continue");
       text->setPos(650,250);
       text->setFont(QFont("",14));

}

    //Keyboard movement action
    void Movements::keyPressEvent(QKeyEvent *event)
    {
    if(event->key() == Qt::Key_Down && johnsHead->getDirection() != "UP"){
       johnsHead->setY(johnsHead->y()+40);
        direction = "DOWN";
    }else if(event->key() ==Qt::Key_Up && johnsHead->getDirection() != "DOWN"){
        johnsHead->setY(johnsHead->y()-40);
        direction = "UP";
    }else if(event->key() ==Qt::Key_Right && johnsHead->getDirection() != "LEFT"){
        johnsHead->setX(johnsHead->x()+40);
        direction = "RIGHT";
    }else if(event->key() ==Qt::Key_Left && johnsHead->getDirection() != "RIGHT"){
        johnsHead->setX(johnsHead->x()-80);
        direction = "LEFT";
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
        Food*f1= new Food(this, "BURGER");
        f1->setX(qrand()%(1400/40)*40);
        f1->setY(qrand() % (880/40)*40);
    }

    void Movements::makeFood2(){
        Food*f1 = new Food(this, "FRIES");
        f1->setX(qrand()%(1400/40)*40);
        f1->setY(qrand() % (880/40)*40);
    }

void Movements::movementsJohn()
{
    John* temp;

    while(temp!=nullptr)
    {
        temp->move();
        temp = temp->getForward();
    }


}

