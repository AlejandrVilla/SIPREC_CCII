#ifndef BUSCAR_HIST_H
#define BUSCAR_HIST_H

#include <QDialog>
#include "centro_salud.h"

namespace Ui {
class Buscar_hist;
}

class Buscar_hist : public QDialog
{
    Q_OBJECT

public:
    explicit Buscar_hist(QWidget *parent = nullptr,Centro_Salud* centroSalud = nullptr );
    ~Buscar_hist();

private slots:
    void on_modificarpushbuton_clicked();

    void on_buscarpushbuton_clicked();

    void on_cancelarpushbuton_clicked();

private:
    Ui::Buscar_hist *ui;
    Centro_Salud* centroSalud;
};

#endif // BUSCAR_HIST_H
