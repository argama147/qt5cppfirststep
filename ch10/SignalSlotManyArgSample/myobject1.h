#ifndef MYOBJECT1_H
#define MYOBJECT1_H

#include <QObject>

class MyObject1 : public QObject
{
    Q_OBJECT
public:
    explicit MyObject1(QObject *parent = nullptr);
    void sendSignal();
signals:
    void valueChanged(QPrivateSignal);
    void valueChangedX();
    void value2Changed(int value);
    void value3Changed(int value);
    void value3Changed(const QString &value);

public slots:
};

#endif // MYOBJECT1_H
