#include "receiver.h"
#include "sender.h"
#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    Sender sender;
    Receiver receiver;

    QObject::connect(&sender, &Sender::changedValue,
                     &receiver, &Receiver::setValue);

    sender.sendSignal();

    return a.exec();
}
