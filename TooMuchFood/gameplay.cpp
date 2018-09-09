#include "gameplay.h"
#include "ui_gameplay.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>


Gameplay::Gameplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gameplay)
{
    ui->setupUi(this);

    //create playground
    QGraphicsScene *scene = new QGraphicsScene();

    //create an Item
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);

    //add item to scene
    scene->addItem(rect);

    //add view
    QGraphicsView *view = new QGraphicsView(scene);
    view->show();
}




Gameplay::~Gameplay()
{
    delete ui;
}
