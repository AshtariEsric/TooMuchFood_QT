#include <typeinfo>
#include <QBrush>
#include <QDebug>
#include "gameplay.h"
#include "food.h"
#include "john.h"

Gameplay *gameplay;

John::John(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    setZValue(1);
}

John *John::getForward()
{
    return forward;
}

void John::setForward(John *value)
{
    forward = value;
}

John *John::getBackward()
{
    return backward;
}

void John::setBackward(John *value)
{
    backward = value;
}

QString John::getDirection()
{
    return direction;
}

void John::setDirection(QString value)
{
    direction = value;
}

void John::move()
{
   static  int first;
    if (direction == "S")
    {
        this->setY(this->y()+40);
    }else if(direction == "W")
    {
        this->setY(this->y()-40);
    }else if (direction == "A")
    {
        this->setX(this->x()-40);
    }else if(direction == "D")
    {
        this->setX(this->x()+40);
    }

    if(this->getForward()!= nullptr)
    {
        direction = this->getForward()->direction;
    }
    if(first)
    {
        if(this->y() >= 880)
        {
                this->setY(0);
            }
        else if(this->y()<0)
            {
                this->setY(880);
            }
        else if(this->x() <0)
            {
                this->setX(1400);
            }
        else if(this->x() >=1400)
            {
                this->setX(0);
            }
    }
    first++;

    if(part == "HEAD")
    {
        checkCollidingObjects();
        setImage();
    }
}

void John::setImage()
{
    if(part == "HEAD")
        {
            if(direction == "W")
            {
                setPixmap(QPixmap(":/images/burger/up.png").scaled(60,60));
            }else if (direction == "S")
            {
                setPixmap(QPixmap(":/images/burger/down.png").scaled(60,60));
            }else if (direction == "A")
            {
                 setPixmap(QPixmap(":/images/burger/left.png").scaled(60,60));
            }else if (direction == "D")
            {
                 setPixmap(QPixmap(":/images/burger/right.png").scaled(60,60,Qt::KeepAspectRatio));
            }
            setZValue(2);

        }
}
void John::checkCollidingObjects()
{
   QList <QGraphicsItem *> coll = this->collidingItems();
    //QList erstellt einen Array mit QGraphicItems, die Variable John treffen

    for(int i = 0, n = coll.length(); i<n; i++)
    {//i = 0 n = Häufigkeit der Kollisionen, solange i < n, i++
        Food *f = dynamic_cast<Food *>(coll[i]);
        //dynamic_cast da noch nicht klar ist welcher Typ Food sein wird - Food wird in coll array geschrieben
       if(f)
        {
            QPointF thisCenter(x()+10,y()+10);
            QPointF foodCenter(f->x()+10,f->y()+10);
            QLineF ln(thisCenter,foodCenter);
            //Prüfen ob Variable John, die Variable Food trifft
            if(ln.length() == 0)
            {
                //Delete Food & setScore
                gameplay->gameScene->removeItem(f);
                //lösche das Item (f) - Food, welches berührt wird von der gameScene
                gameplay->score->setScore(gameplay->score->getScore()+f->score);
                //erhöhe den Score um den (f) Wert, welcher vorab für Fries / Burger definiert wurde
                delete f;
                //gib den Speicher wieder frei
            }
        }

       //else if kontrolliert wann John "sich selber" trifft. Dann ist das Spiel zuende - muss abgeändert werden auf wenn John "poo" trifft.
            else if(coll[i])
        {
            if(typeid(* coll[i])==typeid(John))
            {
                gameplay->gameOver();
                return;
            }
        }
}
}


