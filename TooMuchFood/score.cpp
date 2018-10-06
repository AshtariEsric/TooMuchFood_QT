#include "score.h"
#include <QFont>


Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{

    //score position
    score = 0;

    setPos(5,10);
    setFont(QFont("",20));

}

int Score::getScore()
{
    return score;
}

//Score String Umwandlung
void Score::setScore(int value)
{
    score = value;
    setPlainText("Score:" + QString::number(score));
}
