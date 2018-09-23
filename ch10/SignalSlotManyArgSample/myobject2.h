#ifndef MYOBJECT2_H
#define MYOBJECT2_H

#include <QObject>
#include <QDebug>

class MyObject2 : public QObject
{
    Q_OBJECT
public:
    explicit MyObject2(QObject *parent = nullptr);
public slots:
    virtual void setValue();
    void setValue2(int value);
    void setValue3(int value);
    void setValue3(const QString &value);
    void setIntValue(int value);
    void setDoubleValue(double value);
    void printNumber(int number = 42) {
        qDebug() << __FUNCTION__ << number;
    }
    virtual void setValueX();

};

#endif // MYOBJECT2_H
