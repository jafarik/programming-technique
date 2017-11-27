#ifndef CARGOSHIPITEM
#define CARGOSHIPITEM


#include <QGraphicsRectItem>
#include <QPainter>

class CargoShipItem: public QGraphicsRectItem{

public:
    CargoShipItem(qreal x, qreal y, qreal width, qreal height);
};

#endif // CARGOSHIPITEM

