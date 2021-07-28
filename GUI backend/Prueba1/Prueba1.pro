QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    centro_salud.cpp \
    form1.cpp \
    form2.cpp \
    form3.cpp \
    historialmedico.cpp \
    main.cpp \
    mainwindow.cpp \
    mascarilla.cpp \
    medicamento.cpp \
    prueba.cpp \
    suministro.cpp \
    vacunas.cpp

HEADERS += \
    centro_salud.h \
    form1.h \
    form2.h \
    form3.h \
    historialmedico.h \
    mainwindow.h \
    mascarilla.h \
    medicamento.h \
    prueba.h \
    suministro.h \
    vacunas.h

FORMS += \
    form1.ui \
    form2.ui \
    form3.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target