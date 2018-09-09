/********************************************************************************
** Form generated from reading UI file 'gameplay.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPLAY_H
#define UI_GAMEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Gameplay
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Gameplay)
    {
        if (Gameplay->objectName().isEmpty())
            Gameplay->setObjectName(QStringLiteral("Gameplay"));
        Gameplay->resize(400, 300);
        textBrowser = new QTextBrowser(Gameplay);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 256, 192));

        retranslateUi(Gameplay);

        QMetaObject::connectSlotsByName(Gameplay);
    } // setupUi

    void retranslateUi(QDialog *Gameplay)
    {
        Gameplay->setWindowTitle(QApplication::translate("Gameplay", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("Gameplay", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">Got it!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gameplay: public Ui_Gameplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAY_H
