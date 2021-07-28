#ifndef SEGUNDA_VISTA_H
#define SEGUNDA_VISTA_H

#include <QWidget>
#include "mostarconboton.h"
namespace Ui {
class segunda_vista;
}

class segunda_vista : public QWidget
{
    Q_OBJECT

public:
    explicit segunda_vista(QWidget *parent = nullptr);
    ~segunda_vista();

private slots:
    void on_pushButton_clicked();

private:
    Ui::segunda_vista *ui;
};

#endif // SEGUNDA_VISTA_H
