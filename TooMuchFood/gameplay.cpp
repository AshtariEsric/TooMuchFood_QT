#include "gameplay.h"

Gameplay::Gameplay(QWidget *parent):QGraphicsView(parent)
{
    //View creation
    setFixedSize(600,500);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //Making Playground
    gameScene = new QGraphicsScene(this);
    gameScene->setSceneRect(0,0,600,500);
    QGraphicsPixmapItem *bg = new QGraphicsPixmapItem();
    bg->setPixmap(QPixmap(":/images/bg.png").scaled(600,500));
    gameScene->addItem(bg);

    //Add Playground + score to View
    setScene(gameScene);
    score = new Score();
    gameScene->addItem(score);
    moveJohn = NULL;

}

/*void Gameplay::keyPressEvent(QKeyEvent *event)
{
    if(moveJohn)
    {
        moveJohn->keyPressEvent(event);
    }else{
        QGraphicsView::keyPressEvent(event);
    }
}
*/

void Gameplay::displayMainMenu(QString title, QString play)
{
    //title creation
    titleText = new QGraphicsTextItem(title);
    QFont titleFont("arial", 50);
    titleText->setFont (titleFont);
    int xPos = width ()/2 - titleText->boundingRect().width()/2;
    int yPos = 150;
    titleText->setPos(xPos,yPos);
    gameScene->addItem(titleText);

    //create Btn
    Button *playButton = new Button(play, titleText);
    int pxPos = 160;
    int pyPos = 160;
    playButton->setPos(pxPos,pyPos);

    connect(playButton, SIGNAL(clicked()), this, SLOT(start()));
    gameScene->addItem(playButton);

    //create q-btn
    Button *quitButton = new Button("Quit", titleText);
    int qxPos = 160;
    int qyPos = 160;
    quitButton->setPos(qxPos,qyPos);
    connect(quitButton, SIGNAL(clicked()),this,SLOT(close()));

}

void Gameplay::start(){

    moveJohn = new John();
    moveJohn->setFlag(QGraphicsItem::ItemIsFocusable);
    moveJohn->setFocus();
    score->setVisible(true);
    score->setScore(0);
    gameScene->addItem(moveJohn);

   /* if(moveJohn2){
        moveJohn2->deleteLater();
        moveJohn2 = moveJohn;
    }*/

}

void Gameplay::gameOver()
{
    displayMainMenu("Game Over!", "Try Again.");
   // gameScene->removeItem(John);
}

