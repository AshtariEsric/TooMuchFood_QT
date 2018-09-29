#include "gameplay.h"
#include "ui_gameplay.h"

Gameplay::Gameplay(QWidget *parent) : QGraphicsView(parent),ui(new Ui::Gameplay)
{

    //View creation
    setFixedSize(600,500);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //Making Playground
    gameScene = new QGraphicsScene(this);
    gameScene->setSceneRect(0,0,600,500);
    QGraphicsPixmapItem *bg = new QGraphicsPixmapItem();
    bg->setPixmap(QPixmap(/*":/images/bg.jpg"*/).scaled(600,500));
    gameScene->addItem(bg);

    //Add Playground to View
    setScene(gameScene);
    /*score = new Score();
    gameScene->addItem(score);
    john2 = NULL;
    john = NULL;
    */

}

void Gameplay::keyPressEvent(QKeyEvent *event)
{
    if(john){
        john->keyPressEvent(event);
    }else{
        QGraphicsView::keyPressEvent(event);
    }
}

void Gameplay::start(){

    john = new MoveJohn();
    john->setFlag(QGraphicsItem::ItemIsFocusable);
    john->setFocus();
    score->setVisible(true);
    score->setScore(0);
    gameScene->addItem(john);
    if(john2){
        john2->deleteLater();
        john2 = john;
    }

}

void Gameplay::gameOver(){
    displayMainMenu("Game Over!", "Try Again.");
    gameScene->removeItem(John);
}


Gameplay::~Gameplay()
{
    delete ui;
}
