#include "statistics.hh"



Student::Statistics::Statistics():saved_ships_(0), lost_ships_(0), points_(0),
credits_(0)
{

}

Student::Statistics::~Statistics()
{

}

void Student::Statistics::addSavedShip()
{
    saved_ships_ += 1;

}

unsigned Student::Statistics::getSavedShips() const
{
    return saved_ships_;

}

void Student::Statistics::addLostShip()
{
    lost_ships_ += 1;

}

unsigned Student::Statistics::getLostShips() const
{
    return lost_ships_;

}

void Student::Statistics::addPoints(unsigned amount)
{
    points_ += amount;

}

void Student::Statistics::reducePoints(unsigned amount)
{
    points_ -= amount;

}

unsigned Student::Statistics::getPoints() const
{
    return points_;

}

void Student::Statistics::addCredits(unsigned amount)
{
    credits_ += amount;

}

void Student::Statistics::reduceCredits(unsigned amount)
{
    credits_ -= amount;
}

int Student::Statistics::getCreditBalance() const
{
    return credits_;

}
