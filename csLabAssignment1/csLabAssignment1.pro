QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customerwindow.cpp \
    main.cpp \
    marketplace.cpp \
    reg.cpp \
    regc.cpp \
    sellerwindow.cpp

HEADERS += \
    customerwindow.h \
    marketplace.h \
    reg.h \
    regc.h \
    sellerwindow.h

FORMS += \
    customerwindow.ui \
    marketplace.ui \
    reg.ui \
    regc.ui \
    sellerwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
