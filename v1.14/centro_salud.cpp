#include "centro_salud.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <QMessageBox>
Centro_Salud::Centro_Salud(QObject *parent, QString _name) :
    QObject(parent), name(_name)
{

}

Centro_Salud::~Centro_Salud(){

    for (auto it = vacunas.begin() ; it != vacunas.end() ; it++){
        delete *it;
    }
    for (auto it = pruebas.begin() ; it != pruebas.end() ; it++){
        delete *it;
    }
    for (auto it = mascarillas.begin() ; it != mascarillas.end() ; it++){
        delete *it;
    }
    for (auto it = medicamentos.begin() ; it != medicamentos.end() ; it++){
        delete *it;
    }
    for (auto it = historiales.begin() ; it != historiales.end() ; it++){
        delete *it;
    }

}

QString Centro_Salud::getName(){
    return this->name;
}

void Centro_Salud::leerCsvHistoriales() {
    std::ifstream lectura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/historiales.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _nombre, _fechaNacimiento, _altura, _peso, _direccion, _sexo, _vulnerabilidad;
        int _edad, _dni;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0: //nombre - string
                    _nombre = dato;
                    break;
                case 1: //edad - int
                    _edad = std::stoi(dato);
                    break;
                case 2: //fecha de nacimient
                    _fechaNacimiento = dato;
                    break;
                case 3: //sexo
                    _peso = dato;
                    break;
                case 4: //peso - string
                    _sexo = dato;
                    break;
                case 5: //altura - string
                    _altura = dato;
                    break;
                case 6: //dni - int
                    _dni = std::stoi(dato);
                    break;
                case 7: //direccion - string
                    _direccion = dato;
                    break;
                case 8: //vulnerabilidad - string
                    _vulnerabilidad = dato;
                    break;
            }
        }
        HistorialMedico *nuevoElemento = new HistorialMedico(QString::fromStdString(_nombre),
                                            _edad,
                                            QString::fromStdString(_fechaNacimiento),
                                            QString::fromStdString(_peso),
                                            QString::fromStdString(_sexo),
                                            QString::fromStdString(_altura),
                                            _dni,
                                            QString::fromStdString(_direccion),
                                            QString::fromStdString(_vulnerabilidad));
        historiales.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvVacunas() {
    std::ifstream lectura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/vacunas.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _pais, _dosis;
        int _stock;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0:
                    _tipo = dato;
                    break;
                case 1:
                    _stock = std::stoi(dato);
                    break;
                case 2:
                    _llegada = dato;
                    break;
                case 3:
                    _pais = dato;
                    break;
                case 4:
                    _dosis = dato;
                    break;
            }
        }
        Vacunas *nuevoElemento = new Vacunas(QString::fromStdString(_tipo),
                                             _stock,
                                             QString::fromStdString(_llegada),
                                             QString::fromStdString(_pais),
                                             QString::fromStdString(_dosis));
        vacunas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvPruebas() {
    std::ifstream lectura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/pruebas.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada;
        int _stock;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0://tipo - string
                    _tipo = dato;
                    break;
                case 1://fecha de llegada - string
                    _llegada = dato;
                    break;
                case 2://stock - int
                    _stock = std::stoi(dato);
                    break;
            }
        }

        Prueba *nuevoElemento = new Prueba(QString::fromStdString(_tipo),
                                           QString::fromStdString(_llegada),
                                           _stock);
        pruebas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvMascarilla() {
    std::ifstream lectura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/mascarillas.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _calidad;
        int _stock;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0:
                    _tipo = dato;
                    break;
                case 1:
                    _llegada = dato;
                    break;
                case 2:
                    _stock = std::stoi(dato);
                    break;
                case 3:
                    _calidad = dato;
                    break;
            }
        }
        Mascarilla *nuevoElemento = new Mascarilla(
                                           QString::fromStdString(_tipo),
                                           QString::fromStdString(_llegada),
                                           _stock,
                                           QString::fromStdString(_calidad));
        mascarillas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvMedicamento() {
    std::ifstream lectura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/medicamentos.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _dosis;
        int _stock;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0:
                    _tipo = dato;
                    break;
                case 1:
                    _llegada = dato;
                    break;
                case 2:
                    _stock = std::stoi(dato);
                    break;
                case 3:
                    _dosis = dato;
                    break;
            }
        }
        Medicamento *nuevoElemento = new Medicamento(QString::fromStdString(_tipo),
                                            QString::fromStdString(_llegada), _stock,
                                            QString::fromStdString(_dosis));
        medicamentos.push_back(nuevoElemento);
    }
    lectura.close();
}



void Centro_Salud::escribirCsvVacunas() {
    std::ofstream escritura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/vacunas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto v,vacunas) {
        escritura << (v -> getTipo()).toStdString()<< ';'
                  <<  v -> getStock() << ';'
                  << (v -> getFechaLlegada()).toStdString() << ';'
                  << (v -> getPais()).toStdString() << ';'
                  << (v -> getDosis()).toStdString() << '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvPruebas() {
    std::ofstream escritura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/pruebas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto p,pruebas) {
        escritura << (p -> getTipo()).toStdString() << ';'
                  <<  p -> getStock() << ';'
                  << (p -> getFechaLlegada()).toStdString() << '\n';
    }
    escritura.close();

}

void Centro_Salud::escribirCsvMedicamento() {
    std::ofstream escritura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/medicamentos.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto med,medicamentos) {
        escritura << (med -> getTipo()).toStdString() << ';'
                  << (med -> getFechaLlegada()).toStdString()<< ';'
                  <<  med -> getStock() << ';'
                  << (med -> getDosis()).toStdString() << '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvMascarilla() {
    std::ofstream escritura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/mascarillas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto mas,mascarillas) {
        escritura << (mas -> getTipo()).toStdString() << ';'
                  << (mas -> getFechaLlegada()).toStdString() << ';'
                  <<  mas -> getStock() << ';'
                  << (mas -> getCalidad()).toStdString()<< '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvHistoriales() {
    std::ofstream escritura;
    std::string name = "C:/Users/MI PC/Desktop/SIPREC_CCII v1.14/historiales.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto _paciente,historiales) {
        escritura << (_paciente -> getNombre()).toStdString() << ';'
                  <<  _paciente -> getEdad() << ';'
                  << (_paciente -> getFechaNacimiento()).toStdString() << ';'
                  << (_paciente -> getPeso()).toStdString() << ';'
                  << (_paciente -> getSexo()).toStdString() << ';'
                  << (_paciente -> getAltura()).toStdString() << ';'
                  <<  _paciente -> getDNI() << ';'
                  << (_paciente -> getDireccion()).toStdString() << ';'
                  << (_paciente -> getVulnerabilidad()).toStdString() << '\n';
    }
    escritura.close();
}
