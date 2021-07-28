#include "primera_vista.h"
#include "ui_primera_vista.h"
#include "mainwindow.h"
Primera_vista::Primera_vista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Primera_vista)
{
    ui->setupUi(this);
}

void Primera_vista::on_HistorialMed_clicked()
{

}

void Primera_vista::on_Suministros_clicked()
{

}
Primera_vista::~Primera_vista()
{
    delete ui;
}


