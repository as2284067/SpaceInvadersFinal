#ifndef KEYRECT
#define KEYRECT


#include <QGraphicsRectItem>


class keyRect : public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent *event);
};
#endif // KEYRECT

