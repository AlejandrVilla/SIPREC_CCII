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

        vector<Suministro*> vacunas;
        vector<Suministro*> pruebas;
        vector<Suministro*> medicamentos;
        vector<Suministro*> mascarillas;
    public:
        Centro_de_Salud();
        Centro_de_Salud(string Nombre,string Distrito);
        ~Centro_de_Salud();

        void main();
        void llenarSuministros();
        void mostrarSuministros();
        //Control de asignacion de suministros
        void setVacunas();
        void setMascarillas();
        void setMedicamentos();
        void setPruebas();
        //Control de muestra de pruebas
        void getVacunas();      //observado
        void getMascarillas();  //observado
        void getMedicamentos(); //observado
        void getPruebas();      //observado
};

Centro_de_Salud::Centro_de_Salud(){

}
Centro_de_Salud::Centro_de_Salud(string Nombre,string Distrito){
    this->Nombre = Nombre;
    this->Distrito = Distrito;
}
Centro_de_Salud::~Centro_de_Salud(){
    for (size_t i=0;i<vacunas.size();i++)
        delete vacunas[i];
    for (size_t i=0;i<pruebas.size();i++)
        delete pruebas[i];
    for (size_t i=0;i<medicamentos.size();i++)
        delete medicamentos[i];
    for (size_t i=0;i<mascarillas.size();i++)
        delete mascarillas[i];
}

void Centro_de_Salud::main(){
    int opcion;
    do{
        cout<<"<-------- MENU PRINCIPAL -------->"<<endl;
        cout<<"ELIJA UNA OPCION"<<endl;
        cout<<"1) ASIGNAR SUMINISTROS"<<endl;
        cout<<"2) ACTUALIZAR SUMINISTROS"<<endl;
        cout<<"3) MOSTRAR SUMINISTROS"<<endl;
        cout<<"4) SALIR" << endl; 
        cin>>opcion;
        switch(opcion){
            case 1:
                llenarSuministros();
                break;
            case 2:
                //actualizarSuministros();
                break;
            case 3:
                mostrarSuministros();
                break;
            default:
                break;
        }
    }while(opcion!=4);
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
            setVacunas();
            break;
        case 2:
            setMascarillas();
            break;
        case 3:
            setMedicamentos();
            break;
        case 4:
            setPruebas();
            break;
        default:
            break;
        }
    }while(opcion!=0);
}


void Centro_de_Salud::mostrarSuministros(){
    int opcion{0};
    do{
        cout<<">>>MOSTRAR: \n";
        cout<<"1) VACUNA \n"
            <<"2) MASCARILLA \n"
            <<"3) MEDICAMENTO \n"
            <<"4) PRUEBAS \n"
            <<"0) SALIR \n";cin >> opcion;
        switch (opcion){
        case 1:
            getVacunas();
            break;
        case 2:
            getMascarillas();
            break;
        case 3:
            getMedicamentos();
            break;
        case 4:
            getPruebas();
            break;
        default:
            break;
        }
    }while(opcion!=0);
}

/*
    *ASIGNADORES DE SUMINISTROS*
*/

void Centro_de_Salud::setVacunas(){
    string fechaLlegada,nombre,pais;
    int stock,dosis;
    cout<<">>>NOMBRE DE LA VACUNA: "; cin >> nombre;
    cout<<">>>PAIS DE ORIGEN: "; cin >> pais; 
    cout<<">>>DOSIS RECOMENDADA: ";cin >> dosis;
    cout<<">>>FECHA DE ASIGNACION: ";cin>>fechaLlegada;
    cout<<">>>STOCK INGRESADO: ";cin>>stock;
    cout<<endl;
    Suministro *suministro = new Vacunas(stock,fechaLlegada,nombre,pais,dosis);
    vacunas.push_back(suministro);
    suministro = nullptr;
}

void Centro_de_Salud::setMascarillas(){
    string fechaLlegada,calidad, tipo;
    int stock;
    cout<<">>>TIPO DE MASCARILLA: "; cin >> tipo;
    cout<<">>>CALIDAD PERCIBIDA: "; cin >> calidad; 
    cout<<">>>FECHA DE ASIGNACION: "; cin >> fechaLlegada;
    cout<<">>>STOCK INGRESADO: "; cin>>stock;
    cout<< endl;
    Suministro *suministro = new Mascarilla(fechaLlegada,stock,tipo,calidad);
    mascarillas.push_back(suministro);
    suministro = nullptr;
}
void Centro_de_Salud::setMedicamentos(){
    string fechaLlegada,nombre,pais;
    int stock,dosis;
    cout<<">>>NOMBRE DE LA MEDICAMENTO: "; cin >> nombre; 
    cout<<">>>DOSIS RECOMENDADA: ";cin >> dosis;
    cout<<">>>FECHA DE ASIGNACION: ";cin>>fechaLlegada;
    cout<<">>>STOCK INGRESADO: ";cin>>stock;
    cout<<endl;
    Suministro *suministro = new Medicamento(fechaLlegada,stock,nombre,dosis);
    medicamentos.push_back(suministro);
    suministro = nullptr;
}

void Centro_de_Salud::setPruebas(){
    string fechaLlegada,tipo;
    int stock;
    cout<<">>>FECHA DE ASIGNACION: ";cin>>fechaLlegada;
    cout<<">>>TIPO DE PRUEBA: ";cin>>tipo;
    cout<<">>>STOCK INGRESADO: ";cin>>stock;
    cout<<endl;
    
    Suministro *suministro = new Prueba(fechaLlegada,stock,tipo);
    pruebas.push_back(suministro);
    suministro = nullptr;
}

void Centro_de_Salud::getVacunas(){
    for (Suministro *a : vacunas){
        a->verInfo();
    }
}

void Centro_de_Salud::getMascarillas(){
    for(Suministro *a: mascarillas){
        a->verInfo();
    }    
}

void Centro_de_Salud::getMedicamentos(){
    for (Suministro *a : medicamentos){
        a->verInfo();
    }
}

void Centro_de_Salud::getPruebas(){
    for (Suministro *a : pruebas){
        a->verInfo();
    }
}

#endif