#include "muestradatos.h"
#include "ui_muestradatos.h"
#include "vacunas.h"

MuestraDatos::MuestraDatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuestraDatos)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
}

MuestraDatos::~MuestraDatos()
{
    delete ui;
}

void MuestraDatos::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(Vacunas* item,centroSalud->vacunas){
        content += "Nombre: " + item->getTipo() + "\n";
        content += "Stock: " + QString::number(item->getStock()) + "\n";
        content += "Fecha de Llegada: " + item->getFechaLlegada() + "\n";
        content += "Pais de Procedencia: " + item->getPais() + "\n";
        content += "Dosis/P: "  + item->getDosis() + "\n";
        content += "<====================================================>\n";
    }
    ui->plainTextEdit->setPlainText(content);
}


void MuestraDatos::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(Mascarilla* item,centroSalud->mascarillas){
        content += "Nombre: " + item->getTipo() + "\n";
        content += "Stock: " + QString::number(item->getStock()) + "\n";
        content += "Fecha de Llegada: " + item->getFechaLlegada() + "\n";
        content += "Calidad: "  + item->getCalidad() + "\n";
        content += "<====================================================>\n";
    }
    ui->plainTextEdit->setPlainText(content);
}


void MuestraDatos::on_pushButton_3_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(Medicamento* item,centroSalud->medicamentos){
        content += "Nombre: " + item->getTipo() + "\n";
        content += "Stock: " + QString::number(item->getStock()) + "\n";
        content += "Fecha de Llegada: " + item->getFechaLlegada() + "\n";
        content += "Dosis/P: "  + item->getDosis() + "\n";
        content += "<===================================================>\n";
    }
    ui->plainTextEdit->setPlainText(content);
}


void MuestraDatos::on_pushButton_4_clicked()
{
    ui->plainTextEdit->clear();
    QString content;
    foreach(Prueba* item,centroSalud->pruebas){
        content += "Nombre: " + item->getTipo() + "\n";
        content += "Stock: " + QString::number(item->getStock()) + "\n";
        content += "Fecha de Llegada: " + item->getFechaLlegada() + "\n";
        content += "<===================================================>\n";
    }
    ui->plainTextEdit->setPlainText(content);
}

