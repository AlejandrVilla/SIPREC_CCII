#ifndef TERCERA_VISTA_H
#define TERCERA_VISTA_H

#include <QWidget>
#include "centro_salud.h"
#include "add_his_med.h"
namespace Ui {
class Tercera_vista;
}

class Tercera_vista : public QWidget
{
    Q_OBJECT

public:
    explicit Tercera_vista(QWidget *parent = nullptr, Centro_Salud *centroSalud  = nullptr);
    ~Tercera_vista();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tercera_vista *ui;
    Centro_Salud *centroSalud;
};

#endif // TERCERA_VISTA_H
