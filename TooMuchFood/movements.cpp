#include "movements.h"
#include <QTimer>
#include <QDebug>
#include <QFont>
#include <QGraphicsRectItem>
#include "john.h"
#include "food.h"
#include "gameplay.h"

Movements::Movements(QGraphicsItem *parent)
{
       johnsBody = new John(this);
       johnsBody->setForward(NULL);
       johnsBody->setBackward(NULL);
       johnsBody->setPos(50,100);
       johnsBody->setDirection("RIGHT");
       johnsBody->part ="Head";
       johnsBody->setImage();

       t = new QTimer();
       connect(t,SIGNAL(timeout()),this,SLOT(move));

       moveTillBurgerDigested = new QTimer();
        connect(moveTillBurgerDigested, SIGNAL(timeout()),this,SLOT(makeFood()));

       moveTillFriesDigested = new QTimer();
       connect(moveTillFriesDigested,SIGNAL(timeout()),this,SLOT(makeFood2()));

       direction ="RIGHT";

       text = new QGraphicsTextItem(this);
       text->setVisible(true);
       text->setPlainText("Press Space to continue");
       text->setPos(650,250);
       text->setFont(QFont("",14));

}

    //Keyboard movement action
    void Movements::keyPressEvent(QKeyEvent *event)
    {
    if(event->key() == Qt::Key_Down && johnsBody->getDirection() != "UP"){
        direction = "DOWN";
    }else if(event->key() ==Qt::Key_Up && johnsBody->getDirection() != "DOWN"){
        direction = "UP";
    }else if(event->key() ==Qt::Key_Right && johnsBody->getDirection() != "LEFT"){
        direction = "right";
    }else if(event->key() ==Qt::Key_Left && johnsBody->getDirection() != "RIGHT"){
        direction = "left";
    }else if(event->key() ==Qt::Key_Space){
        if(t->isActive())
        {
            moveTillBurgerDigested->stop();
            moveTillFriesDigested->stop();
           t->stop();
            text->setVisible(true);
        }else
        {
            moveTillBurgerDigested->start(3000);
            moveTillFriesDigested->start(7000);
            t->start(90);
            text->setVisible(false);
        }
    }
    }

    void Movements::move()
    {
    johnsBody->setDirection(direction);
    }

//Food Spawn
    void Movements::makeFood()
    {
        Food*f1= new Food(this);
        f1->setX(qrand());
        f1->setY(qrand());
    }

    void Movements::makeFood2(){
        Food*f1 = new Food(this);
        f1->setX(qrand());
        f1->setY(qrand());
    }



