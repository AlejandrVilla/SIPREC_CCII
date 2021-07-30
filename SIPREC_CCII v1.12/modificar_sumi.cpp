#include "modificar_sumi.h"
#include "ui_modificar_sumi.h"
#include "QMessageBox"

Modificar_Sumi::Modificar_Sumi(QWidget *parent, Centro_Salud* _centroSalud) :
    QDialog(parent),
    ui(new Ui::Modificar_Sumi),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Modificar_Sumi::~Modificar_Sumi()
{
    delete ui;
}

void Modificar_Sumi::on_enviarpushbuton_clicked()
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
}

void Modificar_Sumi::on_vacuna_clicked()
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


void Modificar_Sumi::on_prueba_clicked()
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


void Modificar_Sumi::on_mascarilla_clicked()
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


void Modificar_Sumi::on_medicamento_clicked()
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



