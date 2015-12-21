#include "drones.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>

#include <QDebug>

Drones::Drones(): QObject(), QGraphicsRectItem()
{
    //Set random number
    int random_Num = (rand() % 690) + 10 ;

    //Random position of drone
    setPos(random_Num,0);


    //creates drone
    setRect(0,0,100,100);

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

    //delete drone once it reaches off of the screen
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}


