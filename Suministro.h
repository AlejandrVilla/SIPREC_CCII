#ifndef Suministro_h
#define Suministro_h

#include <iostream>

class Suministro{
    private:
        friend class sistema;
        friend class Centro_de_Salud;

        std::string tipo;
        std::string fechaLlegada;
        int stock;
    public:
        Suministro(std::string _tipo,std::string _fechaLlegada,int _stock):tipo(_tipo),fechaLlegada(_fechaLlegada),stock(_stock){}
        virtual ~Suministro(){}

        virtual void verInfo()=0;  //funcion virtual pura
        virtual void actualizarDatos()=0;    //funcion virtual pura
        void setTipo(std::string);
        std::string getTipo();
        void setFechaLlegada(std::string);
        std::string getFechaLlegada();
        void setStock(int);
        int getStock();
};

void Suministro::setTipo(std::string tipo){
    this->tipo=tipo;
}

std::string Suministro::getTipo(){
    return tipo;
}

void Suministro::setFechaLlegada(std::string fechaLlegada){
    this->fechaLlegada=fechaLlegada;
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


#endif