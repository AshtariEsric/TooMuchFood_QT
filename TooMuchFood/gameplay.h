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
    Gameplay(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *event);
    void displayMainMenu(QString title, QString play);
    void gameOver();


    QGraphicsTextItem *titleText = nullptr;
    Button *b = nullptr;
    Score *score = nullptr;
    QGraphicsScene *gameScene = nullptr;
    Movements *newJohn = nullptr;
    Movements *newJohn2 = nullptr;
    QGraphicsRectItem *MenuContainer = nullptr;


public slots:
    void start();

};

#endif // GAMEPLAY_H
