#include "buscar_sumi.h"
#include "ui_buscar_sumi.h"
#include "QMessageBox"

Buscar_Sumi::Buscar_Sumi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buscar_Sumi)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
    ui->tipo->hide();
    ui->label_tipo->hide();
    ui->fecha->hide();
    ui->label_fecha->hide();
    ui->stock->hide();
    ui->label_stock->hide();
    ui->pais->hide();
    ui->label_pais->hide();
    ui->dosis->hide();
    ui->label_dosis->hide();
    ui->calidad->hide();
    ui->label_calidad->hide();
    ui->enviarpushbuton->hide();
}

Buscar_Sumi::~Buscar_Sumi()
{
    delete ui;
}

void Buscar_Sumi::on_pushButtonbuscar_clicked()
{
    QString nombre = ui->nombre->text();
    if ( nombre.isEmpty() ){
        QMessageBox::critical(this,"Error","Rellene la casilla de búsqueda.");
        return;
    }

    if (ui->vacuna->isChecked()){
        for (auto it = centroSalud->vacunas.begin() ; it != centroSalud->vacunas.end() ; it++){
            if ( (*it)->getTipo() == nombre ){
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
                ui->enviarpushbuton->show();
                return;
            }
        }
        QMessageBox::critical(this,"Error","No se encontro el nombre del suministro indicado");
        return;
    }
    else if (ui->prueba->isChecked()){
        for (auto it = centroSalud->pruebas.begin() ; it != centroSalud->pruebas.end() ; it++){
            if ( (*it)->getTipo() == nombre ){
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
                ui->enviarpushbuton->show();
                return;
            }
        }
        QMessageBox::critical(this,"Error","No se encontro el nombre del suministro indicado");
        return;
    }
    else if (ui->mascarilla->isChecked()){
        for (auto it = centroSalud->mascarillas.begin() ; it != centroSalud->mascarillas.end() ; it++){
            if ( (*it)->getTipo() == nombre ){
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
                ui->enviarpushbuton->show();
                return;
            }  
        }
        QMessageBox::critical(this,"Error","No se encontro el nombre del suministro indicado");
        return;
    }
    else if (ui->medicamento->isChecked()){
        for (auto it = centroSalud->medicamentos.begin() ; it != centroSalud->medicamentos.end() ; it++){
            if ( (*it)->getTipo() == nombre ){
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
                ui->enviarpushbuton->show();
                return;
            }      
        }
        QMessageBox::critical(this,"Error","No se encontro el nombre del suministro indicado" );
        return;
    }
}


void Buscar_Sumi::on_enviarpushbuton_clicked()
{
    if(ui->vacuna->isChecked()){
        QString tipo = ui->tipo->text();
        QString fecha = ui->fecha->text();
        QString _stock = ui->stock->text();
        QString pais = ui->pais->text();
        QString dosis = ui->dosis->text();
        auto it = centroSalud->vacunas.begin();
        for ( ; it != centroSalud->vacunas.end() ; it++){
            if ( (*it)->getTipo() == ui->nombre->text() ){
                break;
            }
        }
        if ( !tipo.isEmpty() ){
            (*it)->setTipo(tipo);
        }
        if ( !fecha.isEmpty() ){
            (*it)->setFechaLlegada(fecha);
        }
        if ( !_stock.isEmpty() ){
            int stock = _stock.toInt();
            (*it)->setStock(stock);
        }
        if ( !pais.isEmpty() ){
            (*it)->setPais(pais);
        }
        if ( !dosis.isEmpty() ){
            (*it)->setDosis(dosis);
        }
        QMessageBox::information(this,"Exito", (*it)->getTipo() + " se modificó satisfactoriamente." );
        close();
        return;
    }
    else if(ui->prueba->isChecked()){
        QString tipo = ui->tipo->text();
        QString fecha = ui->fecha->text();
        QString _stock = ui->stock->text();
        auto it = centroSalud->pruebas.begin();
        for ( ; it != centroSalud->pruebas.end() ; it++){
            if ( (*it)->getTipo() == ui->nombre->text() ){
                break;
            }
        }
        if ( !tipo.isEmpty() ){
            (*it)->setTipo(tipo);
        }
        if ( !fecha.isEmpty() ){
            (*it)->setFechaLlegada(fecha);
        }
        if ( !_stock.isEmpty() ){
            int stock = _stock.toInt();
            (*it)->setStock(stock);
        }
        QMessageBox::information(this,"Exito", (*it)->getTipo() + " se modificó satisfactoriamente." );
        close();
        return;
    }
    else if(ui->medicamento->isChecked()){
        QString tipo = ui->tipo->text();
        QString fecha = ui->fecha->text();
        QString _stock = ui->stock->text();
        QString dosis = ui->dosis->text();
        auto it = centroSalud->medicamentos.begin();
        for ( ; it != centroSalud->medicamentos.end() ; it++){
            if ( (*it)->getTipo() == ui->nombre->text() ){
                break;
            }
        }
        if ( !tipo.isEmpty() ){
            (*it)->setTipo(tipo);
        }
        if ( !fecha.isEmpty() ){
            (*it)->setFechaLlegada(fecha);
        }
        if ( !_stock.isEmpty() ){
            int stock = _stock.toInt();
            (*it)->setStock(stock);
        }
        if ( !dosis.isEmpty() ){
            (*it)->setDosis(dosis);
        }
        QMessageBox::information(this,"Exito", (*it)->getTipo()+ " se modificó satisfactoriamente." );
        close();
        return;
    }
    else if(ui->mascarilla->isChecked()){
        QString tipo = ui->tipo->text();
        QString fecha = ui->fecha->text();
        QString _stock = ui->stock->text();
        QString calidad = ui->calidad->text();
        auto it = centroSalud->mascarillas.begin();
        for ( ; it != centroSalud->mascarillas.end() ; it++){
            if ( (*it)->getTipo() == ui->nombre->text() ){
                break;
            }
        }
        if ( !tipo.isEmpty() ){
            (*it)->setTipo(tipo);
        }
        if ( !fecha.isEmpty() ){
            (*it)->setFechaLlegada(fecha);
        }
        if ( !_stock.isEmpty() ){
            int stock = _stock.toInt();
            (*it)->setStock(stock);
        }
        if ( !calidad.isEmpty() ){
            (*it)->setCalidad(calidad);
        }
        QMessageBox::information(this,"Exito",(*it)->getTipo()+ " se modificó satisfactoriamente." );
        close();
        return;
    }
}

