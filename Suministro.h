#ifndef Suministro_h
#define Suministro_h

#include <iostream>

class Suministro{
    private:
        friend class sistema;
        friend class Centro_de_Salud;

        std::string fechaLlegada;
        int stock;
    public:
        Suministro(std::string _fechaLlegada,int _stock):fechaLlegada(_fechaLlegada),stock(_stock){}
        virtual ~Suministro(){}

        virtual void verInfo()=0;  //funcion virtual pura
        void setFechaLlegada(std::string);
        std::string getFechaLlegada();
        void setStock(int);
        int getStock();
};

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