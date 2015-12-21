#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

Bullet::Bullet()
{
    //creates bullet
    setRect(0,0,10,40);

    QTimer *timer = new QTimer();

    //connect bullet

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    //resets timer every 50  mil
    timer->start(50);
}

void Bullet::move()
{
    //moves bullet up main scene
    setPos(x() ,y() - 20 );

    //delete bullet once it reaches off of the screen
    if(pos().y() < 0 - 50){
        scene()->removeItem(this);
        delete this;
    }
}
