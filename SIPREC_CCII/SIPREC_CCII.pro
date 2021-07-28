QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mostarconboton.cpp \
    primera_vista.cpp \
    segunda_vista.cpp \
    suministro.cpp \
    tercera_vista.cpp

HEADERS += \
    mainwindow.h \
    mostarconboton.h \
    primera_vista.h \
    segunda_vista.h \
    suministro.h \
    tercera_vista.h

FORMS += \
    mainwindow.ui \
    mostarconboton.ui \
    primera_vista.ui \
    segunda_vista.ui \
    tercera_vista.ui
QMAKE_CXXFLAGS += -std=gnu++14
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Icons.qrc

DISTFILES +=
