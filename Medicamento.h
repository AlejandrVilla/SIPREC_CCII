#ifndef Medicamento_H
#define Medicamento_H

#include <iostream>
#include "Suministro.h"

class Medicamento:public Suministro{
    private:
        int dosis;
    public:    
        Medicamento(std::string tipo,std::string fechaLlegada,int stock,int _dosis)
        :Suministro(tipo,fechaLlegada,stock),dosis(_dosis){}
        virtual ~Medicamento(){}

        virtual void verInfo() override;
        virtual void actualizarDatos() override;
        void setDosis(int);
        int getDosis();
};

void Medicamento::verInfo(){
    std::cout<<"Nombre del medicamento: "<<getTipo()<<std::endl;
    std::cout<<"Cantidad de dosis: "<<getDosis()<<std::endl;
    std::cout<<"Fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"Stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Vacunas::actualizarDatos(){
    
}

void Medicamento::setDosis(int dosis){
    this->dosis=dosis;
}

int Medicamento::getDosis(){
    return dosis;
}

#endif