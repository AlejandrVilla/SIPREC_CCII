#ifndef SEGUNDA_VISTA_H
#define SEGUNDA_VISTA_H

#include <QWidget>
#include "Add_Sumi.h"
#include "buscar_sumi.h"
#include "centro_salud.h"

namespace Ui { class segunda_vista; }

class segunda_vista : public QWidget{

    Q_OBJECT

public:
    explicit segunda_vista(QWidget *parent = nullptr);
    ~segunda_vista();

private slots:

    void on_pushButtonAdd_clicked();

    void on_pushButtonEdit_clicked();

private:
    Ui::segunda_vista *ui;
    Centro_Salud *centroSalud;
};

#endif // SEGUNDA_VISTA_H
