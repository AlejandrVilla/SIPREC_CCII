#ifndef _PRUEBA_H_
#define _PRUEBA_H_
#include <iostream>

#include "Suministro.h"
using namespace std;

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
    std::cout<<"TIPO DE PRUEBA: "<<getTipo()<<std::endl;
    std::cout<<"FECHA DE LLEGADA: "<<getFechaLlegada()<<std::endl;
    std::cout<<"STOCK DISPONIBLE: "<<getStock()<<" UNIDADES"<<std::endl;
    std::cout<<std::endl;
}
void Prueba::actualizarDatos(){
    int opcion{0};
    do{
        system("cls");
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)TIPO\n"
                  << "2)FECHA DE LLEGADA\n"
                  << "3)STOCK\n"
                  << "0)SALIR\n"; cin >> opcion;
        if(opcion==1){
            std::string t;
            std::cout << ">>>ACTUALICE TIPO DE PRUEBA: "; cin >> t;
            setTipo(t);
        }else if(opcion==2){
            std::string t;
            std::cout << ">>>ACTUALICE FECHA DE LLEGADA dd/mm/aa: "; cin >> t;
            setFechaLlegada(t);
        }else if(opcion==3){
            int c;
            std::cout << ">>>INGRESE CANTIDAD: "; cin >> c;
            int op2;
            std::cout << ">>>DESEA (1)AGREGAR (2)REDUCIR EL STOCK: "; cin >> op2;
            op2==1?setStock(getStock()+c):setStock(getStock()-c);
        }
        
    }while(opcion!=0);
}



#endif