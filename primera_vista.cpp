#include "primera_vista.h"
#include "ui_primera_vista.h"
#include "mainwindow.h"
Primera_vista::Primera_vista(QWidget *parent, Centro_Salud *_centroSalud) :
    QWidget(parent),
    ui(new Ui::Primera_vista),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
    QString title = "Bienvenidos al " + centroSalud->getName() + " SIPREC.";
    ui->label->setText(title);
}

void Primera_vista::on_HistorialMed_clicked()
{
    Muestra_Historiales *muestraH = new Muestra_Historiales(this,centroSalud);
    muestraH->setModal(true);
    muestraH->exec();
}

void Primera_vista::on_Suministros_clicked()
{
    MuestraDatos *muestra = new MuestraDatos(this,centroSalud);
    muestra->setModal(true);
    muestra->exec();
}

Primera_vista::~Primera_vista()
{
    delete ui;
}

