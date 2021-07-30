#include "centro_salud.h"

Centro_Salud::Centro_Salud(QObject *parent) : QObject(parent)
{

}

Centro_Salud::~Centro_Salud(){
    for (auto it = vacunas.begin() ; it != vacunas.end() ; it++){
        delete it;
    }
    for (auto it = pruebas.begin() ; it != pruebas.end() ; it++){
        delete it;
    }
    for (auto it = mascarillas.begin() ; it != mascarillas.end() ; it++){
        delete it;
    }
    for (auto it = medicamentos.begin() ; it != medicamentos.end() ; it++){
        delete it;
    }
    for (auto it = historiales.begin() ; it != historiales.end() ; it++){
        delete it;
    }
}

Centro_Salud* Centro_Salud::getThis(){
    return this;
}
