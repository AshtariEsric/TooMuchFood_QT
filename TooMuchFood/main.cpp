#include "mainwindow.h"
#include "gameplay.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* newMainWindow = new MainWindow();
    newMainWindow->show();



    return a.exec();
}
