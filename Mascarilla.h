#ifndef MASCARILLA_H
#define MASCARILLA_H
#include <iostream>
#include "Suministro.h"
class Mascarilla : public Suministro{
    private:
        std::string calidad;
    public:
        Mascarilla(std::string tipo,std::string fechaLlegada, int stock, std::string _calidad)
        :Suministro(tipo,fechaLlegada, stock),calidad(_calidad){}
        virtual ~Mascarilla(){}
        
        virtual void verInfo()override;
        virtual void actualizarDatos() override;
        void setCalidad(std::string);
        std::string getCalidad();
};

void Mascarilla::verInfo(){
    std::cout<<"Tipo de mascarilla: "<<getTipo()<<std::endl;
    std::cout<<"Calidad: "<<getCalidad()<<std::endl;
    std::cout<<"Fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"Stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Vacunas::actualizarDatos(){
    
}

void Mascarilla::setCalidad(std::string calidad){
    this->calidad = calidad;
}

std::string Mascarilla::getCalidad(){
    return calidad;
}

#endif
