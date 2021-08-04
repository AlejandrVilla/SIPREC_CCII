#ifndef HISTORIALMEDICO_H
#define HISTORIALMEDICO_H

#include <QObject>
#include <QVector>

class HistorialMedico : public QObject{

    Q_OBJECT

public:
    HistorialMedico(QString _nombre,int _edad,QString _fechaNacimiento,QString _peso,QString _sexo,
                    QString _altura,int _DNI,QString _direccion,QString _enfermedadesPrevias)
    :nombre(_nombre),edad(_edad),fechaNacimiento(_fechaNacimiento),
     peso(_peso),sexo(_sexo),altura(_altura),DNI(_DNI),direccion(_direccion),
     enfermedadesPrevias(_enfermedadesPrevias){}
    ~HistorialMedico(){}

    void setNombre(QString nombre);
    QString getNombre();
    void setEdad(int edad);
    int getEdad();
    void setFechaNacimiento(QString fechaNacimiento);
    QString getFechaNacimiento();
    void setPeso(QString peso);
    QString getPeso();
    void setAltura(QString altura);
    QString getAltura();
    void setDNI(int DNI);
    int getDNI();
    void setDireccion(QString direccion);
    QString getDireccion();
    void setEnfermedadesPrevias(QString vulnerabilidad);
    QString getEnfermedadesPrevias();
    void setSexo(QString _sexo);
    QString getSexo();

private:
    QString nombre;
    int edad;
    QString fechaNacimiento;
    QString peso;
    QString sexo;
    QString altura;
    int DNI;
    QString direccion;
    QString enfermedadesPrevias;
};

#endif // HISTORIALMEDICO_H
