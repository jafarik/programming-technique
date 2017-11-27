#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include "starsystemitem.h"
#include "cargoshipitem.h"
#include "initialize.hh"
#include "galaxy.hh"
#include "igamerunner.hh"
#include "utility.hh"
//#include "eventhandler.hh"
#include <memory>
#include <time.h>
#include <stdlib.h>
#include "point.hh"
#include <QTimer>



namespace Ui {
class Dialog;
}


class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void drawNewShip(Common::Point start_point);

    void setUiInfo(std::shared_ptr<Student::Galaxy> galaxy,
                   std::shared_ptr<Common::IGameRunner> gameRunner);
    void implementUi();
    void moveCargoShips();

public slots:

    void cargoShip_Update();





private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;

    std::shared_ptr<Common::IEventHandler> handler_;
    std::shared_ptr<Student::Galaxy> galaxy_;
    std::shared_ptr<Common::IGameRunner> gameRunner_;

};
#endif // DIALOG_H
