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
    QVector<Vacunas*> vacunas;
    QVector<Prueba*> pruebas;
    QVector<Mascarilla*> mascarillas;
    QVector<Medicamento*> medicamentos;
    QVector<HistorialMedico*> historiales;
    explicit Centro_Salud(QObject *parent = nullptr);
    ~Centro_Salud();
    Centro_Salud* getThis();

signals:

private:

};

#endif // CENTRO_SALUD_H
