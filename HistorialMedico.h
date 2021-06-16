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

        void setNombre(std::string);
        std::string getNombre();
        void setEdad(int);
        int getEdad();
        void setEnfermedades();
        std::string getEnfermedades();
        void setFechaNacimiento(std::string);
        std::string getFechaNacimiento();
        void setPeso(int);
        int getPeso();
        void setAltura(int);
        int getAltura();
        void setDNI(int);
        int getDNI();
        void setDireccion(std::string);
        std::string getDireccion();
        void setVulnerabilidad(std::string);
        std::string getVulnerabilidad();        
};

#endif