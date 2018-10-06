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
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_Gameplay
{
public:
    QGraphicsView *gameScene;

    void setupUi(QDialog *Gameplay)
    {
        if (Gameplay->objectName().isEmpty())
            Gameplay->setObjectName(QStringLiteral("Gameplay"));
        Gameplay->setEnabled(true);
        Gameplay->resize(600, 500);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gameplay->sizePolicy().hasHeightForWidth());
        Gameplay->setSizePolicy(sizePolicy);
        Gameplay->setContextMenuPolicy(Qt::NoContextMenu);
        Gameplay->setWindowTitle(QStringLiteral("Gameplay"));
#ifndef QT_NO_TOOLTIP
        Gameplay->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Gameplay->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        Gameplay->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        Gameplay->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Gameplay->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        Gameplay->setSizeGripEnabled(false);
        Gameplay->setModal(false);
        gameScene = new QGraphicsView(Gameplay);
        gameScene->setObjectName(QStringLiteral("gameScene"));
        gameScene->setGeometry(QRect(10, 10, 580, 480));

        retranslateUi(Gameplay);
        QObject::connect(gameScene, SIGNAL(rubberBandChanged(QRect,QPointF,QPointF)), gameScene, SLOT(invalidateScene()));

        QMetaObject::connectSlotsByName(Gameplay);
    } // setupUi

    void retranslateUi(QDialog *Gameplay)
    {
        Q_UNUSED(Gameplay);
    } // retranslateUi

};

namespace Ui {
    class Gameplay: public Ui_Gameplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAY_H
