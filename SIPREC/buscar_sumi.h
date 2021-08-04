#ifndef BUSCAR_SUMI_H
#define BUSCAR_SUMI_H

#include <QDialog>
#include "centro_salud.h"
#include "modificar_sumi.h"

namespace Ui { class Buscar_Sumi; }

class Buscar_Sumi : public QDialog
{
    Q_OBJECT

public:
    explicit Buscar_Sumi(QWidget *parent = nullptr);
    ~Buscar_Sumi();

private slots:
    void on_pushButtonbuscar_clicked();

    void on_enviarpushbuton_clicked();

private:
    Ui::Buscar_Sumi *ui;
    Centro_Salud* centroSalud;
};

#endif // BUSCAR_SUMI_H
