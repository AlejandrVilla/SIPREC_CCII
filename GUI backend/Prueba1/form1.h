#ifndef FORM1_H
#define FORM1_H

#include "centro_salud.h"
#include "historialmedico.h"
#include <QWidget>

namespace Ui {
class Form1;
}

class Form1 : public QWidget
{
    Q_OBJECT

public:
    Form1(QWidget *parent = nullptr, Centro_Salud* centroSalud = nullptr);
    ~Form1();

private slots:
    void on_enviarpushbuton_clicked();

private:
    Ui::Form1 *ui;
    Centro_Salud* centroSalud;
};

#endif // FORM1_H
