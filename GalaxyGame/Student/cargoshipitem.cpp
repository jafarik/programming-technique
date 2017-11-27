#include "cargoshipitem.h"



CargoShipItem::CargoShipItem(qreal x, qreal y, qreal width, qreal height)
{
    this->setRect(x, y, width, height);

    this->setPen(QPen(Qt::white));
    this->setBrush(Qt::red);
    //this->paint(painter);

}
