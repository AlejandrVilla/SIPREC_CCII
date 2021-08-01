#include "centro_salud.h"
#include <fstream>
#include <sstream>

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

Centro_Salud* Centro_Salud::getThis(){
    return this;
}

QString Centro_Salud::getName(){
    return this->name;
}

void Centro_Salud::leerCsvVacunas() {
    std::ifstream lectura;
    lectura.open("vacunas.csv", std::ios::in);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _pais, _dosis;
        int _stock;
        for(int col = 0; std::getline(registro, dato, ';'); ++col) {
            switch (col) {
                case 0://tipo - string
                    _tipo = dato;
                break;
                case 1://stock - int
                    _stock = std::stoi(dato);
                break;
                case 2://fecha de llegada - string
                    _llegada = dato;
                break;
                case 3://pais - string
                    _pais = dato;
                break;
                case 4://dosis - string
                    _dosis = dato;
                break;
            }
        }
        Vacunas *nuevoElemento = new Vacunas(QString::fromStdString(_tipo), _stock,
                                             QString::fromStdString(_llegada),
                                             QString::fromStdString(_pais),
                                             QString::fromStdString(_dosis));
        vacunas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvPruebas() {
    std::ifstream lectura;
    lectura.open("pruebas.csv", std::ios::in);
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
                                            QString::fromStdString(_llegada), _stock);
        pruebas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvMascarilla() {
    std::ifstream lectura;
    lectura.open("mascarillas.csv", std::ios::in);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _calidad;
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
                case 3://calidad - string
                    _calidad = dato;
                break;
            }
        }
        Mascarilla *nuevoElemento = new Mascarilla(QString::fromStdString(_tipo),
                                            QString::fromStdString(_llegada), _stock,
                                           QString::fromStdString(_calidad));
        mascarillas.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::leerCsvMedicamento() {
    std::ifstream lectura;
    lectura.open("medicamentos.csv", std::ios::in);
    for(std::string linea; std::getline(lectura, linea); ) {
        std::stringstream registro(linea);
        std::string dato;
        std::string _tipo, _llegada, _dosis;
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
                case 3: //dosis - string
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

void Centro_Salud::leerCsvHistoriales() {
    std::ifstream lectura;
    lectura.open("historiales.csv", std::ios::in);
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
                    _edad = dato;
                break;
                case 2: //fecha de nacimiento
                    _fechaNacimiento = dato;
                break;
                case 3: //sexo
                    _sexo = dato;
                break;
                case 4: //peso - string
                    _peso = dato;
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
                                            edad, QString::fromStdString(_fechaNacimiento),
                                            QString::fromStdString(_sexo)
                                            QString::fromStdString(_peso),
                                            QString::fromStdString(_altura),
                                            QString::fromStdString(_dni),
                                            QString::fromStdString(_direccion),
                                            QString::fromStdString(_vulnerabilidad));
        historiales.push_back(nuevoElemento);
    }
    lectura.close();
}

void Centro_Salud::escribirCsvVacunas() {
    std::ofstream escritura;
    escritura.open("vacunas.csv", std::ios::trunc);
    for(auto v : vacunas) {
        escritura << v -> getTipo() << ';'
                  << v -> getStock() << ';'
                  << v -> getFechaLlegada() << ';'
                  << v -> getPais() << ';'
                  << v -> getDosis() << '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvPruebas() {
    std::ofstream escritura;
    escritura.open("pruebas.csv", std::ios::trunc);
    for(auto p : pruebas) {
        escritura << p -> getTipo() << ';'
                  << p -> getStock() << ';'
                  << p -> getFechaLlegada() << ';'
                  << p -> getPais() << ';'
                  << p -> getDosis() << '\n';
    }
    escritura.close();

}

void Centro_Salud::escribirCsvMedicamento() {
    std::ofstream escritura;
    escritura.open("medicamentos.csv", std::ios::trunc);
    for(auto med : medicamentos) {
        escritura << med -> getTipo() << ';'
                  << med ->getFechaLlegada() << ';'
                  << med ->getStock() << ';'
                  << med -> getDosis() << '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvMascarilla() {
    std::ofstream escritura;
    escritura.open("mascarillas.csv", std::ios::trunc);
    for(auto mas : mascarillas) {
        escritura << mas -> getTipo() << ';'
                  << mas -> getFechaLlegada() << ';'
                  << mas->getStock() << ';'
                  << mas->getCalidad()<< '\n';
    }
    escritura.close();
}

void Centro_Salud::escribirCsvHistoriales() {
    std::ofstream escritura;
    escritura.open("historiales.csv", std::ios::trunc);
    for(auto _paciente : pacientes) {
        escritura << _paciente -> getNombre() << ';' << _paciente->getEdad() << ';'
                << _paciente -> getFechaNacimiento() << ';' << _paciente->getPeso() << ';'
                << _paciente->getAltura() << ';' << _paciente->getDNI() << ';'
                << _paciente->getDireccion() << ';' << _paciente->getVulnerabilidad() << '\n';
    }
    escritura.close();
}
