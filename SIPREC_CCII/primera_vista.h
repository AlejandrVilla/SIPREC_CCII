#ifndef PRIMERA_VISTA_H
#define PRIMERA_VISTA_H

#include <QWidget>

namespace Ui {
class Primera_vista;
}

class Primera_vista : public QWidget
{
    Q_OBJECT

public:
    explicit Primera_vista(QWidget *parent = nullptr);
    ~Primera_vista();

private slots:
    void on_HistorialMed_clicked();

    void on_Suministros_clicked();

private:
    Ui::Primera_vista *ui;
};

#endif // PRIMERA_VISTA_H
