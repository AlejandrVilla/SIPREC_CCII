#ifndef Sistema_H
#define Sistema_H

#include "Centro_de_Salud.h"
#include "HistorialMedico.h"

#include <iostream>
#include <vector>

using namespace std;

class Sistema{
    private:
        vector<HistorialMedico*>pacientes;
        Centro_de_Salud *centroDeSalud;
    public:
        Sistema();
        ~Sistema();

        void main();
        void administrarPacientes();

        void listarPacientes();
        void setPacientes();
        void eliminarPacientes();
        void modificarPacientes();

};

Sistema::Sistema(){
    string nombre,distrito;
    cout<<"INGRESE EL NOMBRE DEL CENTRO DE SALUD: ";getline(cin,nombre);
    fflush(stdin);
    cout<<"INGRESE EL DISTRITO: ";getline(cin,distrito);
    fflush(stdin);
    centroDeSalud = new Centro_de_Salud(nombre,distrito);
}

Sistema::~Sistema(){
    for (int i=0;i<pacientes.size();i++){
        delete pacientes[i];
    }
    delete centroDeSalud;
}

void Sistema::main(){
    cout<<"\n<------------- BIENVENIDO AL SISTEMA DE SALUD "<<centroDeSalud->getNombre()<< "------------->\n";
    int opcion;
    do{
        cout<<"\n<------------- MENU PRINCIPAL ------------->\n";
        cout<<"\nQUE OPERACION DESEA REALIZAR\n";
        cout<<"1) ACCEDER A LOS SUMINISTROS\n";
        cout<<"2) ACCEDER A HISTORIALES MEDICOS\n";
        cout<<"3) SALIR\n";
        cin>>opcion;
        if (opcion==1){
            centroDeSalud->main();
        }
        else if(opcion==2){
            administrarPacientes();
        }else{
            break;
        }
    }while(opcion!=3);
    cout<<"\nGRACIAS POR USAR NUESTRO SISTEMA\n";
}

void Sistema::administrarPacientes(){
    int opcion;
    fflush(stdin);
    do{
        cout<<"\n-------- MENU HISTORIALES MEDICOS --------\n";
        cout<<"\nQUE OPERACION DESEA REALIZAR\n";
        cout<<"1) LISTAR PACIENTES\n";
        cout<<"2) AGREGAR PACIENTES\n";
        cout<<"3) ELIMINAR PACIENTES\n";
        cout<<"4) MODIFICAR DATOS DE PACIENTES\n";
        cout<<"5) SALIR\n";
        cin>>opcion;
        if (opcion == 1){
            listarPacientes();
        }
        else if (opcion == 2){
            setPacientes();
        }
        else if (opcion == 3){
            eliminarPacientes();
        }
        else if (opcion == 4){
            modificarPacientes();
        }
        else{
            break;
        }
    }while(opcion!=5);
}

void Sistema::listarPacientes(){
    cout<<"\n-------- LISTANDO PACIENTES --------\n";
    if (pacientes.size()==0){
        cout<<"NO HAY PACIENTES REGISTRADOS\n";
        return;
    }
    for (auto a:pacientes){
        cout<<"\n NOMBRE: "<<a->getNombre()<<'\n';
        cout<<" EDAD: "<<a->getEdad()<<'\n';
        cout<<" ENFERMEDADES PREVIAS: ";a->getEnfermedades();
        cout<<" FECHA DE NACIMIENTO: "<<a->getFechaNacimiento()<<'\n';
        cout<<" PESO: "<<a->getPeso()<<'\n';
        cout<<" ALTURA: "<<a->getAltura()<<'\n';
        cout<<" DNI: "<<a->getDNI()<<'\n';
        cout<<" DIRECCION: "<<a->getDireccion()<<'\n';
        cout<<" VULNERABILIDAD: "<<a->getVulnerabilidad()<<"\n";
    }
}

