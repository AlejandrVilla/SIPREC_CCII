#ifndef __VACUNAS__
#define __VACUNAS__
#include<iostream>
#include<string>
#include "Suministro.h"
using namespace std;
class Vacunas : public Suministro{
    private:
        std::string pais;
        std::string cantDosis;
    public:
        Vacunas(std::string tipo,int stock,std::string fechaLlegada,std::string _pais,std::string _cantDosis="")
        :Suministro(tipo,fechaLlegada,stock),pais(_pais),cantDosis(_cantDosis){}
        virtual ~Vacunas(){}

        virtual void verInfo() override;
        virtual void actualizarDatos() override;
        void setPais(std::string);
        std::string getPais();
        void setDosis(std::string);
        std::string getDosis();
};

void Vacunas::verInfo(){
    std::cout<<"NOMBRE: "<<getTipo()<<std::endl;
    std::cout<<"PAIS DE PROCEDENCIA: "<<getPais()<<std::endl;
    std::cout<<"DOSIS REQUERIDA: "<<getDosis()<<std::endl;
    std::cout<<"FECHA DE LLEGADA: "<<getFechaLlegada()<<std::endl;
    std::cout<<"STOCK DISPONIBLE: "<<getStock()<<" UNIDADES"<<std::endl;
    std::cout<<std::endl;
}

void Vacunas::actualizarDatos(){
int opcion{0};
    do{
        system("cls");
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)NOMBRE\n"
                  << "2)FECHA DE LLEGADA\n"
                  << "3)STOCK\n"
                  << "4)DOSIS REQUERIDA\n" 
                  << "5)PAIS DE PROCEDENCIA\n"
                  << "0)SALIR\n"; cin >> opcion;
        if(opcion==1){
            string tipo;
            std::cout << ">>>ACTUALICE NOMBRE: "; cin >> tipo;
            setTipo(tipo);
        }else if(opcion==2){
            string fecha;
            std::cout << ">>>ACTUALICE FECHA DE LLEGADA dd/mm/aa: "; cin >> fecha;
            setFechaLlegada(fecha);
        }else if(opcion==3){
            int c;
            std::cout << ">>>INGRESE CANTIDAD: "; cin >> c;
            int op2;
            std::cout << ">>>DESEA (1)AGREGAR (2)REDUCIR EL STOCK: "; cin >> op2;
            op2==1?setStock(getStock()+c):setStock(getStock()-c);
        }else if(opcion==4){
            string dosis;
            std::cout << ">>>ACTUALICE DOSIS REQUERIDA: "; getline(cin,dosis);
            setDosis(dosis);
        }else if(opcion==5){
            string pais;
            std::cout << ">>>ACTUALICE PAIS DE PROCEDENCIA: "; cin >> pais;
            setPais(pais);
        }
    }while(opcion!=0);
}


void Vacunas::setPais(std::string pais){
    this->pais=pais;
}

std::string Vacunas::getPais(){
    return pais;
}

void Vacunas::setDosis(std::string cantDosis){
    this->cantDosis=cantDosis;
}

std::string Vacunas::getDosis(){
    return cantDosis;
}

#endif