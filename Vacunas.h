#ifndef __VACUNAS__
#define __VACUNAS__
#include<iostream>
#include "Suministro.h"
class Vacunas : public Suministro
{
    private:
        std::string nombre;
        std::string pais;
        int cantDosis;
    public:
        Vacunas(int stock,std::string fechaLlegada, std::string _nombre,std::string _pais,int _cantDosis=0)
        :Suministro(fechaLlegada,stock),nombre(_nombre),pais(_pais),cantDosis(_cantDosis){}
        virtual ~Vacunas(){}

        virtual void verInfo() override;
        void setNombre(std::string);
        std::string getNombre();
        void setPais(std::string);
        std::string getPais();
        void setDosis(int);
        int getDosis();
};

void Vacunas::verInfo(){
    std::cout<<"Nombre de la vacuna: "<<getNombre()<<std::endl;
    std::cout<<"Pais donde se produjo: "<<getPais()<<std::endl;
    std::cout<<"Dosis necesarias: "<<getDosis()<<std::endl;
    std::cout<<"fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Vacunas::setNombre(std::string nombre){
    this->nombre=nombre;
}

std::string Vacunas::getNombre(){
    return nombre;
}

void Vacunas::setPais(std::string pais){
    this->pais=pais;
}

std::string Vacunas::getPais(){
    return pais;
}

void Vacunas::setDosis(int cantDosis){
    this->cantDosis=cantDosis;
}

int Vacunas::getDosis(){
    return cantDosis;
}


#endif