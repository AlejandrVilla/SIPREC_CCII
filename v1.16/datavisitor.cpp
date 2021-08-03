//visitor patern
#include "datavisitor.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <QMessageBox>

std::string PATH = "D:/archivos personales/documentos/C++/CC II/SIPREC_CCII versiones/SIPREC_CCII-1.15/v1.15/";

DataVisitor::DataVisitor( Centro_Salud* _centroSalud ){
    this->centroSalud = _centroSalud;
    leeCentroSalud();
}

DataVisitor::~DataVisitor(){
    escribeCentroSalud();
    delete centroSalud;
}

void DataVisitor::leeCentroSalud(){
    leerCsvHistoriales();
    leerCsvMascarilla();
    leerCsvMedicamento();
    leerCsvPruebas();
    leerCsvVacunas();
}

void DataVisitor::escribeCentroSalud(){
    escribirCsvHistoriales();
    escribirCsvMascarilla();
    escribirCsvMedicamento();
    escribirCsvPruebas();
    escribirCsvVacunas();
}

void DataVisitor::leerCsvHistoriales() {
    std::ifstream lectura;
    std::string name = PATH+"historiales.csv";
    lectura.open(name);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _nombre, _fechaNacimiento, _altura, _peso, _direccion, _sexo, _enfermedadesPrevias;
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
                    _enfermedadesPrevias = dato;
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
                                            QString::fromStdString(_enfermedadesPrevias));
        centroSalud->historiales.push_back(nuevoElemento);
    }
    lectura.close();
}

void DataVisitor::leerCsvVacunas() {
    std::ifstream lectura;
    std::string name = PATH+"vacunas.csv";
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
        centroSalud->vacunas.push_back(nuevoElemento);
    }
    lectura.close();
}

void DataVisitor::leerCsvPruebas() {
    std::ifstream lectura;
    std::string name = PATH+"pruebas.csv";
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
        centroSalud->pruebas.push_back(nuevoElemento);
    }
    lectura.close();
}

void DataVisitor::leerCsvMascarilla() {
    std::ifstream lectura;
    std::string name = PATH+"mascarillas.csv";
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
        centroSalud->mascarillas.push_back(nuevoElemento);
    }
    lectura.close();
}

void DataVisitor::leerCsvMedicamento() {
    std::ifstream lectura;
    std::string name = PATH+"medicamentos.csv";
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
        centroSalud->medicamentos.push_back(nuevoElemento);
    }
    lectura.close();
}



void DataVisitor::escribirCsvVacunas() {
    std::ofstream escritura;
    std::string name = PATH+"vacunas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto v,centroSalud->vacunas) {
        escritura << (v -> getTipo()).toStdString()<< ';'
                  <<  v -> getStock() << ';'
                  << (v -> getFechaLlegada()).toStdString() << ';'
                  << (v -> getPais()).toStdString() << ';'
                  << (v -> getDosis()).toStdString() << '\n';
    }
    escritura.close();
}

void DataVisitor::escribirCsvPruebas() {
    std::ofstream escritura;
    std::string name = PATH+"pruebas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto p,centroSalud->pruebas) {
        escritura << (p -> getTipo()).toStdString() << ';'
                  << (p -> getFechaLlegada()).toStdString() << ';'
                  <<  p -> getStock() << '\n';
    }
    escritura.close();

}

void DataVisitor::escribirCsvMedicamento() {
    std::ofstream escritura;
    std::string name = PATH+"medicamentos.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto med,centroSalud->medicamentos) {
        escritura << (med -> getTipo()).toStdString() << ';'
                  << (med -> getFechaLlegada()).toStdString()<< ';'
                  <<  med -> getStock() << ';'
                  << (med -> getDosis()).toStdString() << '\n';
    }
    escritura.close();
}

void DataVisitor::escribirCsvMascarilla() {
    std::ofstream escritura;
    std::string name = PATH+"mascarillas.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto mas,centroSalud->mascarillas) {
        escritura << (mas -> getTipo()).toStdString() << ';'
                  << (mas -> getFechaLlegada()).toStdString() << ';'
                  <<  mas -> getStock() << ';'
                  << (mas -> getCalidad()).toStdString()<< '\n';
    }
    escritura.close();
}

void DataVisitor::escribirCsvHistoriales() {
    std::ofstream escritura;
    std::string name = PATH+"historiales.csv";
    escritura.open(name, std::ios::trunc);
    foreach(auto _paciente,centroSalud->historiales) {
        escritura << (_paciente -> getNombre()).toStdString() << ';'
                  <<  _paciente -> getEdad() << ';'
                  << (_paciente -> getFechaNacimiento()).toStdString() << ';'
                  << (_paciente -> getPeso()).toStdString() << ';'
                  << (_paciente -> getSexo()).toStdString() << ';'
                  << (_paciente -> getAltura()).toStdString() << ';'
                  <<  _paciente -> getDNI() << ';'
                  << (_paciente -> getDireccion()).toStdString() << ';'
                  << (_paciente -> getEnfermedadesPrevias()).toStdString() << '\n';
    }
    escritura.close();
}
