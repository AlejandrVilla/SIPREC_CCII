#ifndef HISTORIALMEDICO_H
#define HISTORIALMEDICO_H

#include <QObject>
#include <QVector>

class HistorialMedico : public QObject
{
    Q_OBJECT
public:
    HistorialMedico(QString _nombre,int _edad,QString _fechaNacimiento,int _peso,int _altura,int _DNI,QString _direccion,QString _vulnerabilidad)
    :nombre(_nombre),edad(_edad),fechaNacimiento(_fechaNacimiento),peso(_peso),altura(_altura),DNI(_DNI),direccion(_direccion),vulnerabilidad(_vulnerabilidad){}

    void setNombre(QString nombre){ this->nombre = nombre; }
    QString getNombre(){ return nombre; }
    void setEdad(int edad){ this->edad = edad; }
    int getEdad(){ return edad; }
    void setFechaNacimiento(QString fechaNacimiento){ this->fechaNacimiento = fechaNacimiento; }
    QString getFechaNacimiento(){ return fechaNacimiento; }
    void setPeso(int peso){ this->peso = peso; }
    int getPeso(){ return peso; }
    void setAltura(int altura){ this->altura = altura; }
    int getAltura(){ return altura; }
    void setDNI(int DNI){ this->DNI = DNI; }
    int getDNI(){ return DNI; }
    void setDireccion(QString direccion){ this->direccion = direccion; }
    QString getDireccion(){ return direccion; }
    void setVulnerabilidad(QString vulnerabilidad){ this->vulnerabilidad = vulnerabilidad; }
    QString getVulnerabilidad(){ return vulnerabilidad; }
    void setEnfermedades(QString);
    //void getEnfermedades();

private:
    QString nombre;
    int edad;
    QVector<QString> enfermedadesPrevias;
    QString fechaNacimiento;
    int peso;
    int altura;
    int DNI;
    QString direccion;
    QString vulnerabilidad;

signals:

};

#endif // HISTORIALMEDICO_H
