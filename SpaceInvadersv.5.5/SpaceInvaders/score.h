#ifndef SCORE
#define SCORE

#include <QGraphicsTextItem>
#include <QObject>
#include "widget.h"
#include "bullet.h"

class Score : public QGraphicsTextItem{

public:
    Score(QGraphicsItem *parent = 0);
    void increase();
    int getScore();

private:
    int score;
};

#endif // SCORE
