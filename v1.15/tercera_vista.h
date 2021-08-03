#ifndef TERCERA_VISTA_H
#define TERCERA_VISTA_H

#include <QWidget>
#include "centro_salud.h"
#include "add_his_med.h"
#include "busc_historial.h"
namespace Ui {
class Tercera_vista;
}

class Tercera_vista : public QWidget
{
    Q_OBJECT

public:
    explicit Tercera_vista(QWidget *parent = nullptr);
    ~Tercera_vista();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Tercera_vista *ui;
    Centro_Salud *centroSalud;
};

#endif // TERCERA_VISTA_H
