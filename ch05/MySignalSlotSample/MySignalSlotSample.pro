QT       += core gui widgets

TARGET = MySignalSlotSample
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        main.cpp \
        widget.cpp \
    sender.cpp \
    receiver.cpp

HEADERS += \
        widget.h \
    sender.h \
    receiver.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
