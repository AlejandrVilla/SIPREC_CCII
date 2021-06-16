#ifndef HISTORIALMEDICO_H
#define HISTORIALMEDICO_H

#include <iostream>
#include <vector>

class HistorialMedico{
    private:
        std::string nombre;
        int edad;
        std::vector<std::string> enfermedadesPrevias;
        std::string fechaNacimiento;
        int peso;
        int altura;
        int DNI;
        std::string direccion;
        std::string vulnerabilidad;
    public:
        HistorialMedico(std::string _nombre,int _edad,std::string _fechaNacimiento,int _peso,int _altura,int _DNI,std::string _direccion,std::string _vulnerabilidad)
        :nombre(_nombre),edad(_edad),fechaNacimiento(_fechaNacimiento),peso(_peso),altura(_altura),DNI(_DNI),direccion(_direccion),vulnerabilidad(_vulnerabilidad){}

        void setNombre(std::string nombre){ this->nombre = nombre; }
        std::string getNombre(){ return nombre; }
        void setEdad(int edad){ this->edad = edad; }
        int getEdad(){ return edad; }
        void setEnfermedades();
        std::string getEnfermedades();
        void setFechaNacimiento(std::string fechaNacimiento){ this->fechaNacimiento = fechaNacimiento; }
        std::string getFechaNacimiento(){ return fechaNacimiento; }
        void setPeso(int peso){ this->peso = peso; }
        int getPeso(){ return peso; }
        void setAltura(int altura){ this->altura = altura; }
        int getAltura(){ return altura; }
        void setDNI(int DNI){ this->DNI = DNI; }
        int getDNI(){ return DNI; }
        void setDireccion(std::string direccion){ this->direccion = direccion; }
        std::string getDireccion(){ return direccion; }
        void setVulnerabilidad(std::string vulnerabilidad){ this->vulnerabilidad = vulnerabilidad; }
        std::string getVulnerabilidad(){ return vulnerabilidad; }   
};

#endif