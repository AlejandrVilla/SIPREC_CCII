#include "muestradatos.h"
#include "ui_muestradatos.h"

MuestraDatos::MuestraDatos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MuestraDatos)
{
    ui->setupUi(this);
}

MuestraDatos::~MuestraDatos()
{
    delete ui;
}
