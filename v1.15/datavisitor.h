//visitor patern
#ifndef DATAVISITOR_H
#define DATAVISITOR_H
#include "centro_salud.h"

class DataVisitor{

public:
    explicit DataVisitor( Centro_Salud* centroSalud = nullptr );
    ~DataVisitor();

    void leeCentroSalud();
    void escribeCentroSalud();

    //<-------Lectura de los Archivos(.csv)-------->
    void leerCsvVacunas();
    void leerCsvPruebas();
    void leerCsvMascarilla();
    void leerCsvMedicamento();
    void leerCsvHistoriales();
    //<-------escritura de los Archivos(.csv)-------->
    void escribirCsvVacunas();
    void escribirCsvPruebas();
    void escribirCsvMascarilla();
    void escribirCsvMedicamento();
    void escribirCsvHistoriales();

private:
    Centro_Salud* centroSalud;
};

#endif // DATAVISITOR_H
