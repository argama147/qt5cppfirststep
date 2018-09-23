#include "doublecirleitem.h"

DoubleCirleItem::DoubleCirleItem(QGraphicsItem *parent)
    : QGraphicsEllipseItem(parent)
{
    intialize();
}

DoubleCirleItem::DoubleCirleItem(const QRectF &rect, QGraphicsItem *parent)
    : QGraphicsEllipseItem(rect, parent)
{
    intialize();
}

void DoubleCirleItem::intialize()
{
    //ドラッグで移動可能にする.
    setFlag(QGraphicsItem::ItemIsMovable);

    //円の中に小円を作成する.本クラスを親に設定する.
    new QGraphicsEllipseItem(QRectF(-50, -50, 100, 100), this);
}
