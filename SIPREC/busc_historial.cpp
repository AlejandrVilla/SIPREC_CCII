#include "busc_historial.h"
#include "ui_busc_historial.h"
#include <QMessageBox>

Busc_Historial::Busc_Historial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Busc_Historial)
{
    ui->setupUi(this);
    centroSalud = Centro_Salud::getInstance();
    ui->label_nombre->hide();
    ui->nombre->hide();
    ui->label_edad->hide();
    ui->edad->hide();
    ui->label_fecha->hide();
    ui->fechanacimiento->hide();
    ui->label_peso->hide();
    ui->peso->hide();
    ui->label_altura->hide();
    ui->altura->hide();
    ui->label_dni->hide();
    ui->dni->hide();
    ui->label_direccion->hide();
    ui->direccion->hide();
    ui->label_enfermedades->hide();
    ui->enfermedades->hide();
    ui->modificarpushbuton->hide();
    ui->cancelarpushbuton->hide();
    ui->varon->hide();
    ui->mujer->hide();
}

Busc_Historial::~Busc_Historial()
{
    delete ui;
}



void Busc_Historial::on_buscarpushbuton_clicked()
{
    QString _dni = ui->buscar_dni->text();
    int dni = _dni.toInt();
    for ( auto it = centroSalud->historiales.begin() ; it != centroSalud->historiales.end() ; it++ ){
        if ( (*it)->getDNI() == dni ){
            ui->label_nombre->show();
            ui->nombre->show();
            ui->label_edad->show();
            ui->edad->show();
            ui->label_fecha->show();
            ui->fechanacimiento->show();
            ui->label_peso->show();
            ui->peso->show();
            ui->label_altura->show();
            ui->altura->show();
            ui->label_dni->show();
            ui->dni->show();
            ui->label_direccion->show();
            ui->direccion->show();
            ui->label_enfermedades->show();
            ui->enfermedades->show();
            ui->modificarpushbuton->show();
            ui->cancelarpushbuton->show();
            ui->varon->show();
            ui->mujer->show();
            return;
        }
    }
    QMessageBox::warning(this,"Error", "No se encontro el DNI '"+ _dni);
    return;
}


void Busc_Historial::on_modificarpushbuton_clicked()
{
    QString _dni = ui->buscar_dni->text();
    int dni = _dni.toInt();
    auto it = centroSalud->historiales.begin();
    for ( ; it != centroSalud->historiales.end() ; it++ ){
        if ( (*it)->getDNI() == dni ){
            break;
        }
    }
    QString nombre = ui->nombre->text();
    if ( !nombre.isEmpty()){
        (*it)->setNombre(nombre);
    }
    QString _edad = ui->edad->text();
    if ( !_edad.isEmpty()){
        int edad = _edad.toInt();
        (*it)->setEdad(edad);
    }
    QString fechanacimiento = ui->fechanacimiento->text();
    if (!fechanacimiento.isEmpty()){
        (*it)->setFechaNacimiento(fechanacimiento);
    }
    QString _peso = ui->peso->text();
    if (!_peso.isEmpty()){
        (*it)->setPeso(_peso);
    }
    QString _altura = ui->altura->text();
    if ( !_altura.isEmpty() ){
        (*it)->setAltura(_altura);
    }
    _dni = ui->dni->text();
    if ( !_dni.isEmpty() ){
        int dni = _dni.toInt();
        (*it)->setDNI(dni);
    }
    QString direccion = ui->direccion->text();
    if ( !direccion.isEmpty() ){
        (*it)->setDireccion(direccion);
    }
    QString enfermedadesPrevias = ui->enfermedades->text();
    if ( !enfermedadesPrevias.isEmpty() ){
        (*it)->setEnfermedadesPrevias(enfermedadesPrevias);
    }
    QString sexo;
    if ( ui->varon->isChecked() ){
        sexo = "varon";
        (*it)->setSexo(sexo);
    }else if ( ui->mujer->isChecked() ){
        sexo = "mujer";
        (*it)->setSexo(sexo);
    }
    QMessageBox::information(this,"Exito", "Historial de '"+ (*it)->getNombre() + "' actualizado.");
    close();
}


void Busc_Historial::on_cancelarpushbuton_clicked()
{
    ui->label_nombre->hide();
    ui->nombre->hide();
    ui->label_edad->hide();
    ui->edad->hide();
    ui->label_fecha->hide();
    ui->fechanacimiento->hide();
    ui->label_peso->hide();
    ui->peso->hide();
    ui->label_altura->hide();
    ui->altura->hide();
    ui->label_dni->hide();
    ui->dni->hide();
    ui->label_direccion->hide();
    ui->direccion->hide();
    ui->label_enfermedades->hide();
    ui->enfermedades->hide();
    ui->modificarpushbuton->hide();
    ui->cancelarpushbuton->hide();
    ui->varon->hide();
    ui->mujer->hide();
}

