#include "form3.h"
#include "ui_form3.h"
#include <QMessageBox>

Form3::Form3(QWidget *parent, Centro_Salud* _centroSalud) :
    QWidget(parent),
    ui(new Ui::Form3),
    centroSalud(_centroSalud)
{
    ui->setupUi(this);
}

Form3::~Form3()
{
    delete ui;
}

void Form3::on_guardarpushbuton_clicked()
{
    QString nombre = ui->nombre->text();
    QString _edad = ui->edad->text();
    QString fechanacimiento = ui->fechanacimiento->text();
    QString _peso = ui->peso->text();
    QString _altura = ui->altura->text();
    QString _dni = ui->dni->text();
    QString direccion = ui->direccion->text();
    QString vulnerabilidad = ui->vulnerabilidad->text();
    int edad = _edad.toInt();
    int peso = _peso.toInt();
    int altura = _altura.toInt();
    int dni = _dni.toInt();
    HistorialMedico* historial = new HistorialMedico(nombre,edad,fechanacimiento,peso,altura,dni,direccion,vulnerabilidad);
    centroSalud->historiales.push_back( historial );
    QMessageBox::information(this,"guardado",nombre);
}

