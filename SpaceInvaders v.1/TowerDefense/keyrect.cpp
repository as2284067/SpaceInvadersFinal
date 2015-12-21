#include "keyrect.h"
#include "bullet.h"
#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>

void keyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A){
        setPos(x() - 12, y());
    }

    else if(event->key() == Qt::Key_D){
        setPos(x() + 12, y());
    }

//    else if(event->key() == Qt::Key_W){
//        setPos(x(), y() - 12);
//   }

//    else if(event->key() == Qt::Key_S){
//        setPos(x(), y() + 12);
//    }

    else if(event->key() == Qt::Key_Space){

        //creates bullets
        Bullet *bullet = new Bullet;

        //fires bullet
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }

}
