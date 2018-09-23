#include "graphicsscene.h"
#include "weathergraphicsitem.h"

#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

GraphicsScene::GraphicsScene(QObject *parent)
    : QGraphicsScene(parent), m_isDrag(false)
{
    //QGraphicsSceneにQGraphicsPixmapItemを追加する.
    addItem(new QGraphicsPixmapItem(QPixmap(":/images/japan.png")));
}

void GraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    m_isDrag = false;
    QGraphicsScene::mousePressEvent(event);
}

void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    m_isDrag = true;
    QGraphicsScene::mouseMoveEvent(event);
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mouseReleaseEvent(event);

    if (!m_isDrag) {
        addIcon(event->scenePos());
    }
}

void GraphicsScene::addIcon(const QPointF pos)
{
    QGraphicsItem *item = new WeatherGraphicsItem(QPixmap(":/images/hare.png"));
    item->setPos(pos);
    addItem(item);

    update();
}
