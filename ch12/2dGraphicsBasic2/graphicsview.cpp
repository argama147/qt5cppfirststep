#include "doublecirleitem.h"
#include "graphicsview.h"

GraphicsView::GraphicsView(QWidget *parent) : QGraphicsView(parent)
{
    setScene(&m_GraphicsScene);

    m_GraphicsScene.addItem(new DoubleCirleItem(QRectF(-100, -100, 200, 200)));
}
