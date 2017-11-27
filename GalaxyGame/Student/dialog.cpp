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
    this->setWindowState(Qt::WindowFullScreen);
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

    CargoShipItem *newCargoShip = new CargoShipItem(start_point.x*60 + 2,
                                                    start_point.y*80 + 2,
                                                    10, 10);
    scene->addItem(newCargoShip);
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
        StarSystemItem *new_star = new StarSystemItem(p.x*60,
                                                      p.y*80,
                                                      30, 30);
        scene->addItem(new_star);
    }

    // add the cargo ships to the Galaxy::galaxy_ship vector.
    gameRunner_->spawnShips(30);

    // Move the galaxy ships.

    QTimer *timer =new QTimer(this);

    connect(timer, SIGNAL(timeout() ), this, SLOT(cargoShip_Update()) );

    timer->setInterval(20);

}

void Dialog::moveCargoShips()
{
    QTimer *timer =new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(cargoShip_Update() ) );
}

void Dialog::cargoShip_Update()
{
    gameRunner_->createActions();
    gameRunner_->doActions();
}


