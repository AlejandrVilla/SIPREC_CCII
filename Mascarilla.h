#ifndef MASCARILLA_H
#define MASCARILLA_H
#include <iostream>
#include "Suministro.h"
class Mascarilla : public Suministro{
    private:
        std::string calidad;
    public:
        Mascarilla( std::string tipo, std::string fechaLlegada, int stock, std::string _calidad )
        :Suministro(tipo,fechaLlegada, stock),calidad(_calidad){}
        virtual ~Mascarilla(){}
        
        virtual void verInfo() override;
        virtual void actualizarDatos() override;
        void setCalidad(std::string);
        std::string getCalidad();
};

void Mascarilla::verInfo(){
    std::cout<<"TIPO DE MASCARILLA: "<<getTipo()<<std::endl;
    std::cout<<"CALIDAD: "<<getCalidad()<<std::endl;
    std::cout<<"FECHA DE LLEGADA: "<<getFechaLlegada()<<std::endl;
    std::cout<<"STOCK DISPONIBLE: "<<getStock()<<" UNIDADES"<<std::endl;
    std::cout<<std::endl;
}

void Mascarilla::actualizarDatos(){
    int opcion{0};
    fflush(stdin);
    do{
        // system("cls");
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)TIPO\n"
                  << "2)CALIDAD\n"
                  << "3)FECHA DE LLEGADA\n"
                  << "4)STOCK\n" 
                  << "0)SALIR\n"; cin >> opcion; fflush(stdin);
        if(opcion==1){
            std::string t;
            std::cout << ">>>ACTUALICE TIPO DE PRUEBA: "; getline(cin,t); fflush(stdin);
            setTipo(t);
        }else if(opcion==2){
            std::string t;
            std::cout << ">>>ACTUALICE CALIDAD DEL PRODUCTO: "; getline(cin,t); fflush(stdin);
            setCalidad(t);
        }else if(opcion==3){
            std::string t;
            std::cout << ">>>ACTUALICE FECHA DE LLEGADA dd/mm/aa: "; getline(cin,t); fflush(stdin);
            setFechaLlegada(t);
        }else if(opcion==4){
            int c;
            std::cout << ">>>INGRESE CANTIDAD: "; cin >> c; fflush(stdin);
            int op2; 
            std::cout << ">>>DESEA (1)AGREGAR (2)REDUCIR EL STOCK: "; cin >> op2; fflush(stdin);
            op2==1?setStock(getStock()+c):setStock(getStock()-c);
        }
        
    }while(opcion!=0);
}

void Mascarilla::setCalidad(std::string calidad){
    this->calidad = calidad;
}

std::string Mascarilla::getCalidad(){
    return calidad;
}

#endif
