#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void on_pushButton_clicked();

    void on_btn_end_clicked();

    void on_btn_highscore_clicked();

    void on_btn_start_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
