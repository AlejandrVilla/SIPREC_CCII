#ifndef FORM2_H
#define FORM2_H

#include "centro_salud.h"
#include "historialmedico.h"
#include <QWidget>

namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    Form2(QWidget *parent = nullptr, Centro_Salud* centroSalud = nullptr);
    ~Form2();

private slots:
    void on_buscarpushboton_clicked();

private:
    Ui::Form2 *ui;
    Centro_Salud* centroSalud;
};

#endif // FORM2_H
