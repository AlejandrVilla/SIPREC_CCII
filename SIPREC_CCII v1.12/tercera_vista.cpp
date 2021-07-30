#include "tercera_vista.h"
#include "ui_tercera_vista.h"

Tercera_vista::Tercera_vista(QWidget *parent,Centro_Salud *_centroSalud) :
    QWidget(parent),
    ui(new Ui::Tercera_vista),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Tercera_vista::~Tercera_vista()
{
    delete ui;
}

void Tercera_vista::on_pushButton_clicked()
{
    Add_His_Med Nuevo_Hist(this,centroSalud);
    Nuevo_Hist.setModal(true);
    Nuevo_Hist.exec();
}



void Tercera_vista::on_pushButton_2_clicked()
{
    Buscar_hist Buscar(this,centroSalud);
    Buscar.setModal(true);
    Buscar.exec();
}
