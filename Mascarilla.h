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
        :Suministro(fechaLlegada, stock){
            setTipo(_tipo);
            setCalidad(_calidad);
        }
        ~Mascarilla();
        void setTipo(std::string);
        void setCalidad(std::string);
        std::string getTipo(){return tipo;}
        std::string getCalidad(){return calidad;};
};

void Mascarilla::setTipo(std::string s){
    this->tipo = s;
}

void Mascarilla::setCalidad(std::string s){
    this->calidad = s;
}

#endif
