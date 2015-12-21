#ifndef DRONES
#define DRONES


#include "player.h"
#include "widget.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>

class Drones : public QObject,public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Drones(QGraphicsItem * parent=0);
public slots:
    void move();
};


#endif // DRONES

