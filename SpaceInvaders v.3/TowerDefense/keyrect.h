#ifndef KEYRECT
#define KEYRECT

#include <QObject>


#include <QGraphicsRectItem>


class keyRect : public QObject, public QGraphicsRectItem{
public:
    Q_OBJECT

    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
};
#endif // KEYRECT

