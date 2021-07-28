#ifndef FORM3_H
#define FORM3_H

#include "centro_salud.h"
#include "historialmedico.h"
#include <QWidget>

namespace Ui {
class Form3;
}

class Form3 : public QWidget
{
    Q_OBJECT

public:
    Form3(QWidget *parent = nullptr, Centro_Salud* centroSalud = nullptr);
    ~Form3();

private slots:
    void on_guardarpushbuton_clicked();

private:
    Ui::Form3 *ui;
    Centro_Salud* centroSalud;
};

#endif // FORM3_H
