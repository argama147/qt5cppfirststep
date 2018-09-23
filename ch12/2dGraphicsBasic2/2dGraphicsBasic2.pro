QT       += core gui widgets

TARGET = 2dGraphicsBasic2
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
        main.cpp \
        widget.cpp \
    graphicsview.cpp \
    doublecirleitem.cpp

HEADERS += \
        widget.h \
    graphicsview.h \
    doublecirleitem.h

FORMS += \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
