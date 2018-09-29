#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QGraphicsView>
#include <QKeyEvent>
#include <QGraphicsRectItem>


namespace Ui {
class Gameplay;
}

class Gameplay : public QGraphicsView
{
    Q_OBJECT

public:
    explicit Gameplay(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    //Score *score;
    QGraphicsScene *gameScene;
    //MoveJohn *john;
    //MoveJohn *john2;
    void gameOver();

private:
    Ui::Gameplay *ui;
    void start();

};

#endif // GAMEPLAY_H
