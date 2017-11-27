#ifndef EVENTHANDLER_HH
#define EVENTHANDLER_HH


#include "ieventhandler.hh"
#include "point.hh"
#include "galaxy.hh"
#include <QObject>
#include "dialog.h"
#include "mainwindow.h"
#include "dialogtwo.h"
#include <QDebug>


namespace Student {
class EventHandler: public Common::IEventHandler
{
   //Q_OBJECT

public:
     EventHandler();
     ~EventHandler();
    void shipSpawned(std::shared_ptr<Common::Ship> ship);
    void shipRemoved(std::shared_ptr<Common::Ship> ship);
    void shipRelocated(std::shared_ptr<Common::Ship> ship,
                       std::shared_ptr<Common::StarSystem> starSystem);
    void shipMoved(std::shared_ptr<Common::Ship> ship,
                   Common::Point origin,
                   Common::Point target);
    void exceptionInExecution(std::shared_ptr<Common::Ship> ship, std::string const& msg);
    void distressOn(std::shared_ptr<Common::Ship> ship);
    void distressOff(std::shared_ptr<Common::Ship> ship);
    void shipAbandoned(std::shared_ptr<Common::Ship> ship);
    void setDialog(Dialog *h);
    Dialog* getDialog();

private:
    Dialog *h;

};
}

#endif // EVENTHANDLER_HH
