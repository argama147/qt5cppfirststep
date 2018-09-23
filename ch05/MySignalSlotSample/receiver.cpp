#include "receiver.h"
#include <QDebug>

Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

void Receiver::setValue(int value)
{
    qDebug() << __FUNCTION__ << "value=" << value;
}
