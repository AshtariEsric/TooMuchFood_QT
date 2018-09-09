/********************************************************************************
** Form generated from reading UI file 'informationen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONEN_H
#define UI_INFORMATIONEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Informationen
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Informationen)
    {
        if (Informationen->objectName().isEmpty())
            Informationen->setObjectName(QStringLiteral("Informationen"));
        Informationen->resize(400, 300);
        buttonBox = new QDialogButtonBox(Informationen);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(Informationen);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 371, 221));

        retranslateUi(Informationen);
        QObject::connect(buttonBox, SIGNAL(accepted()), Informationen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Informationen, SLOT(reject()));

        QMetaObject::connectSlotsByName(Informationen);
    } // setupUi

    void retranslateUi(QDialog *Informationen)
    {
        Informationen->setWindowTitle(QApplication::translate("Informationen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Informationen: public Ui_Informationen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONEN_H
