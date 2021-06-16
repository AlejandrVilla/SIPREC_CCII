#ifndef MASCARILLA_H
#define MASCARILLA_H
#include <iostream>
#include "Suministro.h"
class Mascarilla : public Suministro{
    private:
        std::string tipo;
        std::string calidad;
    public:
        Mascarilla(std::string fechaLlegada, int stock, std::string _tipo, std::string _calidad)
        :Suministro(fechaLlegada, stock),tipo(_tipo),calidad(_calidad){}
        virtual ~Mascarilla(){}
        
        virtual void verInfo()override;
        void setTipo(std::string);
        std::string getTipo();
        void setCalidad(std::string);
        std::string getCalidad();
};

void Mascarilla::verInfo(){
    std::cout<<"Tipo de mascarilla: "<<getTipo()<<std::endl;
    std::cout<<"Calidad: "<<getCalidad()<<std::endl;
    std::cout<<"fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Mascarilla::setTipo(std::string tipo){
    this->tipo = tipo;
}

std::string Mascarilla::getTipo(){
    return tipo;
}

void Mascarilla::setCalidad(std::string calidad){
    this->calidad = calidad;
}

std::string Mascarilla::getCalidad(){
    return calidad;
}

#endif
