#ifndef CENTRO_SALUD_H
#define CENTRO_SALUD_H

#include <QObject>
#include <QVector>
#include "suministro.h"
#include "historialmedico.h"

class Centro_Salud : public QObject
{
    Q_OBJECT
public:
    QVector<Suministro*> vacunas;
    QVector<Suministro*> pruebas;
    QVector<Suministro*> mascarillas;
    QVector<Suministro*> medicamentos;
    QVector<HistorialMedico*> historiales;
    explicit Centro_Salud(QObject *parent = nullptr);
    ~Centro_Salud();
    Centro_Salud* getThis();

signals:

private:

};

#endif // CENTRO_SALUD_H
