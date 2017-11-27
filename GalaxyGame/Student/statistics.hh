#ifndef STATISTICS_HH
#define STATISTICS_HH

#include "istatistics.hh"
namespace Student {

class Statistics : public Common::IStatistics
{
public:
    Statistics();
    ~Statistics();

     void addSavedShip();
     unsigned getSavedShips() const;

     void addLostShip();
     unsigned getLostShips() const;

     void addPoints(unsigned amount);
     void reducePoints(unsigned amount);
     unsigned getPoints() const;

     void addCredits(unsigned amount);
     void reduceCredits(unsigned amount);
     int getCreditBalance() const;

     bool checkInvariant() const;

private:
     unsigned int saved_ships_;
     unsigned int lost_ships_;
     unsigned int points_;
     int credits_;
     int Max_Loan_Allowance_;
};
}//Student

#endif // STATISTICS_HH
