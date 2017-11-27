#include <QString>
#include <QtTest>
#include <memory>
#include <vector>
#include "statistics.hh"
class StatisticsTest : public QObject
{
    Q_OBJECT

public:
    StatisticsTest();


private Q_SLOTS:
    void init();
    void testCase1();

    void test_getSavedShips();
    void test_addSavedShip();

    void test_getLostShips();
    void test_addLostShip();



    void test_getPoints();
    void test_addPoints();
    void test_reducePoints();

    void test_getCreditBalance();
    void test_addCredits();
    void test_reducedCredits();


private:
    std::shared_ptr<Common::IStatistics> test_statistics_;

};

StatisticsTest::StatisticsTest()
{
}

void StatisticsTest::init()
{
    test_statistics_ = std::make_shared<Student::Statistics>();
}


void StatisticsTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void StatisticsTest::test_getSavedShips()
{
    QCOMPARE(test_statistics_->getSavedShips(), 0u);

}


void StatisticsTest::test_addSavedShip()
{
    unsigned int num_saved_ships = test_statistics_->getSavedShips();
    test_statistics_->addSavedShip();

    QCOMPARE(test_statistics_->getSavedShips(), num_saved_ships + 1u);
}


void StatisticsTest::test_getLostShips()
{
    QCOMPARE(test_statistics_->getLostShips(), 0u);
}

void StatisticsTest::test_addLostShip()
{
    unsigned int num_lost_ships = test_statistics_->getLostShips();
    test_statistics_->addLostShip();

    QCOMPARE(test_statistics_->getLostShips(), num_lost_ships+1u);

}



void StatisticsTest::test_getPoints()
{
    QCOMPARE(test_statistics_->getPoints(), 0u);
}

void StatisticsTest::test_addPoints()
{
    unsigned int num_points = test_statistics_->getPoints();


    test_statistics_->addPoints(10u);
    QCOMPARE(test_statistics_->getPoints(), num_points + 10u);
}

void StatisticsTest::test_reducePoints()
{
    unsigned int num_points = test_statistics_->getPoints();

    test_statistics_->addPoints(20u);
    test_statistics_->reducePoints(20u);
    QCOMPARE(test_statistics_->getPoints(), num_points);

}

void StatisticsTest::test_getCreditBalance()
{

    QCOMPARE(test_statistics_->getCreditBalance(), 0);
}

void StatisticsTest::test_addCredits()
{
    int amount_credits = test_statistics_->getCreditBalance();

    test_statistics_->addCredits(20u);
    QCOMPARE(test_statistics_->getCreditBalance(), amount_credits + 20);
}

void StatisticsTest::test_reducedCredits()
{
    int amount_credits = test_statistics_->getCreditBalance();

    test_statistics_->reduceCredits(10u);
    QCOMPARE(test_statistics_->getCreditBalance(), amount_credits-10);
}



QTEST_APPLESS_MAIN(StatisticsTest)

#include "statisticstest.moc"
