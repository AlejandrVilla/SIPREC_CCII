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

void segunda_vista::on_pushButtonAdd_clicked()
{
    AddSumi nuevoSum(this);
    nuevoSum.setModal(true);
    nuevoSum.exec();
}

void segunda_vista::on_pushButtonEdit_clicked()
{
    Buscar_Sumi buscar(this);
    buscar.setModal(true);
    buscar.exec();
}




