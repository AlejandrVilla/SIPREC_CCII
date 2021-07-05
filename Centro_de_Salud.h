#ifndef __CENTRO_DE_SALUD__
#define __CENTRO_DE_SALUD__
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
#include "Suministro.h"
#include "Vacunas.h"
#include "Prueba.h"
#include "Medicamento.h"
#include "Mascarilla.h"

using namespace std;

class Centro_de_Salud{
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
        void actualizarSuministros();
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
        //control para modificar
        void modificar();
        void eliminar();
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
        //system("cls");
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
                actualizarSuministros();
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
        //system("cls");
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
    //system("cls");
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
            getch();
            //system("cls");
            break;
        case 2:
            getMascarillas();
            getch();
            //system("cls");
            break;
        case 3:
            getMedicamentos();
            getch();
            //system("cls");
            break;
        case 4:
            getPruebas();
            getch();
            //system("cls");
            break;
        default:
            break;
        }
    }while(opcion!=0);
}

void Centro_de_Salud::actualizarSuministros(){
    int opcion{0};
    do{
        //system("cls");
        cout<<">>>ELIJA UNA ACCION A REALIZAR: \n";
        cout<<"1) ACTUALIZAR SUMINISTRO \n"
            <<"2) BORRAR SUMINISTRO \n"
            <<"0) SALIR \n";cin >> opcion;
        if(opcion==1){
            modificar();
        }else if(opcion==2){
            eliminar();
        }else{
            break;
        }
    }while(opcion!=0);
}

void Centro_de_Salud::modificar(){
    int opcion{0};
    //system("cls");
    do{
        cout<<">>>ELIJA EL SUMINISTRO: \n";
        cout<<"1) VACUNA \n"
            <<"2) MASCARILLA \n"
            <<"3) MEDICAMENTO \n"
            <<"4) PRUEBAS \n"
            <<"0) SALIR \n";cin >> opcion;
        string tipo;
        if(opcion==1){
            cout << "NOMBRE DE VACUNA A MODIFICAR: "; cin >> tipo;
            for(auto *a:vacunas){
                if (a->getTipo() == tipo){
                    a->actualizarDatos();
                    //system("cls");
                    break;
                }
            }
        }
        else if(opcion==2){
            cout << "NOMBRE DE MASCARILLA A MODIFICAR: "; cin >> tipo;
            for(auto *a:mascarillas){
                if (a->getTipo() == tipo){
                    a->actualizarDatos();
                    //system("cls");
                    break;
                }
            }
        }
        else if(opcion==3){
            cout << "NOMBRE DE MEDICAMENTO A MODIFICAR: "; cin >> tipo;
            for(auto *a:medicamentos){
                if (a->getTipo() == tipo){
                    a->actualizarDatos();
                    //system("cls");
                    break;
                }
            }
        }
        else if(opcion==4){
            cout << "NOMBRE DE PRUEBA A MODIFICAR: "; cin >> tipo;
            for(auto *a:pruebas){
                if (a->getTipo() == tipo){
                    a->actualizarDatos();
                    //system("cls");
                    break;
                }
            }
        }
        else{
            cout<<"REGRESANDO...\n";
            //system("cls");
        }
    }while(opcion!=0);
}
void Centro_de_Salud::eliminar(){
    int opcion{0};
    do{
        //system("cls");
        cout<<">>>ELIJA EL SUMINISTRO A ELIMINAR: \n";
        cout<<"1) VACUNA \n"
            <<"2) MASCARILLA \n"
            <<"3) MEDICAMENTO \n"
            <<"4) PRUEBAS \n"
            <<"0) SALIR \n";cin >> opcion;
        string tipo;
        if(opcion==1){
            cout << "NOMBRE DE VACUNA A ELIMINAR: "; cin >> tipo;
            for(int i=0;i<vacunas.size();++i){
                if (vacunas[i]->getTipo() == tipo){
                    vacunas.erase(vacunas.begin()+i);
                    cout << "<-----ELIMINCAICON COMPLETADA----->\n";
                    break;
                }
            }
        }
        else if(opcion==2){
            cout << "NOMBRE DE MASCARILLA A ELIMINAR: "; cin >> tipo;
            for(int i=0;i<mascarillas.size();++i){
                if (mascarillas[i]->getTipo() == tipo){
                    mascarillas.erase(mascarillas.begin()+i);
                    cout << "<-----ELIMINCAICON COMPLETADA----->\n";
                    break;
                }
            }
        }
        else if(opcion==3){
            cout << "NOMBRE DE MEDICAMENTO A ELIMINAR: "; cin >> tipo;
            for(int i=0;i<medicamentos.size();++i){
                if (medicamentos[i]->getTipo() == tipo){
                    medicamentos.erase(medicamentos.begin()+i);
                    cout << "<-----ELIMINCAICON COMPLETADA----->\n";
                    break;
                }
            }
        }
        else if(opcion==4){
            cout << "NOMBRE DE PRUEBA A ELIMINAR: "; cin >> tipo;
            for(int i=0;i<pruebas.size();++i){
                if (pruebas[i]->getTipo() == tipo){
                    pruebas.erase(pruebas.begin()+i);
                    cout << "<-----ELIMINCAICON COMPLETADA----->\n";
                    break;
                }
            }
        }
        else{
            cout<<"REGRESANDO...\n";
        }
    }while(opcion!=0);
}

/*
    *ASIGNADORES DE SUMINISTROS*
*/

void Centro_de_Salud::setVacunas(){
    string fechaLlegada,nombre,pais,dosis;
    int stock;
    cout<<">>>NOMBRE DE LA VACUNA: "; cin >> nombre;
    cout<<">>>PAIS DE ORIGEN: "; cin >> pais; 
    cout<<">>>DOSIS RECOMENDADA: ";cin >> dosis;
    cout<<">>>FECHA DE ASIGNACION: ";cin >> fechaLlegada;
    cout<<">>>STOCK INGRESADO: ";cin>>stock;
    cout<<endl;
    Suministro *suministro = new Vacunas(nombre,stock,fechaLlegada,pais,dosis);
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
    Suministro *suministro = new Mascarilla(tipo,fechaLlegada,stock,calidad);
    mascarillas.push_back(suministro);
    suministro = nullptr;
}
void Centro_de_Salud::setMedicamentos(){
    string fechaLlegada,nombre,pais,dosis;
    int stock;
    cout<<">>>NOMBRE DEL MEDICAMENTO: ";cin >> nombre; cout << "\n"; 
    cout<<">>>DOSIS RECOMENDADA (P/PACIENTE): "; cin >> dosis;
    cout<<">>>FECHA DE ASIGNACION: ";cin>>fechaLlegada;
    cout<<">>>STOCK INGRESADO: ";cin>>stock;
    cout<<endl;
    Suministro *suministro = new Medicamento(nombre,fechaLlegada,stock,dosis);
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
    
    Suministro *suministro = new Prueba(tipo,fechaLlegada,stock);
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