#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QGraphicsView>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QApplication>
#include <QDialog>
#include "movements.h"
#include "score.h"
#include "john.h"

class Gameplay:public QGraphicsView
{
    Q_OBJECT
public:
    Gameplay(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    Score *score;
    QGraphicsScene *gameScene;
    /*moveJohn* john;
    moveJohn* john2;*/
    void gameOver();

public slots:
    void start();

};

#endif // GAMEPLAY_H
