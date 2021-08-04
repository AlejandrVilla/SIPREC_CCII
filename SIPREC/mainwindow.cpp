#include "QMainWindow"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "primera_vista.h"
#include "segunda_vista.h"
#include "tercera_vista.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent, Centro_Salud *_centroSalud)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      centroSalud(_centroSalud)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new Primera_vista(this));
    ui->stackedWidget->addWidget(new segunda_vista(this));
    ui->stackedWidget->addWidget(new Tercera_vista(this));
    setCentralWidget(ui->stackedWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionListado_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionSuministros_2_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_actionHistoriales_Medicos_2_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_actionSalir_triggered()
{
    close();
}


void MainWindow::on_actionAcerca_de_QT_triggered()
{
    QMessageBox::aboutQt(this,"QT");
}


void MainWindow::on_actionAcerca_de_SIPREC_CCII_triggered()
{
    QString text = "SIPREC (Sistema de Inventario en Prevencion al Coronavirus)\n";
            text+= "Es un sistema desarrollado por alumnos de la escuela de Ciencia de la Computacion ";
            text+= "con la finalidad de brindar algun tipo de servicio que sea de ayuda a la comunidad ";
            text+= "en estos tiempos que vivimos.";
            text+= "\n\nAll rights reserved ©\n";
            text+= "Equipo de desarrollo SIPREC.";
    QMessageBox::about(this,"Sobre SIPREC",text);
}



