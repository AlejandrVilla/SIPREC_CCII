#include "mainwindow.h"
#include "centro_salud.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    /*Arreglar implementacion de la clase Historial_Medico
     *Implementar metodo para obtener la ruta local.
     *Implementacion de patrones(Importante).
    */

    QApplication a(argc, argv);
    Centro_Salud *centroSalud = new Centro_Salud(nullptr,"Mi casita");
    centroSalud->leerCsvVacunas();
    centroSalud->leerCsvMascarilla();
    centroSalud->leerCsvPruebas();
    centroSalud->leerCsvMedicamento();
    centroSalud->leerCsvHistoriales();
    a.setStyle("fusion");
    MainWindow w(nullptr,centroSalud);
    w.show();
    return a.exec();
}
