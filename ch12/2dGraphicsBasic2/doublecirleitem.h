#ifndef DOUBLECIRLEITEM_H
#define DOUBLECIRLEITEM_H

#include <QGraphicsEllipseItem>


class DoubleCirleItem : public QGraphicsEllipseItem
{
public:
    explicit DoubleCirleItem(QGraphicsItem *parent = nullptr);
    explicit DoubleCirleItem(const QRectF &rect,
                             QGraphicsItem *parent = nullptr);
private:
    void intialize();
};

#endif // DOUBLECIRLEITEM_H
