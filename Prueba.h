#ifndef _PRUEBA_H_
#define _PRUEBA_H_
#include <iostream>

#include "Suministro.h"

class Prueba : public Suministro{
    private:
    public:
        Prueba(std::string tipo,std::string fechaLlegada,int stock)
        :Suministro(tipo,fechaLlegada,stock){}
        virtual ~Prueba(){}
        virtual void verInfo() override;
        virtual void actualizarDatos() override;
};

void Prueba::verInfo(){
    std::cout<<"Tipo de prueba: "<<getTipo()<<std::endl;
    std::cout<<"Fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"Stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}
void Prueba::actualizarDatos(){
    int opcion{0};
    do{
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)TIPO\n"
                  << "2)FECHA DE LLEGADA\n"
                  << "3)STOCK\n"
                  << "0)SALIR\n"; cin >> opcion;
        if(opcion==1){
            string t;
            std::cout << ">>>INGRESE NUEVO TIPO: "; cin >> t;
            setTipo(t);
        }else if(opcion==2){
            string t;
            std::cout << ">>>INGRESE NUEVA FECHA dd/mm/aa: "; cin >> t;
            setFechaLlegada(t);
        }else if(opcion==3){
            int c;
            std::cout << ">>>INGRESE NUEVO STOCK: "; cin >> c;
            setStock(getStock()+c);
        }
    }while(opcion!=0);
}



#endif