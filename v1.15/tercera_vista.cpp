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

void Tercera_vista::on_pushButton_clicked()
{
    Add_His_Med *Nuevo_Hist = new Add_His_Med(this);
    Nuevo_Hist->setModal(true);
    Nuevo_Hist->exec();
}



void Tercera_vista::on_pushButton_2_clicked()
{
    Busc_Historial *bus_His = new Busc_Historial(this);
    bus_His->setModal(true);
    bus_His->exec();
}

