#ifndef ADD_SUMI_H
#define ADD_SUMI_H

#include <QDialog>
#include "centro_salud.h"
namespace Ui {
class AddSumi;
}

class AddSumi : public QDialog
{
    Q_OBJECT

public:
    explicit AddSumi(QWidget *parent = nullptr,Centro_Salud* centroSalud = nullptr);
    ~AddSumi();

private slots:
    void on_enviarpushbuton_clicked();

private:
    Ui::AddSumi *ui;
    Centro_Salud *centroSalud;
};

#endif // ADD_SUMI_H
