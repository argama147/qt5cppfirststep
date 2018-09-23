#include "myobject1.h"

MyObject1::MyObject1(QObject *parent) : QObject(parent)
{

}

void MyObject1::sendSignal()
{
    emit valueChanged(QPrivateSignal());
    emit value2Changed(100);
    emit value3Changed(200);
    emit value3Changed(QStringLiteral("test"));
    emit valueChangedX();
}
