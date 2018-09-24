#include "parent.h"
#include <QDebug>

Parent::Parent(QObject *parent) : QObject(parent)
{
}

Parent::~Parent()
{
    qDebug() << __FUNCTION__;
}
