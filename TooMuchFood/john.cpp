#include <typeinfo>
#include <QBrush>
#include <QDebug>
#include "gameplay.h"
#include "food.h"
#include "john.h"
#include "poo.h"

/// Repeat
John::John(Gameplay* newGame, QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    game = newGame;

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
   static int first;
    if (direction == "s")
    {
        this->setY(this->y()+40);
    }else if(direction == "w")
    {
        this->setY(this->y()-40);
    }else if (direction == "a")
    {
        this->setX(this->x()-40);
    }else if(direction == "d")
    {
        this->setX(this->x()+40);
    }

    if(this->getForward()!= nullptr)
    {
        direction = this->getForward()->direction;
    }

    //MAP Übergang
    if(first)
    {
        if(this->y() >= 880)
        {
                this->setY(0);
            }
        else if(this->y() < 0)
            {
                this->setY(880);
            }
        else if(this->x() < 0)
            {
                this->setX(1400);
            }
        else if(this->x() >= 1400)
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
            if(direction == "w")
            {
                setPixmap(QPixmap(":/images/burger/up.png").scaled(60,60));

            }else if (direction == "s")
            {
                setPixmap(QPixmap(":/images/burger/down.png").scaled(60,60));
            }else if (direction == "a")
            {
                 setPixmap(QPixmap(":/images/burger/left.png").scaled(60,60));
            }else if (direction == "d")
            {
                 setPixmap(QPixmap(":/images/burger/right.png").scaled(60,60,Qt::KeepAspectRatio));
            }
            setZValue(2);

        }
}
void John::checkCollidingObjects()
{
   QList <QGraphicsItem *> coll = this->collidingItems();

   int  n = coll.length();

    for(int i = 0; i<n; i++)
    {
        Food *F = dynamic_cast<Food *>(coll[i]);
        if(F)
        {
           qWarning() << "Found food " << i;
           //Prüfen ob Variable John, die Variable Food trifft

           QPointF thisCenter(x(),y());
            QPointF foodCenter(F->x(),F->y());
            QLineF ln(thisCenter,foodCenter);

            if(ln.length() < 10)
            {
                //Delete Food & setScore
                auto pscore= game->score;
                pscore->setScore( pscore->getScore()+F->score );
                game->gameScene->removeItem(F);
                delete F;

            }
        }

       //else if kontrolliert wann John "sich selber" trifft. Dann ist das Spiel zuende - muss abgeändert werden auf wenn John "poo" trifft.
            else if(coll[i])
        {
            poo *p = dynamic_cast<poo *>(coll[i]);
            if(p)

            {
                QPointF thisCenter(x(),y());
                 QPointF pooCenter(p->x(),p->y());
                 QLineF ln(thisCenter,pooCenter);

                 if(ln.length() < 10)
                 {
                    game->gameOver();
                    return;
            }
        }
}}
}

