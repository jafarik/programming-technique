#ifndef STARSYSTEMITEM
#define STARSYSTEMITEM

#include <QGraphicsEllipseItem>
#include <QPainter>

class StarSystemItem: public QGraphicsEllipseItem{

public:
    StarSystemItem(qreal x, qreal y, qreal width, qreal height);
};


#endif // STARSYSTEMITEM


