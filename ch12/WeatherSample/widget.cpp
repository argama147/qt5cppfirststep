#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //QGraphicsSceneをQGraphicsViewに設定する.
    ui->graphicsView->setScene(&m_scene);
    qDebug() << "ui->graphicsView->rect()" << ui->graphicsView->rect();
    //QGraphicsSceneの矩形をQGraphicsViewに合わせる.
    m_scene.setSceneRect(ui->graphicsView->rect());
    qDebug() << "m_scene.sceneRect()" << m_scene.sceneRect();
}

Widget::~Widget()
{
    delete ui;
}
