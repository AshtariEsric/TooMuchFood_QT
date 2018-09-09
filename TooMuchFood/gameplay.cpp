#include "gameplay.h"
#include "ui_gameplay.h"

Gameplay::Gameplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gameplay)
{
    ui->setupUi(this);
}

Gameplay::~Gameplay()
{
    delete ui;
}
