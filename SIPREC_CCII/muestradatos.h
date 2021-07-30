#ifndef MUESTRADATOS_H
#define MUESTRADATOS_H

#include <QWidget>

namespace Ui {
class MuestraDatos;
}

class MuestraDatos : public QWidget
{
    Q_OBJECT

public:
    explicit MuestraDatos(QWidget *parent = nullptr);
    ~MuestraDatos();

private:
    Ui::MuestraDatos *ui;
};

#endif // MUESTRADATOS_H
