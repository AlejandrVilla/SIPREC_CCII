#ifndef ADD_SUMI_H
#define ADD_SUMI_H

#include <QDialog>
#include "centro_salud.h"

namespace Ui { class AddSumi; }

class AddSumi : public QDialog
{
    Q_OBJECT

public:
    explicit AddSumi(QWidget *parent = nullptr);
    ~AddSumi();

private slots:
    void on_enviarpushbuton_clicked();

    void on_vacuna_clicked();

    void on_prueba_clicked();

    void on_mascarilla_clicked();

    void on_medicamento_clicked();

private:
    Ui::AddSumi *ui;
    Centro_Salud *centroSalud;
};

#endif // ADD_SUMI_H
