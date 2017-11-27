#include "galaxy.hh"
#include <QDebug>



Student::Galaxy::Galaxy()
{

}

Student::Galaxy::~Galaxy()
{

}

void Student::Galaxy::addShip(std::shared_ptr<Common::Ship> ship)
{
    if (find(galaxy_ships.begin(), galaxy_ships.end(), ship) == galaxy_ships.end())
        galaxy_ships.push_back(ship);

}

void Student::Galaxy::removeShip(std::shared_ptr<Common::Ship> ship)
{
    auto it = find(galaxy_ships.begin(),
                   galaxy_ships.end(), ship);

    if (it != galaxy_ships.end() )
        galaxy_ships.erase(it);

}

void Student::Galaxy::addStarSystem(std::shared_ptr<Common::StarSystem> starSystem)
{
    if (find(galaxy_star.begin(), galaxy_star.end(), starSystem) == galaxy_star.end())
        galaxy_star.push_back(starSystem);

}

std::shared_ptr<Common::IGalaxy::ShipVector> Student::Galaxy::getShips()
{
    std::shared_ptr<ShipVector> galaxy_ships_pointer = std::make_shared<ShipVector>(galaxy_ships);
    //std::shared_ptr<ShipVector> galaxy_ships_pointer (new ShipVector(galaxy_ships));

    //ship_space = galaxy_ships
    return galaxy_ships_pointer;
}

Common::StarSystem::StarSystemVector Student::Galaxy::getSystemsInRange(std::shared_ptr<Common::StarSystem> origin, int range)
{
    Common::StarSystem::StarSystemVector closed_in_range;

    auto o = origin->getCoordinates();

    for ( auto it = galaxy_star.begin() ; it != galaxy_star.end() ; it++)
    {
        auto p = (*it)->getCoordinates();
        auto dist = (o.x-p.x)^2 + (o.y-p.y)^2;
        if(dist <= range)
            closed_in_range.push_back(*it);
    }
    return closed_in_range;
}

std::shared_ptr<Common::StarSystem> Student::Galaxy::getRandomSystem()
{
    //srand(time(NULL));
    auto num_stars = galaxy_star.size();

    auto rand_num = Common::randomMinMax(0,num_stars-1);

//Common::utilityInit();
//    qDebug()<<"random system: rand = "<<rand_num;


    return galaxy_star.at(Common::randomMinMax(0,num_stars-1));//[rand_num];
}


Common::IGalaxy::ShipVector Student::Galaxy::getShipsInStarSystem(std::__cxx11::string name)
{
    std::shared_ptr<Common::StarSystem> star_system_desired;
    ShipVector ships_in_star_system;

    for ( auto it = galaxy_star.begin() ; it != galaxy_star.end() ;  it++)
        if ((*it)->getName() == name)
            star_system_desired = *it;


    for (auto it = galaxy_ships.begin() ; it != galaxy_ships.end() ; it++)
    {
        auto location = (*it)->getLocation();
        if (location == star_system_desired)
            ships_in_star_system.push_back(*it);
    }
    return ships_in_star_system;
}


std::vector<std::string> Student::Galaxy::getSystemNames()
{
    std::vector<std::string> star_names;

    for (auto it = galaxy_star.begin() ; it != galaxy_star.end() ; it++)
    {
        auto name = (*it)->getName();
        star_names.push_back(name);
    }

    return star_names;
}


std::shared_ptr<Common::StarSystem> Student::Galaxy::getStarSystemByName(std::__cxx11::string name)
{
    for (auto it = galaxy_star.begin() ; it != galaxy_star.end() ; it++)
    {
        auto star_name = (*it)->getName();
        if (star_name == name)
            return (*it);
    }
}

std::shared_ptr<Common::StarSystem> Student::Galaxy::getStarSystemById(unsigned id)
{
    for (auto it = galaxy_star.begin() ; it != galaxy_star.end() ; it++)
    {
        auto star_id = (*it)->getId();
        if (star_id == id)
            return (*it);
    }
}

Common::StarSystem::StarSystemVector Student::Galaxy::getGalaxyStar()
{
    return galaxy_star;
}

void Student::Galaxy::sayHi()
{

}


