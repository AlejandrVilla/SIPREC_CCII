QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += -std=c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Add_Sumi.cpp \
    add_his_med.cpp \
    busc_historial.cpp \
    buscar_sumi.cpp \
    centro_salud.cpp \
    datavisitor.cpp \
    historialmedico.cpp \
    main.cpp \
    mainwindow.cpp \
    mascarilla.cpp \
    medicamento.cpp \
    muestra_historiales.cpp \
    muestradatos.cpp \
    primera_vista.cpp \
    prueba.cpp \
    segunda_vista.cpp \
    suministro.cpp \
    tercera_vista.cpp \
    vacunas.cpp

HEADERS += \
    Add_Sumi.h \
    add_his_med.h \
    busc_historial.h \
    buscar_sumi.h \
    centro_salud.h \
    datavisitor.h \
    historialmedico.h \
    mainwindow.h \
    mascarilla.h \
    medicamento.h \
    muestra_historiales.h \
    muestradatos.h \
    primera_vista.h \
    prueba.h \
    segunda_vista.h \
    suministro.h \
    tercera_vista.h \
    vacunas.h

FORMS += \
    Add_Sumi.ui \
    add_his_med.ui \
    busc_historial.ui \
    buscar_sumi.ui \
    mainwindow.ui \
    muestra_historiales.ui \
    muestradatos.ui \
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
