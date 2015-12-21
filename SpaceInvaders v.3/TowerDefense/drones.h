#ifndef DRONES
#define DRONES

#include <QGraphicsRectItem>
#include <QObject>

class Drones : public QObject,public QGraphicsRectItem {
    Q_OBJECT

public:
    Drones();
public slots:
    void move();
};


#endif // DRONES

