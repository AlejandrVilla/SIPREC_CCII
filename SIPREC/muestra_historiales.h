#ifndef MUESTRA_HISTORIALES_H
#define MUESTRA_HISTORIALES_H

#include <QDialog>
#include "centro_salud.h"
namespace Ui { class Muestra_Historiales; }

class Muestra_Historiales : public QDialog{

    Q_OBJECT

public:
    explicit Muestra_Historiales(QWidget *parent = nullptr);
    ~Muestra_Historiales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Muestra_Historiales *ui;
    Centro_Salud *centroSalud;
};

#endif // MUESTRA_HISTORIALES_H
