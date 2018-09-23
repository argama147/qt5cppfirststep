#include "myobject2.h"
#include <QDebug>

MyObject2::MyObject2(QObject *parent) : QObject(parent)
{

}

void MyObject2::setValue()
{
    qDebug() << metaObject()->className() << __FUNCTION__;
}

void MyObject2::setValue2(int value)
{
    qDebug() << metaObject()->className() << __FUNCTION__ << value;
}

void MyObject2::setValue3(int value)
{
    qDebug() << metaObject()->className() << __FUNCTION__ << value;
}

void MyObject2::setValue3(const QString &value)
{
    qDebug() << metaObject()->className() << __FUNCTION__ << value;
}

void MyObject2::setIntValue(int value)
{
    qDebug() << metaObject()->className() << __FUNCTION__ << value;
}

void MyObject2::setDoubleValue(double value)
{
    qDebug() << metaObject()->className() << __FUNCTION__ << value;
}

void MyObject2::setValueX()
{
    qDebug() << metaObject()->className() << __FUNCTION__ << "!!!!";
}

//void MyObject2::printNumber(int number)
//{
//   qDebug() << "Lucky number" << number;
//}
