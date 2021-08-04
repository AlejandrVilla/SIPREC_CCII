#include "centro_salud.h"
#include <iostream>
#include <QMessageBox>

Centro_Salud* Centro_Salud::_centroSalud = nullptr;

Centro_Salud::Centro_Salud(QObject *parent, QString _name)      //singleton patern
    : QObject(parent), name(_name){}

Centro_Salud* Centro_Salud::getInstance(QObject *parent,QString name){      //singleton patern
    if ( _centroSalud == nullptr )
        _centroSalud = new Centro_Salud(parent,name);
    return _centroSalud;
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


