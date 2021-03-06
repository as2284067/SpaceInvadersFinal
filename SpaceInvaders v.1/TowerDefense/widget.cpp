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

    //Sets its size to 100 x 100 pixle
    ship->setRect(0,0,100,100);

    //Adds ship to the main scene
    mainScene->addItem(ship);

    //sets ship to main focus
    ship->setFlag(QGraphicsItem::ItemIsFocusable);
    ship->setFocus();

    //creats graphics window then opens it
    QGraphicsView *window = new QGraphicsView(mainScene);

    window->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    window->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    window->setFixedSize(800,600);
    mainScene->setSceneRect(0,0,800,600);

    ship->setPos(window->width()/2, window->height() - ship->rect().height());

    window->show();
}
