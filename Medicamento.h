#ifndef Medicamento_H
#define Medicamento_H

#include <iostream>
#include "Suministro.h"

class Medicamento:public Suministro{
    private:
        std::string dosis;
    public:    
        Medicamento(std::string tipo,std::string fechaLlegada,int stock,std::string _dosis)
        :Suministro(tipo,fechaLlegada,stock),dosis(_dosis){}
        virtual ~Medicamento(){}

        virtual void verInfo() override;
        virtual void actualizarDatos() override;
        void setDosis(std::string);
        std::string getDosis();
};

void Medicamento::verInfo(){
    std::cout<<">>>NOMBRE: "<<getTipo()<<std::endl;
    std::cout<<">>>DOSIS REQUERIDA: "<<getDosis()<<std::endl;
    std::cout<<">>>FECHA DE LLEGADA: "<<getFechaLlegada()<<std::endl;
    std::cout<<">>>STOCK DISPONIBLE: "<<getStock()<<" UNIDADES"<<std::endl;
    std::cout<<std::endl;
}

void Medicamento::actualizarDatos(){
    int opcion{0};
    fflush(stdin);
    do{
        //system("cls");
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)NOMBRE\n"
                  << "2)FECHA DE LLEGADA\n"
                  << "3)STOCK\n"
                  << "4)DOSIS REQUERIDA\n" 
                  << "0)SALIR\n"; cin >> opcion; fflush(stdin);
        if(opcion==1){
            string tipo;
            std::cout << ">>>ACTUALICE NOMBRE: "; getline(cin,tipo); fflush(stdin);
            setTipo(tipo);
        }else if(opcion==2){
            string fecha;
            std::cout << ">>>ACTUALICE FECHA DE LLEGADA dd/mm/aa: "; getline(cin,fecha); fflush(stdin);
            setFechaLlegada(fecha);
        }else if(opcion==3){
            int c;
            std::cout << ">>>INGRESE CANTIDAD: "; cin >> c; fflush(stdin);
            int op2;
            std::cout << ">>>DESEA (1)AGREGAR (2)REDUCIR EL STOCK: "; cin >> op2; fflush(stdin);
            op2==1?setStock(getStock()+c):setStock(getStock()-c);
        }else if(opcion==4){
            std::string dosis;
            std::cout << ">>>ACTUALICE DOSIS REQUERIDA: "; getline(cin,dosis); fflush(stdin);
            setDosis(dosis);
        }
    }while(opcion!=0);
}

void Medicamento::setDosis(std::string dosis){
    this->dosis=dosis;
}

std::string Medicamento::getDosis(){
    return dosis;
}

#endif