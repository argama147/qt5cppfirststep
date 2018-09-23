QT       += core gui widgets

TARGET = WeatherSample
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        widget.cpp \
    graphicsview.cpp \
    graphicsscene.cpp \
    weathergraphicsitem.cpp

HEADERS += \
        widget.h \
    graphicsview.h \
    graphicsscene.h \
    weathergraphicsitem.h

FORMS += \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
