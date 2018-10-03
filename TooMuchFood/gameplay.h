#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QGraphicsView>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QApplication>
#include "movements.h"
#include "score.h"


namespace Ui {
class Gameplay;
}

class Gameplay : public QGraphicsView
{

public:
    explicit Gameplay(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    Score *score;
    QGraphicsScene *gameScene;
    moveJohn *john;
    moveJohn *john2;
    void gameOver();

private:
    Ui::Gameplay *ui;
    void start();

};

#endif // GAMEPLAY_H
