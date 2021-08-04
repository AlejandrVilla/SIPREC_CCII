#include "historialmedico.h"

void HistorialMedico::setNombre(QString nombre){
    this->nombre = nombre;
}

QString HistorialMedico::getNombre(){
    return nombre;
}

void HistorialMedico::setEdad(int edad){
    this->edad = edad;
}

int HistorialMedico::getEdad(){
    return edad;
}

void HistorialMedico::setFechaNacimiento(QString fechaNacimiento){
    this->fechaNacimiento = fechaNacimiento;
}

QString HistorialMedico::getFechaNacimiento(){
    return fechaNacimiento;
}

void HistorialMedico::setPeso(QString peso){
    this->peso = peso;
}

QString HistorialMedico::getPeso(){
    return peso;
}

void HistorialMedico::setAltura(QString altura){
    this->altura = altura;
}

QString HistorialMedico::getAltura(){
    return altura;
}

void HistorialMedico::setDNI(int DNI){
    this->DNI = DNI;
}

int HistorialMedico::getDNI(){
    return DNI;
}

void HistorialMedico::setDireccion(QString direccion){
    this->direccion = direccion;
}

QString HistorialMedico::getDireccion(){
    return direccion;
}

void HistorialMedico::setEnfermedadesPrevias(QString enfermedadesPrevias){
    this->enfermedadesPrevias = enfermedadesPrevias;
}

QString HistorialMedico::getEnfermedadesPrevias(){
    return enfermedadesPrevias;
}

void HistorialMedico::setSexo(QString _sexo){
    this->sexo = _sexo;
}

QString HistorialMedico::getSexo(){
    return this->sexo;
}


