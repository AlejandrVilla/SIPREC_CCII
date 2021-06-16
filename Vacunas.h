#ifndef __VACUNAS__
#define __VACUNAS__
#include<iostream>
#include "Suministro.h"
class Vacunas : public Suministro{
    private:
        std::string pais;
        int cantDosis;
    public:
        Vacunas(std::string tipo,int stock,std::string fechaLlegada,std::string _pais,int _cantDosis=0)
        :Suministro(tipo,fechaLlegada,stock),pais(_pais),cantDosis(_cantDosis){}
        virtual ~Vacunas(){}

        virtual void verInfo() override;
        virtual void actualizarDatos() override;
        void setPais(std::string);
        std::string getPais();
        void setDosis(int);
        int getDosis();
};

void Vacunas::verInfo(){
    std::cout<<"Nombre de la vacuna: "<<getTipo()<<std::endl;
    std::cout<<"Pais donde se produjo: "<<getPais()<<std::endl;
    std::cout<<"Dosis requerida: "<<getDosis()<<std::endl;
    std::cout<<"Fecha de llegada: "<<getFechaLlegada()<<std::endl;
    std::cout<<"Stock disponible: "<<getStock()<<" unidades"<<std::endl;
    std::cout<<std::endl;
}

void Vacunas::actualizarDatos(){
int opcion{0};
    do{
        std::cout << ">>>SELECCIONE DATO A MODIFICAR: \n"
                  << "1)NOMBRE\n"
                  << "2)FECHA DE LLEGADA\n"
                  << "3)STOCK\n"
                  << "4)DOSIS REQUERIDA\n" 
                  << "5)PAIS DE PROCEDENCIA\n"
                  << "0)SALIR\n"; cin >> opcion;
        if(opcion==1){
            string tipo;
            std::cout << ">>>INGRESE NUEVO TIPO: "; cin >> tipo;
            setTipo(tipo);
        }else if(opcion==2){
            string fecha;
            std::cout << ">>>INGRESE NUEVA FECHA dd/mm/aa: "; cin >> fecha;
            setFechaLlegada(fecha);
        }else if(opcion==3){
            int c;
            std::cout << ">>>INGRESE NUEVO STOCK: "; cin >> c;
            setStock(getStock()+c);
        }else if(opcion==4){
            int dosis;
            std::cout << ">>>INGRESE NUEVO DOSIS REQUERIDA: "; cin >> dosis;
            setDosis(dosis);
        }else if(opcion==5){
            string pais;
            std::cout << ">>>ACTUALICE PAIS DE PROCEDENCIA: "; cin >> pais;
            setPais(pais);
        }
    }while(opcion!=0);
}

void Vacunas::actualizarDatos(){
    // menu actualizar dato especifico
}

void Vacunas::setPais(std::string pais){
    this->pais=pais;
}

std::string Vacunas::getPais(){
    return pais;
}

void Vacunas::setDosis(int cantDosis){
    this->cantDosis=cantDosis;
}

int Vacunas::getDosis(){
    return cantDosis;
}


#endif