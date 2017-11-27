#include "eventhandler.hh"
#include "galaxy.hh"

Student::EventHandler::EventHandler()
{

}

Student::EventHandler::~EventHandler()
{

}

void Student::EventHandler::shipSpawned(std::shared_ptr<Common::Ship> ship)
{
    auto p = (ship)->getLocation()->getCoordinates();
    h->drawNewShip(p);
}

void Student::EventHandler::shipRemoved(std::shared_ptr<Common::Ship> ship)
{
    //emit shipDeleted(ship);

}

void Student::EventHandler::shipRelocated(std::shared_ptr<Common::Ship> ship, std::shared_ptr<Common::StarSystem> starSystem)
{
    //emit shipChangedStar(ship, starSystem);

}

void Student::EventHandler::shipMoved(std::shared_ptr<Common::Ship> ship, Common::Point origin, Common::Point target)
{
    h->moveCargoShips();

}

void Student::EventHandler::exceptionInExecution(std::shared_ptr<Common::Ship> ship, const std::__cxx11::string &msg)
{

}

void Student::EventHandler::distressOn(std::shared_ptr<Common::Ship> ship)
{

}

void Student::EventHandler::distressOff(std::shared_ptr<Common::Ship> ship)
{

}

void Student::EventHandler::shipAbandoned(std::shared_ptr<Common::Ship> ship)
{


}

void Student::EventHandler::setDialog(Dialog *h)
{
    this->h = h;

}

Dialog *Student::EventHandler::getDialog()
{
    return this->h;
}


