#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "informationen.h"
#include "highscore.h"
#include "gameplay.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    Gameplay* playground = new Gameplay();
    playground->show();
    playground->displayMainMenu("Title", "Play");

}
