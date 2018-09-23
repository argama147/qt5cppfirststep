#include "myobject2child.h"
#include <QDebug>

MyObject2Child::MyObject2Child(QObject *parent) : MyObject2(parent)
{

}

void MyObject2Child::setValue()
{
    qDebug() << metaObject()->className() << __FUNCTION__ << "child";
}
