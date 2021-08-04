#ifndef ADD_HIS_MED_H
#define ADD_HIS_MED_H

#include <QDialog>
#include "centro_salud.h"

namespace Ui { class Add_His_Med; }

class Add_His_Med : public QDialog
{
    Q_OBJECT

    public:
        explicit Add_His_Med(QWidget *parent = nullptr);
        ~Add_His_Med();

    private slots:
        void on_guardarpushbuton_clicked();

    private:
        Ui::Add_His_Med *ui;
        Centro_Salud *centroSalud;
};

#endif // ADD_HIS_MED_H
