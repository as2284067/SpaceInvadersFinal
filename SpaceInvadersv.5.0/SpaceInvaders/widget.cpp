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

    //Creates a ship (rectangle)
    //keyRect *ship = new keyRect();
    //ship->setRect(0,0,100,100);

    //Adds ship (rectangle) to the main scene
    //mainScene->addItem(ship);

    //sets ship (rectangle) to main focus
    //ship->setFlag(QGraphicsItem::ItemIsFocusable);
    //ship->setFocus();

    //player drawn as pixmapitem instead of rectangle
    Player *player = new Player();
    player->setPos(400,500);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    mainScene->addItem(player);

    //creats graphics window then opens it
    QGraphicsView *window = new QGraphicsView(mainScene);

    //locks scroll
    window->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    window->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    //locks size
    window->setFixedSize(800,600);
    mainScene->setSceneRect(0,0,800,600);

    window->setBackgroundBrush(QBrush(QImage(":/new/prefix1/Iceberg_In_Space.png")));

    //starting point for ship
    //ship->setPos(window->width()/2, window->height() - ship->rect().height());

    Score *score = new Score();
    mainScene->addItem(score);

    window->show();
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);

}


