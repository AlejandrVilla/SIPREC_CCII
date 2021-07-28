#include "suministro.h"
#include <iostream>
Suministro::Suministro(){
}
void Suministro::setTipo(std::string tipo){
    this->tipo=tipo;
}

std::string Suministro::getTipo(){
    return tipo;
}

void Suministro::setFechaLlegada(std::string fechaLlegada){
    this->fechaLlegada = fechaLlegada;
}

std::string Suministro::getFechaLlegada(){
    return fechaLlegada;
}

void Suministro::setStock(int stock){
    this->stock=stock;
}

int Suministro::getStock(){
    return stock;
}
