#include "mainwindow.h"
#include "centro_salud.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Centro_Salud *centroSalud = new Centro_Salud(nullptr,"Centro Hospitalario Honorio Delgado");
    a.setStyle("fusion");
    MainWindow w(nullptr,centroSalud);
    w.show();
    return a.exec();
}
