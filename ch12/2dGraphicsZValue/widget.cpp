#include "widget.h"
#include "ui_widget.h"

#include <QGraphicsEllipseItem>
#include <QSpinBox>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->graphicsView->setScene(&m_GraphicsScene);

    QGraphicsEllipseItem *graphicsItemWhite
            = new QGraphicsEllipseItem(QRectF(QPointF(-100, -100), QSizeF(200, 200)));
    graphicsItemWhite->setBrush(QBrush(Qt::white));
    graphicsItemWhite->setZValue(ui->whileZValueSpinBox->value());

    QGraphicsEllipseItem *graphicsBlack
            = new QGraphicsEllipseItem(QRectF(QPointF(0, -100), QSizeF(200, 200)));
    graphicsBlack->setBrush(QBrush(Qt::black));
    graphicsBlack->setZValue(ui->blackZValueSpinBox->value());

    //左円（白）を追加する.
    m_GraphicsScene.addItem(graphicsItemWhite);
    //右円（黒）を追加する.
    m_GraphicsScene.addItem(graphicsBlack);

    connect(ui->whileZValueSpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            [=](int value) {
        qDebug() << "while" << value;
        graphicsItemWhite->setZValue(value);
        m_GraphicsScene.update();
    });

    connect(ui->blackZValueSpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            [=](int value) {
        qDebug() << "black" << value;
        graphicsBlack->setZValue(value);
        m_GraphicsScene.update();
    });
}

Widget::~Widget()
{
    delete ui;
}

