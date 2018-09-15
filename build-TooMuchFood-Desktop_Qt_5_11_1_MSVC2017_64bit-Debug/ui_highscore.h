/********************************************************************************
** Form generated from reading UI file 'highscore.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCORE_H
#define UI_HIGHSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_Highscore
{
public:
    QDialogButtonBox *buttonBox;
    QListView *listView;

    void setupUi(QDialog *Highscore)
    {
        if (Highscore->objectName().isEmpty())
            Highscore->setObjectName(QStringLiteral("Highscore"));
        Highscore->resize(400, 300);
        buttonBox = new QDialogButtonBox(Highscore);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listView = new QListView(Highscore);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 10, 361, 231));

        retranslateUi(Highscore);
        QObject::connect(buttonBox, SIGNAL(accepted()), Highscore, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Highscore, SLOT(reject()));

        QMetaObject::connectSlotsByName(Highscore);
    } // setupUi

    void retranslateUi(QDialog *Highscore)
    {
        Highscore->setWindowTitle(QApplication::translate("Highscore", "Highscore", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Highscore: public Ui_Highscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCORE_H
