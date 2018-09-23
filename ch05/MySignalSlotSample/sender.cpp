#include "sender.h"
#include <QDebug>

Sender::Sender(QObject *parent) : QObject(parent)
{

}

void Sender::sendSignal()
{
    qDebug() << __FUNCTION__;
    emit changedValue(100);
}
