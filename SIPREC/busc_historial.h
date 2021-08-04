#ifndef BUSC_HISTORIAL_H
#define BUSC_HISTORIAL_H

#include <QDialog>
#include "centro_salud.h"

namespace Ui { class Busc_Historial; }

class Busc_Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Busc_Historial(QWidget *parent = nullptr);
    ~Busc_Historial();

private slots:
    void on_buscarpushbuton_clicked();

    void on_modificarpushbuton_clicked();

    void on_cancelarpushbuton_clicked();

private:
    Ui::Busc_Historial *ui;
    Centro_Salud *centroSalud;
};

#endif // BUSC_HISTORIAL_H
