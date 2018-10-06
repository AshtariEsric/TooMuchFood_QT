#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QGraphicsView>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include "movements.h"
#include "score.h"
#include "button.h"


class Gameplay: public QGraphicsView
{
    Q_OBJECT
public:
    Gameplay(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    Score *score;
    QGraphicsScene *gameScene;
    John *moveJohn;


    void displayMainMenu(QString title, QString play);
    QGraphicsTextItem *titleText;
    Button *b;
    void gameOver();


public slots:
    void start();

};

#endif // GAMEPLAY_H
