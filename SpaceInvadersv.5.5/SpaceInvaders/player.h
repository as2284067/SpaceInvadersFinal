#ifndef PLAYER
#define PLAYER

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};


#endif // PLAYER

