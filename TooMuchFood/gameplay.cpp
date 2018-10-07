#include "gameplay.h"

Gameplay::Gameplay(QWidget *parent):QGraphicsView(parent)
{
    //View creation
    setFixedSize(1400,880);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //Making Playground
    gameScene = new QGraphicsScene(this);
    gameScene->setSceneRect(0,0,1400,880);
    QGraphicsPixmapItem *bg = new QGraphicsPixmapItem();
    QPixmap* myPixmap = new QPixmap(QPixmap("./images/bg.png").scaled(1400,880));
    bg->setPixmap(*myPixmap);
    gameScene->addItem(bg);

    // myPixmap->load("./images/bg.png");
    // Load für Laden neuer lvls.

    //Add Playground + score to View
    setScene(gameScene);
    score = new Score();
    gameScene->addItem(score);
    John = nullptr;

}

void Gameplay::keyPressEvent(QKeyEvent *event)
{
    if(John)
    {
        John->keyPressEvent(event);
    }else{
        QGraphicsView::keyPressEvent(event);
    }
}


void Gameplay::displayMainMenu(QString title, QString play)
{
    MenuContainer = new QGraphicsRectItem();
    const int MenuWidth = this->width()/2;
    const int leftOffset = this->width()/4;
    const int heightOffset = this->height()/4;
    MenuContainer->setRect(leftOffset,heightOffset,MenuWidth, this->height()/2);
    QBrush brush;
    brush.setStyle(Qt::NoBrush);
    brush.setColor(Qt::transparent);
    MenuContainer->setBrush(brush);
    gameScene->addItem(MenuContainer);

    //title creation

    /*titleText = new QGraphicsTextItem(title, MenuContainer);
    QFont titleFont("arial", 50);
    titleText->setFont (titleFont);
    int xPos = leftOffset+MenuWidth/2 - titleText->boundingRect().width()/2;
    int yPos = 100;
    titleText->setPos(xPos,yPos);
    */

    //create Btn
    Button *playButton = new Button(play, MenuContainer);
    int pxPos = leftOffset+MenuWidth/2 - playButton->boundingRect().width()/2;
    int pyPos = 300;
    playButton->setPos(pxPos,pyPos);
    connect(playButton, SIGNAL(clicked()), this, SLOT(start()));

    //create q-btn
    Button *quitButton = new Button("Quit", MenuContainer);
    int qxPos = leftOffset+MenuWidth/2 - quitButton->boundingRect().width()/2;
    int qyPos = 350;
    quitButton->setPos(qxPos,qyPos);
    connect(quitButton, SIGNAL(clicked()),this,SLOT(close()));

}

void Gameplay::start(){

    John = new Movements();
    John->setFlag(QGraphicsItem::ItemIsFocusable);
    John->setFocus();
    score->setVisible(true);
    score->setScore(0);
    gameScene->addItem(John);
    gameScene->removeItem(MenuContainer);

}

void Gameplay::gameOver()
{
    displayMainMenu("Game Over!", "Try Again.");
    gameScene->removeItem(John);
}

