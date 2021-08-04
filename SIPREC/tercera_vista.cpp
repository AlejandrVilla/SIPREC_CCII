#include "tercera_vista.h"
#include "ui_tercera_vista.h"

Tercera_vista::Tercera_vista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tercera_vista)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
}

Tercera_vista::~Tercera_vista()
{
    delete ui;
}

void Tercera_vista::on_pushButtonAdd_clicked()
{
    Add_His_Med Nuevo_Hist(this);
    Nuevo_Hist.setModal(true);
    Nuevo_Hist.exec();
}


void Tercera_vista::on_pushButtonEdit_clicked()
{
    Busc_Historial bus_His(this);
    bus_His.setModal(true);
    bus_His.exec();
}

