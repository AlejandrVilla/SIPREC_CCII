#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "centro_salud.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionSuministros_2_triggered();

    void on_actionHistoriales_Medicos_2_triggered();

    void on_actionVolver_triggered();

    void on_actionSalir_triggered();

    void on_actionAcerca_de_QT_triggered();

    void on_actionAcerca_de_SIPREC_CCII_triggered();

private:
    Ui::MainWindow *ui;
    Centro_Salud *centroSalud;
};
#endif // MAINWINDOW_H
