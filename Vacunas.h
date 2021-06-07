#ifndef __VACUNAS__
#define __VACUNAS__
#include<iostream>
#include "Suministro.h"
class Vacunas : public Suministro
{
    private:
        std::string nombre;
        std::string pais;
        int CantDosis;
    public:
        Vacunas(int stock,std::string fechaLlegada,std::string nombre,std::string pais,int cantDosis);
        virtual ~Vacunas(){}
};
Vacunas::Vacunas(int stock,std::string fechaLlegada, std::string nombre="",std::string pais="",int cantDosis=0):Suministro(fechaLlegada="",stock=0){

}

#endif