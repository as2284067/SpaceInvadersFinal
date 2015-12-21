#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    createScene();
}

void Widget::on_settingButton_clicked()
{

}

void Widget::on_exitButton_clicked()
{
    QCoreApplication::exit(0);
}


void Widget::createScene()
{
    //creates main scene
    QGraphicsScene *mainScene = new QGraphicsScene();

    //Creates a ship
    keyRect *ship = new keyRect();
    ship->setRect(0,0,100,100);

    //Adds ship to the main scene
    mainScene->addItem(ship);

    //sets ship to main focus
    ship->setFlag(QGraphicsItem::ItemIsFocusable);
    ship->setFocus();

    //creats graphics window then opens it
    QGraphicsView *window = new QGraphicsView(mainScene);

    //locks scroll
    window->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    window->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //locks size
    window->setFixedSize(800,600);
    mainScene->setSceneRect(0,0,800,600);

    //starting point for ship
    ship->setPos(window->width()/2, window->height() - ship->rect().height());

    //score = new Score();
    //mainScene->addItem(score);

    window->show();
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),ship,SLOT(spawn()));
    timer->start(2000);

}

