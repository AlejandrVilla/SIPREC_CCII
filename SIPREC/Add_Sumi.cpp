#include "Add_Sumi.h"
#include "ui_Add_Sumi.h"
#include <QDialog>
#include <QMessageBox>
#include "suministro.h"
#include "prueba.h"
#include "vacunas.h"
#include "medicamento.h"
#include "mascarilla.h"

AddSumi::AddSumi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSumi)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
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
        Vacunas* suministro = new Vacunas(tipo,stock,fechaLlegada,pais,cantDosis);
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
        Prueba* suministro = new Prueba(tipo,fechaLlegada,stock);
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
        Mascarilla* suministro = new Mascarilla(tipo,fechaLlegada,stock,calidad);
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
        Medicamento* suministro = new Medicamento(tipo,fechaLlegada,stock,dosis);
        centroSalud->medicamentos.push_back(suministro);
        QMessageBox::information(this,"Exito",tipo + " guardado satisfactoriamente.");
        close();
        return;
    }
}


void AddSumi::on_vacuna_clicked()
{
    ui->tipo->show();
    ui->label_tipo->show();
    ui->fecha->show();
    ui->label_fecha->show();
    ui->stock->show();
    ui->label_stock->show();
    ui->pais->show();
    ui->label_pais->show();
    ui->dosis->show();
    ui->label_dosis->show();
    ui->calidad->hide();
    ui->label_calidad->hide();
}


void AddSumi::on_prueba_clicked()
{
    ui->tipo->show();
    ui->label_tipo->show();
    ui->fecha->show();
    ui->label_fecha->show();
    ui->stock->show();
    ui->label_stock->show();
    ui->pais->hide();
    ui->label_pais->hide();
    ui->dosis->hide();
    ui->label_dosis->hide();
    ui->calidad->hide();
    ui->label_calidad->hide();
}


void AddSumi::on_mascarilla_clicked()
{
    ui->tipo->show();
    ui->label_tipo->show();
    ui->fecha->show();
    ui->label_fecha->show();
    ui->stock->show();
    ui->label_stock->show();
    ui->pais->hide();
    ui->label_pais->hide();
    ui->dosis->hide();
    ui->label_dosis->hide();
    ui->calidad->show();
    ui->label_calidad->show();
}


void AddSumi::on_medicamento_clicked()
{
    ui->tipo->show();
    ui->label_tipo->show();
    ui->fecha->show();
    ui->label_fecha->show();
    ui->stock->show();
    ui->label_stock->show();
    ui->pais->hide();
    ui->label_pais->hide();
    ui->dosis->show();
    ui->label_dosis->show();
    ui->calidad->hide();
    ui->label_calidad->hide();
}

