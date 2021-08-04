#include "muestra_historiales.h"
#include "ui_muestra_historiales.h"

Muestra_Historiales::Muestra_Historiales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Muestra_Historiales)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
}

Muestra_Historiales::~Muestra_Historiales()
{
    delete ui;
}

void Muestra_Historiales::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(HistorialMedico *item,centroSalud->historiales){
        if(item->getSexo()=="varon"){
            content += "Nombre: " + item->getNombre() + "\n";
            content += "Edad: " + QString::number(item->getEdad()) + "\n";
            content += "DNI: " + QString::number(item->getDNI()) + "\n";
            content += "Altura: " + item->getAltura() + "\n";
            content += "Peso: " + item->getPeso() + "\n";
            content += "Enfermedades Previas: " + item->getEnfermedadesPrevias() + "\n";
            content += "Dirección: " + item->getDireccion() + "\n";
            content += "<=======================================================================>\n\n";
        }
    }
    ui->plainTextEdit->setPlainText(content);
}


void Muestra_Historiales::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(HistorialMedico *item,centroSalud->historiales){
        if(item->getSexo()=="mujer"){
            content += "Nombre: " + item->getNombre() + "\n";
            content += "Edad: " + QString::number(item->getEdad()) + "\n";
            content += "DNI: " + QString::number(item->getDNI()) + "\n";
            content += "Altura: " + item->getAltura() + "\n";
            content += "Peso: " + item->getPeso() + "\n";
            content += "Enfermedades Previas: " + item->getEnfermedadesPrevias() + "\n";
            content += "Dirección: " + item->getDireccion() + "\n";
            content += "<=======================================================================>\n\n";
        }
    }
    ui->plainTextEdit->setPlainText(content);
}

