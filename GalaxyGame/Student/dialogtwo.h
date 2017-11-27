#ifndef DIALOGTWO_H
#define DIALOGTWO_H

#include <QDialog>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include "starsystemitem.h"
#include "cargoshipitem.h"
#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
//#include "eventhandler.hh"
#include <memory>
#include <time.h>


namespace Ui {
class DialogTwo;
}

class DialogTwo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTwo(QWidget *parent = 0);


    ~DialogTwo();

private:
    Ui::DialogTwo *ui;
    QGraphicsScene *scene;

    std::shared_ptr<Common::IEventHandler> handler_;
    std::shared_ptr<Student::Galaxy> galaxy_;
    std::shared_ptr<Common::IGameRunner> gameRunner_;
};

#endif // DIALOGTWO_H
