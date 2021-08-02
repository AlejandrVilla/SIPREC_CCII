#ifndef MODIFICAR_SUMI_H
#define MODIFICAR_SUMI_H

#include <QDialog>
#include "centro_salud.h"

namespace Ui {
class Modificar_Sumi;
}

class Modificar_Sumi : public QDialog
{
    Q_OBJECT

public:
    explicit Modificar_Sumi(QWidget *parent = nullptr,Centro_Salud* centroSalud = nullptr);
    ~Modificar_Sumi();

private slots:
    void on_vacuna_clicked();

    void on_prueba_clicked();

    void on_mascarilla_clicked();

    void on_medicamento_clicked();

    void on_enviarpushbuton_clicked();

private:
    Ui::Modificar_Sumi *ui;
    Centro_Salud* centroSalud;

};

#endif // MODIFICAR_SUMI_H
