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
#include <QtWidgets/QOpenGLWidget>

QT_BEGIN_NAMESPACE

class Ui_Gameplay
{
public:
    QOpenGLWidget *openGLWidget;

    void setupUi(QDialog *Gameplay)
    {
        if (Gameplay->objectName().isEmpty())
            Gameplay->setObjectName(QStringLiteral("Gameplay"));
        Gameplay->resize(400, 300);
        openGLWidget = new QOpenGLWidget(Gameplay);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(40, 30, 300, 200));

        retranslateUi(Gameplay);

        QMetaObject::connectSlotsByName(Gameplay);
    } // setupUi

    void retranslateUi(QDialog *Gameplay)
    {
        Gameplay->setWindowTitle(QApplication::translate("Gameplay", "Too much Food", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gameplay: public Ui_Gameplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAY_H
