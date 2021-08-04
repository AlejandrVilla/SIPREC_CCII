#ifndef MUESTRADATOS_H
#define MUESTRADATOS_H

#include <QDialog>
#include "centro_salud.h"
namespace Ui { class MuestraDatos; }

class MuestraDatos : public QDialog{

    Q_OBJECT

public:
    explicit MuestraDatos(QWidget *parent = nullptr);
    ~MuestraDatos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MuestraDatos *ui;
    Centro_Salud *centroSalud;
};

#endif // MUESTRADATOS_H
