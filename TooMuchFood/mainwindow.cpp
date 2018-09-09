#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameplay.h"
#include "informationen.h"
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

void MainWindow::on_btn_start_clicked()
{
    Gameplay gameplay;
    gameplay.setModal(true);
    gameplay.exec();


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
