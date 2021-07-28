#include "form2.h"
#include "ui_form2.h"
#include <QMessageBox>

Form2::Form2(QWidget *parent, Centro_Salud* _centroSalud) :
    QWidget(parent),
    ui(new Ui::Form2),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_buscarpushboton_clicked()
{
    if ( ui->vacuna->autoExclusive() ){
        QString tipo = ui->buscar->text();
        for (auto it = centroSalud->vacunas.begin() ; it != centroSalud->vacunas.end() ; it++){
            if ( (*it)->getTipo() == tipo ){
                QMessageBox::information(this,"encontrado",tipo);
                return;
            }
        }
        QMessageBox::information(this,"no encontrado",tipo);
    }
    else if ( ui->prueba->autoExclusive() ){
        QString tipo = ui->buscar->text();
        for (auto it = centroSalud->pruebas.begin() ; it != centroSalud->pruebas.end() ; it++){
            if ( (*it)->getTipo() == tipo ){
                QMessageBox::information(this,"encontrado",tipo);
                return;
            }
        }
        QMessageBox::information(this,"no encontrado",tipo);
    }
    else if ( ui->medicamento->autoExclusive() ){
        QString tipo = ui->buscar->text();
        for (auto it = centroSalud->medicamentos.begin() ; it != centroSalud->medicamentos.end() ; it++){
            if ( (*it)->getTipo() == tipo ){
                QMessageBox::information(this,"encontrado",tipo);
                return;
            }
        }
        QMessageBox::information(this,"no encontrado",tipo);
    }
    else if ( ui->mascarilla->autoExclusive() ){
        QString tipo = ui->buscar->text();
        for (auto it = centroSalud->mascarillas.begin() ; it != centroSalud->mascarillas.end() ; it++){
            if ( (*it)->getTipo() == tipo ){
                QMessageBox::information(this,"encontrado",tipo);
                return;
            }
        }
        QMessageBox::information(this,"no encontrado",tipo);
    }
}

