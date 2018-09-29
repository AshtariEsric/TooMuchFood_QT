/*#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QList>
#include <QPointF>
#include <mainwindow.h>

class Player : public QGraphicsRectItem
{
    Q_OBJECT

public:
    explicit Player(QObject *parent = nullptr);

    //Konstruktor
    Player(QGraphicsItem* parten=NULL);

    //Key-Press-Event
    void keyPressEvent(QKeyEvent* event);
    void moveBody();

private:
};

#endif // PLAYER_H
*/
