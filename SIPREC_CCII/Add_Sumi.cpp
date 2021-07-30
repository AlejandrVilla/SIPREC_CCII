#include "Add_Sumi.h"
#include "ui_Add_Sumi.h"
#include <QDialog>
#include <QMessageBox>
#include "suministro.h"
#include "prueba.h"
#include "vacunas.h"
#include "medicamento.h"
#include "mascarilla.h"
AddSumi::AddSumi(QWidget *parent,Centro_Salud* _centroSalud) :
    QDialog(parent),
    ui(new Ui::AddSumi),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

AddSumi::~AddSumi()
{
    delete ui;
}

void AddSumi::on_enviarpushbuton_clicked()
{
    if (ui->vacuna->isChecked()==true){
        QVector<QString>arr;
        QString tipo = ui->tipo->text();
        arr.push_back(tipo);
        QString fechaLlegada = ui->fecha->text();
        arr.push_back(fechaLlegada);
        QString Sstock = ui->stock->text();
        arr.push_back(Sstock);
        QString pais = ui->pais->text();
        arr.push_back(pais);
        QString cantDosis = ui->dosis->text();
        arr.push_back(cantDosis);
        foreach(QString item,arr){
            if(item.isEmpty()){
                QMessageBox::critical(this,"Error","Existen espacios llenados incorrectamente");
                arr.clear();
                return;
            }
        }
        int stock = Sstock.toInt();
        Suministro* suministro = new Vacunas(tipo,stock,fechaLlegada,pais,cantDosis);
        centroSalud->vacunas.push_back(suministro);
        QMessageBox::information(this,"Exito",tipo +" guardado satisfactoriamente.");
        close();
        return;
    }
    else if (ui->prueba->isChecked()==true){
        QVector<QString>arr2;
        QString tipo = ui->tipo->text();
        arr2.push_back(tipo);
        QString fechaLlegada = ui->fecha->text();
        arr2.push_back(fechaLlegada);
        QString Sstock = ui->stock->text();
        arr2.push_back(Sstock);
        foreach(QString item,arr2){
            if(item.isEmpty()){
                QMessageBox::critical(this,"Error","Existen espacios llenados incorrectamente");
                arr2.clear();
                return;
            }
        }
        int stock = Sstock.toInt();
        Suministro* suministro = new Prueba(tipo,fechaLlegada,stock);
        centroSalud->pruebas.push_back(suministro);
        QMessageBox::information(this,"Exito",tipo +" guardado satisfactoriamente.");
        close();
        return;
    }
    else if (ui->mascarilla->isChecked()==true){
        QVector<QString>arr3;
        QString tipo = ui->tipo->text();
        arr3.push_back(tipo);
        QString fechaLlegada = ui->fecha->text();
        arr3.push_back(fechaLlegada);
        QString Sstock = ui->stock->text();
        arr3.push_back(Sstock);
        QString calidad = ui->calidad->text();
        arr3.push_back(calidad);
        foreach(QString item,arr3){
            if(item.isEmpty()){
                QMessageBox::critical(this,"Error","Existen espacios llenados incorrectamente");
                arr3.clear();
                return;
            }
        }
        int stock = Sstock.toInt();
        Suministro* suministro = new Mascarilla(tipo,fechaLlegada,stock,calidad);
        centroSalud->mascarillas.push_back(suministro);
        QMessageBox::information(this,"Exito",tipo +" guardado satisfactoriamente.");
        close();
        return;
    }
    else if (ui->medicamento->isChecked()==true){
        QVector<QString>arr4;
        QString tipo = ui->tipo->text();
        arr4.push_back(tipo);
        QString fechaLlegada = ui->fecha->text();
        arr4.push_back(fechaLlegada);
        QString Sstock = ui->stock->text();
        arr4.push_back(Sstock);
        QString dosis = ui->dosis->text();
        arr4.push_back(dosis);
        foreach(QString item,arr4){
            if(item.isEmpty()){
                QMessageBox::critical(this,"Error","Existen espacios llenados incorrectamente");
                arr4.clear();
                return;
            }
        }
        int stock = Sstock.toInt();
        Suministro* suministro = new Medicamento(tipo,fechaLlegada,stock,dosis);
        centroSalud->medicamentos.push_back(suministro);
        QMessageBox::information(this,"Exito",tipo + " guardado satisfactoriamente.");
        close();
        return;
    }
}

