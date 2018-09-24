#include "child.h"
#include <QDebug>

Child::Child(QObject *parent) : Parent(parent)
{

}

Child::~Child()
{
  qDebug() << __FUNCTION__;
}
