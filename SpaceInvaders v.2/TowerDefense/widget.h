#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QApplication>
#include "keyrect.h"
#include "drones.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

signals:
    void buttonClicked();

private slots:
    void on_startButton_clicked();

    void on_settingButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene *mainScene;
    keyRect *ship;
    QGraphicsView *window;

private:
    void createScene();
};

#endif // WIDGET_H
