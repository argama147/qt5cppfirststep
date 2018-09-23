#ifndef MYOBJECT2CHILD_H
#define MYOBJECT2CHILD_H

#include "myobject2.h"

#include <QObject>

class MyObject2Child : public MyObject2
{
    Q_OBJECT
public:
    explicit MyObject2Child(QObject *parent = nullptr);

signals:

public slots:
    virtual void setValue() override;
};

#endif // MYOBJECT2CHILD_H
