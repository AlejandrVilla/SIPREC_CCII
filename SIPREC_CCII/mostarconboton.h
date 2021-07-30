#ifndef MOSTARCONBOTON_H
#define MOSTARCONBOTON_H

#include <QWidget>
#include <QDialog>
namespace Ui {
class MostarconBoton;
}

class MostarconBoton : public QWidget
{
    Q_OBJECT

public:
    explicit MostarconBoton(QWidget *parent = nullptr);
    ~MostarconBoton();

private:
    Ui::MostarconBoton *ui;
};

#endif // MOSTARCONBOTON_H
