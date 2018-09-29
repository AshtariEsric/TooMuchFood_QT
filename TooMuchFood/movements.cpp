#include "movements.h"
#include <QTimer>
#include <QDebug>
#include <QFont>

Movements::Movements(QGraphicsItem *parent):QGraphicsRectItem(parent)
{
       johnsBody = new JohnPart(this);
       johnsBody->SetForward(NULL);
       johnsBody->setBackward(NULL);
       johnsBody->setPos(50,100);
       johnsBody->setDirection("RIGHT");
       johnsBody->part ="Head";
       johnsBody->setImage();

       t = new QTimer();
       connect(t.SIGNAL(timeout()),this,SLOT(makeFood2));

       foodTimer = new QTimer();
       connect(foodTimer, SIGNAL(timeout()),this,SLOT(move()));

       food2Timer = new QTimer();
       connect(food2Timer,SIGNAL(timeout()),this,SLOT(makeFood2()));

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
        if(t->isActive()){
            foodTimer->stop();
            foodTimer2->stop();
            t-start(90);
            text->setVisible(false);
                        }


    }
    }

    void movements::move();
    {
    johnsBody->setDirection(direction);
    movements();
    }

    void movements::makeFood()
    {
        food*f1= new food(this);
        f1->setX(qrand());
        f1->setY(qrand());
    }

    void movements::makeFood2(){
        food*f1 = new food(this);
        f1->setX(qrand());
        f1->setY(qrand());
    }


