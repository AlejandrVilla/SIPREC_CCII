#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "centro_salud.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionprimero_triggered();

    void on_actionsegundo_triggered();

    void on_actionquitar_triggered();

    void on_actiontercero_triggered();

private:
    Ui::MainWindow* ui;
    Centro_Salud* centroSalud;
};
#endif // MAINWINDOW_H
