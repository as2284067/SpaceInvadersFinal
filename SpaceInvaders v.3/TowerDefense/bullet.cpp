#include "bullet.h"
#include "drones.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <typeinfo>

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
    int n;
    QList<QGraphicsItem *> colliding_item = collidingItems();
    for(int i=0, n=colliding_item.size(); i < n; i++){
        if(typeid(*( colliding_item[i])) == typeid(Drones)){
            scene()->removeItem( colliding_item[i]);
            scene()->removeItem(this);
            delete colliding_item[i];
            delete this;
            return;
        }
    }

    //moves bullet up main scene
    setPos(x() ,y() - 20 );

    //delete bullet once it reaches off of the screen
    if(pos().y() < 0 - 50){
        scene()->removeItem(this);
        delete this;
    }
}
