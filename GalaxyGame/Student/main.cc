#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
#include "eventhandler.hh"
#include <QApplication>
#include <memory>
#include <time.h>
#include "dialog.h"
#include "mainwindow.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //std::shared_ptr<Common::IEventHandler> handler = std::make_shared<Student::EventHandler>();
    std::shared_ptr<Student::EventHandler> handler = std::make_shared<Student::EventHandler>();

    std::shared_ptr<Student::Galaxy> galaxy = std::make_shared<Student::Galaxy>();

    std::shared_ptr<Common::IGameRunner> gameRunner = Common::getGameRunner(galaxy, handler);
    Common::utilityInit(time(NULL));

    Dialog d;
    MainWindow w;

    d.setUiInfo(galaxy, gameRunner);

    handler->setDialog(&d);
    w.setDialog(&d);

    //d.implementUi();
    //d.show();
    w.show();



    //w.show();

    //d.implementUi();
    //gameRunner->spawnShips(3);
   // d.drawItem();
    //if (d.exec())
     //   d.show();

    return a.exec();
}