void Sistema::setPacientes(){
    cout<<"\nINGRESE DATOS DEL NUEVO PACIENTE\n";
    string nombre,fechaNacimiento,direccion,vulnerabilidad;
    int edad,peso,altura,dni;
    fflush(stdin);
    cout<<"\n NOMBRE: ";getline(cin,nombre);fflush(stdin);
    cout<<" EDAD: ";cin>>edad;fflush(stdin);
    cout<<" FECHA DE NACIMIENTO: ";getline(cin,fechaNacimiento);fflush(stdin);
    cout<<" PESO: ";cin>>peso;fflush(stdin);
    cout<<" ALTURA: ";cin>>altura;fflush(stdin);
    cout<<" DNI: ";cin>>dni;fflush(stdin);
    cout<<" DIRECCION: ";getline(cin,direccion);fflush(stdin);
    cout<<" VULNERABILIDAD: ";getline(cin,vulnerabilidad);fflush(stdin);
    HistorialMedico *paciente = new HistorialMedico(nombre,edad,fechaNacimiento,peso,altura,dni,direccion,vulnerabilidad);
    cout<<" CUANTAS ENFERMEDADES PREVIAS: ";
    int cant;cin>>cant;fflush(stdin);
    for (int i=0;i<cant;i++){
        string enfermedad;
        cout<<" INGRESE LA ENFERMEDAD: ";getline(cin,enfermedad);fflush(stdin);
        paciente->setEnfermedades(enfermedad);
    }
    pacientes.push_back(paciente);
    cout<<"\n-------- PACIENTE AGREGADO --------\n";
}

void Sistema::eliminarPacientes(){
    int dni;
    cout<<"\nINGRESE EL DNI DEL PACIENTE A ELIMINAR: ";cin>>dni;
    for (int i=0;i<pacientes.size();i++){
        if ( dni == pacientes[i]->getDNI()){
            pacientes.erase(pacientes.begin()+i);
            cout<<"\n-------- PACIENTE ELIMINADO --------\n";
            break;
        }
    }
}

void Sistema::modificarPacientes(){
    int opcion;
    fflush(stdin);
    do{
        cout<<"\nQUE DATOS DESEA MODIFICAR\n";
        cout<<"1) NOMBRE\n";
        cout<<"2) EDAD\n";
        cout<<"3) FECHA DE NACIMIENTO\n";
        cout<<"4) PESO\n";
        cout<<"5) ALTURA\n";
        cout<<"6) DNI\n";
        cout<<"7) DIRECCION\n";
        cout<<"8) VULNERABILIDAD\n";
        cout<<"9) SALIR\n";
        cin>>opcion;fflush(stdin);
        int dni;
        if (opcion==9){
            break;
        }

        cout<<"\nINGRESE EL DNI DEL PACIENTE: ";cin>>dni;fflush(stdin);
        vector<HistorialMedico*>::iterator it;
        for (int i=0;i<pacientes.size();i++){
            if ( dni == pacientes[i]->getDNI()){
                it = pacientes.begin()+i;
                break;
            }
        }
        if (opcion==1){
            string nombre;
            cout<<"INGRESE EL NUEVO NOMBRE: ";getline(cin,nombre);fflush(stdin);
            (*it)->setNombre(nombre);
        }
        else if (opcion==2){
            int edad;
            cout<<"INGRESE LA NUEVA EDAD: ";cin>>edad;fflush(stdin);
            (*it)->setEdad(edad);
        }
        else if (opcion==3){
            string fechaNacimiento;
            cout<<"INGRESE LA NUEVA FECHA DE NACIMIENTO: ";getline(cin,fechaNacimiento);fflush(stdin);
            (*it)->setFechaNacimiento(fechaNacimiento);
        }
        else if (opcion==4){
            int peso;
            cout<<"INGRESE EL NUEVO PESO: ";cin>>peso;fflush(stdin);
            (*it)->setPeso(peso);
        }
        else if (opcion==5){
            int altura;
            cout<<"INGRESE LA NUEVA ALTURA: ";cin>>altura;fflush(stdin);
            (*it)->setAltura(altura);
        }
        else if (opcion==6){
            int dni;
            cout<<"INGRESE EL NUEVO DNI: ";cin>>dni;fflush(stdin);
            (*it)->setDNI(dni);
        }
        else if (opcion==7){
            string direccion;
            cout<<"INGRESE LA NUEVA DIRECCION ";getline(cin,direccion);fflush(stdin);
            (*it)->setDireccion(direccion);
        }
        else if (opcion==8){
            string vulnerabilidad;
            cout<<"INGRESE LA NUEVA VULNERABILIDAD: ";getline(cin,vulnerabilidad);fflush(stdin);
            (*it)->setVulnerabilidad(vulnerabilidad);
        }
        cout<<"\n-------- DATO MODIFICADO --------\n";
    }while(opcion != 9);
}

#endif 