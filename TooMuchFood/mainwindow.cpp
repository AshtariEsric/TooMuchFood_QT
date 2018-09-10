#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "informationen.h"
#include "highscore.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Informationen informationen;
    informationen.setModal(true);
    informationen.exec();

}

void MainWindow::on_btn_end_clicked()
{
    close();
}

void MainWindow::on_btn_highscore_clicked()
{
    Highscore highscore;
    highscore.setModal(true);
    highscore.exec();
}

void MainWindow::on_btn_start_clicked()
{

}
