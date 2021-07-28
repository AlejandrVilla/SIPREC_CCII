#ifndef TERCERA_VISTA_H
#define TERCERA_VISTA_H

#include <QWidget>

namespace Ui {
class Tercera_vista;
}

class Tercera_vista : public QWidget
{
    Q_OBJECT

public:
    explicit Tercera_vista(QWidget *parent = nullptr);
    ~Tercera_vista();

private:
    Ui::Tercera_vista *ui;
};

#endif // TERCERA_VISTA_H
