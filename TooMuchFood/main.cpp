#include "mainwindow.h"
#include "gameplay.h"
#include <QApplication>

// Dennis Hasselbusch
//Wirtschaftsinformatik
// 2. Semester
//Matr. Nr. 296232

// Icons made by Freepik (http://www.freepik.com) from Flaticon (https://www.flaticon.com/) is licensed by Creative Commons BY 3.0



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* newMainWindow = new MainWindow();
    newMainWindow->show();



    return a.exec();
}
