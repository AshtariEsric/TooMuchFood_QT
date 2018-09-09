#include "informationen.h"
#include "ui_informationen.h"

Informationen::Informationen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Informationen)
{
    ui->setupUi(this);
}

Informationen::~Informationen()
{
    delete ui;
}
