#include "form1.h"
#include "ui_form1.h"
#include <QMessageBox>
#include "suministro.h"
#include "prueba.h"
#include "vacunas.h"
#include "medicamento.h"
#include "mascarilla.h"

Form1::Form1(QWidget *parent,Centro_Salud* _centroSalud) :
    QWidget(parent),
    ui(new Ui::Form1),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_enviarpushbuton_clicked()
{
    if (ui->vacuna->autoExclusive()){
        QString tipo = ui->tipo->text();
        QString fechaLlegada = ui->fecha->text();
        QString Sstock = ui->stock->text();
        QString pais = ui->pais->text();
        QString cantDosis = ui->dosis->text();
        int stock = Sstock.toInt();
        Suministro* suministro = new Vacunas(tipo,stock,fechaLlegada,pais,cantDosis);
        centroSalud->vacunas.push_back(suministro);
        QMessageBox::information(this,"guardado",tipo);
    }
    else if (ui->prueba->autoExclusive()){
        QString tipo = ui->tipo->text();
        QString fechaLlegada = ui->fecha->text();
        QString Sstock = ui->stock->text();
        int stock = Sstock.toInt();
        Suministro* suministro = new Prueba(tipo,fechaLlegada,stock);
        centroSalud->pruebas.push_back(suministro);
        QMessageBox::information(this,"guardado",tipo);
    }
    else if (ui->mascarilla->autoExclusive()){
        QString tipo = ui->tipo->text();
        QString fechaLlegada = ui->fecha->text();
        QString Sstock = ui->stock->text();
        QString calidad = ui->calidad->text();
        int stock = Sstock.toInt();
        Suministro* suministro = new Mascarilla(tipo,fechaLlegada,stock,calidad);
        centroSalud->mascarillas.push_back(suministro);
        QMessageBox::information(this,"guardado",tipo);
    }
    else if (ui->medicamento->autoExclusive()){
        QString tipo = ui->tipo->text();
        QString fechaLlegada = ui->fecha->text();
        QString Sstock = ui->stock->text();
        QString dosis = ui->dosis->text();
        int stock = Sstock.toInt();
        Suministro* suministro = new Medicamento(tipo,fechaLlegada,stock,dosis);
        centroSalud->medicamentos.push_back(suministro);
        QMessageBox::information(this,"guardado",tipo);
    }
}


