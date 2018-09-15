#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QDialog>

namespace Ui {
class Gameplay;
}

class Gameplay : public QDialog
{
    Q_OBJECT

public:
    explicit Gameplay(QWidget *parent = nullptr);
    ~Gameplay();

private:
    Ui::Gameplay *ui;
};

#endif // GAMEPLAY_H
