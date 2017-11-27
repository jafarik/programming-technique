#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(/*
               std::shared_ptr<Common::IEventHandler> handler ,
               std::shared_ptr<Student::Galaxy> galaxy,
               std::shared_ptr<Common::IGameRunner> gameRunner,
               */QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //setting up the ui:


    ui->setupUi(this);
    scene = new QGraphicsScene(this);
   // scene->setSceneRect(ui->graphicsView->geometry().x(), 0, ui->graphicsView->width()*2,
     //                   ui->graphicsView->height()*2);
    ui->graphicsView->setScene(scene);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::drawNewShip(Common::Point start_point)
{
    qDebug()<<"inside  the drawship";
    srand(time(NULL));

    //var = var*(-1^var);

    for (int i = 0 ; i < 5 ; i++){
        auto var = rand()%300;


        CargoShipItem *newCargoShip = new CargoShipItem(start_point.x*20 + var,
                                                        start_point.y*30 + var,
                                                        10, 10);
        //  QGraphicsEllipseItem *new_ship = new QGraphicsEllipseItem();
        //new_ship->setRect(200,
        //300, 70, 50);
        scene->addItem(newCargoShip);
    }
}

void Dialog::setUiInfo(std::shared_ptr<Student::Galaxy> galaxy,
                       std::shared_ptr<Common::IGameRunner> gameRunner)
{
    this->galaxy_     = galaxy;
    this->gameRunner_ = gameRunner;
}

void Dialog::implementUi()
{


    auto star_system = galaxy_->getGalaxyStar();

    for (auto it = star_system.begin() ; it != star_system.end() ; it++)
    {
        auto p = (*it)->getCoordinates();
        StarSystemItem *new_star = new StarSystemItem(p.x*20, p.y*30, 30, 30);
        scene->addItem(new_star);
    }

    gameRunner_->spawnShips(700);

}

