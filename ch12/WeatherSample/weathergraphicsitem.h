#ifndef WEATHERGRAPHICSITEM_H
#define WEATHERGRAPHICSITEM_H

#include <QGraphicsItem>

class WeatherGraphicsItem : public QGraphicsPixmapItem
{
public:
    explicit WeatherGraphicsItem(QGraphicsItem *parent = nullptr);
    WeatherGraphicsItem(const QPixmap &pixmap, QGraphicsItem *parent = nullptr);
private:
    void initialize();
};
#endif // WEATHERGRAPHICSITEM_H
