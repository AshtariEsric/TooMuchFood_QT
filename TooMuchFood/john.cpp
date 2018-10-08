#include "john.h"
#include <QBrush>
#include <QDebug>
#include "gameplay.h"
#include "food.h"
#include <typeinfo>

extern Gameplay *gameplay;

John::John(QGraphicsItem *parent)
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
    static int first;
    if (direction == "DOWN")
    {
        this->setY(this->y()+40);
    }else if(direction == "UP")
    {
        this->setY(this->y()-40);
    }else if (direction == "LEFT")
    {
        this->setX(this->x()-40);
    }else if(direction == "RIGHT")
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
            if(direction == "UP")
            {
                setPixmap(QPixmap(":/images/burger/arrow.png").scaled(40,40));
            }else if (direction == "DOWN")
            {
                setPixmap(QPixmap(":/images/burger/arrow.png").scaled(40,40));
            }else if (direction == "LEFT")
            {
                 setPixmap(QPixmap(":/images/burger/arrow.png").scaled(40,40));
            }else if (direction == "RIGHT")
            {
                 setPixmap(QPixmap(":/images/burger/arrow.png").scaled(40,40,Qt::KeepAspectRatio));
            }
            setZValue(2);

        }
}

void John::checkCollidingObjects()
{
QList <QGraphicsItem *> coll = this->collidingItems();

for(int i = 0, n = coll.length(); i<n; i++)
{
   // food f = dynamic_cast<food *>(coll[i]);
    /*if(f)
    {
        QPointF thisCenter(x()+10,y()+10);
        QPointF foodCenter(f->x()+10,f->y()+10);
        QLineF ln(thisCenter,foodCenter);
        if(ln.length() == 0)
        {
            //add poo
            gameplay->gameScene->removeItem(f);
            gameplay->score->setScore(gameplay->score->getScore()+f->score);
            delete f;
        }
    }
    else if(coll[i])
    {
        if(typeid( *coll[i])==typeid(John))
        {
            gameplay->gameOver();
        }
        return;
    }
    */
}

}


