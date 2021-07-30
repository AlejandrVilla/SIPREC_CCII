#include "segunda_vista.h"
#include "ui_segunda_vista.h"

segunda_vista::segunda_vista(QWidget *parent, Centro_Salud *_centroSalud) :
    QWidget(parent),
    ui(new Ui::segunda_vista),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

segunda_vista::~segunda_vista()
{
    delete ui;
}

void segunda_vista::on_pushButton_clicked()
{
    AddSumi *dia = new AddSumi(this,centroSalud);
    dia->setModal(true);
    dia->exec();
}


void segunda_vista::on_pushButton_3_clicked()
{
    close();
}

