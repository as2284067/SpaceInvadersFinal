#include "keyrect.h"
#include "drones.h"
#include "bullet.h"
#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>

void keyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A){
        if (pos().x() > 10){
            setPos(x() - 10, y());
        }
    }

    else if(event->key() == Qt::Key_D){
        if (pos().x() + 100 < 790 ){
            setPos(x() + 10, y());
        }
    }

    else if(event->key() == Qt::Key_W){
        setPos(x(), y() - 12);
   }

    else if(event->key() == Qt::Key_S){
        setPos(x(), y() + 12);
    }

    else if(event->key() == Qt::Key_Space){

        //creates bullets
        Bullet *bullet = new Bullet;

        //fires bullet
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void keyRect::spawn()
{
    //creates drone
    Drones *drone = new Drones;
    scene()->addItem(drone);
}
