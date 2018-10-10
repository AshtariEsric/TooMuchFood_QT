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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Informationen
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *Informationen)
    {
        if (Informationen->objectName().isEmpty())
            Informationen->setObjectName(QStringLiteral("Informationen"));
        Informationen->setWindowModality(Qt::WindowModal);
        Informationen->setEnabled(true);
        Informationen->resize(400, 300);
        buttonBox = new QDialogButtonBox(Informationen);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(Informationen);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(10, 10, 371, 221));
        textEdit->setContextMenuPolicy(Qt::NoContextMenu);
        textEdit->setAutoFillBackground(true);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textEdit->setAutoFormatting(QTextEdit::AutoAll);
        textEdit->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">In dem Spiel &quot;Too much Food&quot; spielt Ihr den 57 j\303\244hrigen Farmer John.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">John ist leidenschaftlicher Pommes und Burger esser und kann es garnicht leiden </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-size:9pt;\">durch Vogelmist zu rennen.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"><br />Steuere John mit den Tasten W, A , S und D durch die Welt und versuche m\303\266glichst viel zu Essen</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">und einen hohen Score zu erreichen.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Burger bringen dir 5 Punkte, </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Pommes bringen dir 3 Punkte.</span></p>\n"
""
                        "<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"><br />Laufe durch Vogelmist und du verlierst.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Viel spa\303\237!</span></p></body></html>"));
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(Informationen);
        QObject::connect(buttonBox, SIGNAL(accepted()), Informationen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Informationen, SLOT(reject()));

        QMetaObject::connectSlotsByName(Informationen);
    } // setupUi

    void retranslateUi(QDialog *Informationen)
    {
        Informationen->setWindowTitle(QApplication::translate("Informationen", "Informationen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Informationen: public Ui_Informationen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONEN_H
