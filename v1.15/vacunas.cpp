#include "vacunas.h"

void Vacunas::setPais(QString pais){
    this->pais=pais;
}

QString Vacunas::getPais(){
    return pais;
}

void Vacunas::setDosis(QString cantDosis){
    this->cantDosis=cantDosis;
}

QString Vacunas::getDosis(){
    return cantDosis;
}
