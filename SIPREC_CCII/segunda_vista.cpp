#include "segunda_vista.h"
#include "ui_segunda_vista.h"

segunda_vista::segunda_vista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::segunda_vista)
{
    ui->setupUi(this);
}

segunda_vista::~segunda_vista()
{
    delete ui;
}

void segunda_vista::on_pushButton_clicked()
{
    MostarconBoton *mostar = new MostarconBoton;
    mostar->show();

}

