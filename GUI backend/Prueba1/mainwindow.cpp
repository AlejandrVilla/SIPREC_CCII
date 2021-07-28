#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form1.h"
#include "form2.h"
#include "form3.h"
//#include "centro_salud.h"
//#include "historialmedico.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    centroSalud = new Centro_Salud;
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new Form1( this , centroSalud ));
    ui->stackedWidget->addWidget(new Form2( this , centroSalud ));
    ui->stackedWidget->addWidget(new Form3( this , centroSalud ));
    setCentralWidget(ui->stackedWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete centroSalud;
}


void MainWindow::on_actionprimero_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_actionsegundo_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actiontercero_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_actionquitar_triggered()
{
    close();
}




