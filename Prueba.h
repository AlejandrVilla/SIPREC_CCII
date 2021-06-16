#ifndef _PRUEBA_H_
#define _PRUEBA_H_
#include <iostream>

#include "Suministro.h"

class Prueba : public Suministro{
    private:
        std::string tipo;
    public:
        Prueba(std::string fechaLlegada,int stock,std::string _tipo)
        :Suministro(fechaLlegada,stock),tipo(_tipo){}
        virtual ~Prueba(){}
        
        virtual void verInfo() override;
        void setTipo(std::string);
        std::string getTipo();
};

void Prueba::verInfo(){
    std::cout<<"tipo de prueba: "<<getTipo()<<std::endl;
    std::cout<<"fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Prueba::setTipo(std::string tipo){
    this->tipo=tipo;
}

std::string Prueba::getTipo(){
    return tipo;
}




#endif