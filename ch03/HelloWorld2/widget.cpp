#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

Widget::~Widget()
{

}


QSize Widget::sizeHint() const
{
    return QSize(400, 300);
}
