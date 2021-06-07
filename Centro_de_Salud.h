#ifndef _CENTRO_DE_SALUD_
#define _CENTRO_DE_SALUD_
#include <vector>
#include <iostream>

#include "Suministro.h"
#include "Vacunas.h"
#include "Prueba.h"
#include "Medicamento.h"
#include "Mascarilla.h"
using namespace std;

class Centro_de_Salud
{
    private:
        string Nombre;
        string Distrito;
        vector<Suministro*> pruebas;
    public:
        Centro_de_Salud();
        Centro_de_Salud(string Nombre,string Distrito);
        ~Centro_de_Salud();

        void main();
        void llenarSuministros();
        void mostrarSuministros();
        void setPruebas();
        Prueba getPruebas();
};

Centro_de_Salud::Centro_de_Salud(){
    
}
Centro_de_Salud::Centro_de_Salud(string Nombre,string Distrito){
    this->Nombre = Nombre;
    this->Distrito = Distrito;
}
Centro_de_Salud::~Centro_de_Salud(){
    for (size_t i=0;i<pruebas.size();i++)
        delete pruebas[i];
}

void Centro_de_Salud::main(){
    int opcion;
    do{
        cout<<"######################BIENVENIDO######################"<<endl;
        cout<<"ELIJA UNA OPCION"<<endl;
        cout<<"1) llenar suministros"<<endl;
        cout<<"2) ver suministros"<<endl;
        cout<<"3) salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                llenarSuministros();
                break;
            case 2:
                mostrarSuministros();
                break;
            case 3:
                break;
        }
    }while(opcion!=3);
}

void Centro_de_Salud::llenarSuministros(){
    int opcion{0};
    do{
        cout<<"SELECCIONE SUMINISTRO\n";
        cout<<"1) VACUNA \n"
            <<"2) MASCARILLA \n"
            <<"3) MEDICAMENTO \n"
            <<"4) PRUEBAS \n"
            <<"0) SALIR \n";cin >> opcion;
        switch (opcion){
        case 1:
            
            break;
        
        case 2:
            break;
        case 3:
            break;
        case 4:
            setPruebas();
            break;
        default:
            break;
        }
    }while(opcion>0);
}

void Centro_de_Salud::mostrarSuministros(){
    for(Suministro* a:pruebas){
        a->verInfo();
    }
}

void Centro_de_Salud::setPruebas(){
    string fechaLlegada,tipo;
    int stock;
    cout<<"Introduzca la fecha de llegada: ";cin>>fechaLlegada;
    cout<<"Que tipo de Prueba: ";cin>>tipo;
    cout<<"Stock entrante: ";cin>>stock;
    cout<<endl;
    
    Suministro *suministro = new Prueba(fechaLlegada,stock,tipo);
    pruebas.push_back(suministro);
    suministro = nullptr;
}

#endif