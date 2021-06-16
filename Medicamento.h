#ifndef Medicamento_H
#define Medicamento_H

#include <iostream>
#include "Suministro.h"

class Medicamento:public Suministro{
    private:
        std::string nombre;
        int dosis;
    public:    
        Medicamento(std::string fechaLlegada,int stock,std::string _nombre,int _dosis)
        :Suministro(fechaLlegada,stock),nombre(_nombre),dosis(_dosis){}
        virtual ~Medicamento(){}

        virtual void verInfo() override;
        void setNombre(std::string);
        std::string getNombre();
        void setDosis(int);
        int getDosis();
};

void Medicamento::verInfo(){
    std::cout<<"nombre del medicamento: "<<getNombre()<<std::endl;
    std::cout<<"cantidad de dosis: "<<getDosis()<<std::endl;
    std::cout<<"fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Medicamento::setNombre(std::string nombre){
    this->nombre=nombre;
}

std::string Medicamento::getNombre(){
    return nombre;
}

void Medicamento::setDosis(int dosis){
    this->dosis=dosis;
}

int Medicamento::getDosis(){
    return dosis;
}

#endif