#ifndef CENTRO_SALUD_H
#define CENTRO_SALUD_H

#include <QObject>
#include <QVector>
#include "suministro.h"
#include "vacunas.h"
#include "prueba.h"
#include "mascarilla.h"
#include "medicamento.h"
#include "historialmedico.h"

class Add_His_Med;
class AddSumi;
class Busc_Historial;
class Buscar_Sumi;
class DataVisitor;
class Muestra_Historiales;
class MuestraDatos;

class Centro_Salud : public QObject{

    Q_OBJECT

public:  
    ~Centro_Salud();
    static Centro_Salud* getInstance(QObject *parent = nullptr , QString name = "" ); //singleton patern
    QString getName();
    friend class Add_His_Med;
    friend class AddSumi;
    friend class Busc_Historial;
    friend class Buscar_Sumi;
    friend class DataVisitor;
    friend class Muestra_Historiales;
    friend class MuestraDatos;

private:
    static Centro_Salud* _centroSalud;                              //singleton patern
    Centro_Salud(QObject *parent = nullptr , QString name = "");    //singleton patern
    QString name;
    QVector<Vacunas*> vacunas;
    QVector<Prueba*> pruebas;
    QVector<Mascarilla*> mascarillas;
    QVector<Medicamento*> medicamentos;
    QVector<HistorialMedico*> historiales;
};

#endif // CENTRO_SALUD_H
