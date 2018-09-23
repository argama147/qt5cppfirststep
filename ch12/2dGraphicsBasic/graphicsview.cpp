#include "graphicsview.h"

#include <QGraphicsEllipseItem>

GraphicsView::GraphicsView(QWidget *parent) : QGraphicsView(parent)
{
    setScene(&m_GraphicsScene);

    m_GraphicsScene.addItem(new QGraphicsEllipseItem(QRectF(-100, -100, 200, 200)));
}
