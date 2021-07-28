#include "tercera_vista.h"
#include "ui_tercera_vista.h"

Tercera_vista::Tercera_vista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tercera_vista)
{
    ui->setupUi(this);
}

Tercera_vista::~Tercera_vista()
{
    delete ui;
}
