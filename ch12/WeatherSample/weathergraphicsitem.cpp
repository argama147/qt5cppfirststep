#include "weathergraphicsitem.h"
#include <QDebug>

WeatherGraphicsItem::WeatherGraphicsItem(QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent)
{
    initialize();
}

WeatherGraphicsItem::WeatherGraphicsItem(const QPixmap &pixmap, QGraphicsItem *parent)
    : QGraphicsPixmapItem(pixmap, parent)
{
    initialize();

    //中心座標を移動する.
    setOffset(QPointF(- pixmap.width() / 2, - pixmap.height() / 2));
}

void WeatherGraphicsItem::initialize()
{
    //マウスで移動を可能にする.
    setFlags(QGraphicsItem::ItemIsMovable);
}

