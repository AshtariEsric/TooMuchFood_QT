#include "mainwindow.h"
#include "gameplay.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* newMainWindow = new MainWindow();
    newMainWindow->show();

    int i[10];
    i[1]=25;


    return a.exec();
}
