#include "mostarconboton.h"
#include "ui_mostarconboton.h"

MostarconBoton::MostarconBoton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MostarconBoton)
{
    ui->setupUi(this);
}

MostarconBoton::~MostarconBoton()
{
    delete ui;
}
