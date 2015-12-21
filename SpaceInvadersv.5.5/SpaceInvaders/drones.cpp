#include "drones.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

#include <QDebug>

Drones::Drones(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //Set random number
    int random_Num = (rand() % 690) + 10 ;

    //Random position of drone
    setPos(random_Num,0);


    setPixmap(QPixmap(":/new/prefix1/drone.png"));
    setTransformOriginPoint(50,50);

    QTimer *timer = new QTimer();

    //connect bullet
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    //resets timer every 50  mil
    timer->start(50);
}

void Drones::move()
{
    //moves drone down main scene
    setPos(x() ,y() + 5 );

    QList<QGraphicsItem *> colliding_item = collidingItems();
    for(int i=0, n=colliding_item.size(); i < n; i++){
        if(typeid(*( colliding_item[i])) == typeid(Player)){


            //destroys drone
            scene()->removeItem( colliding_item[i]);
            scene()->removeItem(this);
            delete colliding_item[i];
            delete this;
            QCoreApplication::exit(0);
            return;
        }
}
    //delete drone once it reaches off of the screen
    if(pos().y() > 600){
        scene()->removeItem(this);
        delete this;
    }
}
