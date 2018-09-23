#include "widget.h"

#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn = new QPushButton("push", this);

    connect(btn, &QPushButton::clicked,
            this, &Widget::received);
}

Widget::~Widget()
{

}

QSize Widget::sizeHint() const
{
    return QSize(300, 200);
}

void Widget::received()
{
    qDebug() << __FUNCTION__;
}
