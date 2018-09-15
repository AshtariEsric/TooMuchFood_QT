#include "gameplay.h"
#include "ui_gameplay.h"

Gameplay::Gameplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gameplay)
{
    ui->setupUi(this);
    this->setFixedSize(600,500);
}

Gameplay::~Gameplay()
{
    delete ui;
}
