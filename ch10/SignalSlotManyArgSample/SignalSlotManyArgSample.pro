QT       += core gui widgets

TARGET = SignalSlotManyArgSample
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        main.cpp \
        widget.cpp \
    receiver.cpp \
    sender.cpp

HEADERS += \
        widget.h \
    receiver.h \
    sender.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
