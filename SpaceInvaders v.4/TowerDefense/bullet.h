#ifndef BULLET
#define BULLET

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include "widget.h"
#include "score.h"


class Bullet : public QObject,public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Bullet(QGraphicsItem * parent=0);
public slots:
    void move();
};


#endif // BULLET

