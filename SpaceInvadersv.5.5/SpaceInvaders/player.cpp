#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "drones.h"
#include <QDebug>

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    // set graphic
    setPixmap(QPixmap(":/new/prefix1/drone.png"));
    setTransformOriginPoint(50,40);
    setRotation(180);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    qDebug() << event->key();
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

void Player::spawn()
{
    // create an enemy
    Drones *drone = new Drones;
    scene()->addItem(drone);
}
