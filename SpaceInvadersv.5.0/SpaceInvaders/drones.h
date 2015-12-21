#ifndef DRONES
#define DRONES


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Drones : public QObject,public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Drones(QGraphicsItem * parent=0);
public slots:
    void move();
};


#endif // DRONES

