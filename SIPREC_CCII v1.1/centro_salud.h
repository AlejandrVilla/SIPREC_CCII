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
class Centro_Salud : public QObject
{
    Q_OBJECT
public:
    /*Revisar Abstraccion*/
    /**/QVector<Vacunas*> vacunas;
    /**/QVector<Prueba*> pruebas;
    /**/QVector<Mascarilla*> mascarillas;
    /**/QVector<Medicamento*> medicamentos;
    /**/QVector<HistorialMedico*> historiales;
    explicit Centro_Salud(QObject *parent = nullptr,QString name = "");
    ~Centro_Salud();
    Centro_Salud* getThis();
    QString getName();

private:
    QString name;
};

#endif // CENTRO_SALUD_H
