#include "mywidget.h"

#include <QPushButton>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    new QPushButton("push", this);
}
