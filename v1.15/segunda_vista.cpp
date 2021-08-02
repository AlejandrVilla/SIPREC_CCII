#include "segunda_vista.h"
#include "ui_segunda_vista.h"

segunda_vista::segunda_vista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::segunda_vista)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
}
segunda_vista::~segunda_vista()
{
    delete ui;
}

void segunda_vista::on_pushButton_clicked()
{
    AddSumi *nuevoSum = new AddSumi(this);
    nuevoSum->setModal(true);
    nuevoSum->exec();
}

void segunda_vista::on_pushButton_2_clicked()
{
    Buscar_Sumi buscar(this);
    buscar.setModal(true);
    buscar.exec();
}


void segunda_vista::on_pushButton_3_clicked()
{
    close();
}




