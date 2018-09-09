#ifndef INFORMATIONEN_H
#define INFORMATIONEN_H

#include <QDialog>

namespace Ui {
class Informationen;
}

class Informationen : public QDialog
{
    Q_OBJECT

public:
    explicit Informationen(QWidget *parent = nullptr);
    ~Informationen();

private:
    Ui::Informationen *ui;
};

#endif // INFORMATIONEN_H
