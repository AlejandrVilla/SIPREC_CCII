#include "QMainWindow"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "primera_vista.h"
#include "segunda_vista.h"
#include "tercera_vista.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Centro_Salud *centroSalud = new Centro_Salud;
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new Primera_vista(this,centroSalud));
    ui->stackedWidget->addWidget(new segunda_vista(this,centroSalud));
    ui->stackedWidget->addWidget(new Tercera_vista(this,centroSalud));
    setCentralWidget(ui->stackedWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSuministros_2_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_actionHistoriales_Medicos_2_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_actionVolver_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}


void MainWindow::on_actionAcerca_de_QT_triggered()
{
    QMessageBox::aboutQt(this,"QT");
}

