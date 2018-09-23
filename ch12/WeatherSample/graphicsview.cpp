#include "graphicsview.h"
#include "qmath.h"
#include <QGraphicsItem>
#include <QWheelEvent>
#include <QDebug>

GraphicsView::GraphicsView(QWidget *parent) : QGraphicsView(parent)
{
    initialize();
}

GraphicsView::GraphicsView(QGraphicsScene *scene, QWidget *parent)
    : QGraphicsView(scene, parent)
{
    initialize();
}

void GraphicsView::initialize()
{
    //スクロールバーを表示しない.
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}


