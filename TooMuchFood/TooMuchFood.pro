#-------------------------------------------------
#
# Project created by QtCreator 2018-09-09T19:17:05
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = TooMuchFood
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    informationen.cpp \
    highscore.cpp \
    gameplay.cpp \
    movements.cpp \
    food.cpp \
    score.cpp \
    john.cpp \
    button.cpp

HEADERS += \
        mainwindow.h \
    informationen.h \
    highscore.h \
    gameplay.h \
    movements.h \
    food.h \
    score.h \
    john.h \
    button.h

FORMS += \
        mainwindow.ui \
    informationen.ui \
    highscore.ui \
    gameplay.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    C:/Users/Ashtari/Desktop/usable pictures/burgerIcon.ico

RESOURCES += \
    images/bilder.qrc
