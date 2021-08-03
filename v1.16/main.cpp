#include "mainwindow.h"
#include "centro_salud.h"
#include "datavisitor.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Centro_Salud *centroSalud = Centro_Salud::getInstance(nullptr,"Honorio Delgado");
    DataVisitor visitCentroSalud(centroSalud);
    a.setStyle("fusion");
    MainWindow w(nullptr,centroSalud);
    w.show();
    return a.exec();
}
