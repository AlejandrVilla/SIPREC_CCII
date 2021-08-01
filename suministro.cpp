#include "suministro.h"

void Suministro::setTipo(QString tipo){
    this->tipo=tipo;
}

QString Suministro::getTipo(){
    return tipo;
}

void Suministro::setFechaLlegada(QString fechaLlegada){
    this->fechaLlegada=fechaLlegada;
}

QString Suministro::getFechaLlegada(){
    return fechaLlegada;
}

void Suministro::setStock(int stock){
    this->stock=stock;
}

int Suministro::getStock(){
    return stock;
}
