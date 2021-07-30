#include "add_his_med.h"
#include "ui_add_his_med.h"
#include "QMessageBox"
Add_His_Med::Add_His_Med(QWidget *parent, Centro_Salud *_centroSalud) :
    QDialog(parent),
    ui(new Ui::Add_His_Med),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Add_His_Med::~Add_His_Med()
{
    delete ui;
}

void Add_His_Med::on_guardarpushbuton_clicked()
{
    QVector<QString> arr;
    QString nombre = ui->nombre->text();
    arr.push_back(nombre);
    QString _edad = ui->edad->text();
    arr.push_back(_edad);
    QString fechanacimiento = ui->fechanacimiento->text();
    arr.push_back(fechanacimiento);
    QString _peso = ui->peso->text();
    arr.push_back(_peso);
    QString _altura = ui->altura->text();
    arr.push_back(_altura);
    QString _dni = ui->dni->text();
    arr.push_back(_dni);
    QString direccion = ui->direccion->text();
    arr.push_back(direccion);
    QString vulnerabilidad = ui->vulnerabilidad->text();
    arr.push_back(vulnerabilidad);
    foreach(QString item,arr){
        if(item.isEmpty()){
            QMessageBox::critical(this,"Error","Existen espacios llenados incorrectamente");
            arr.clear();
            return;
        }
    }
    int edad = _edad.toInt();
    int peso = _peso.toInt();
    int altura = _altura.toInt();
    int dni = _dni.toInt();
    HistorialMedico* historial = new HistorialMedico(nombre,edad,fechanacimiento,peso,altura,dni,direccion,vulnerabilidad);
    centroSalud->historiales.push_back( historial );
    QMessageBox::information(this,"Exito", "Historial '"+ nombre + "' guardado.");
    close();
}

