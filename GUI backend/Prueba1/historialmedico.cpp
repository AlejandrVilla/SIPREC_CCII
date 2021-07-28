#include "historialmedico.h"

void HistorialMedico::setEnfermedades( QString enf ){
    enfermedadesPrevias.push_back(enf);
}
/*
void HistorialMedico::getEnfermedades(){
    for (auto a:enfermedadesPrevias){
        std::cout<<a<<" ";
    }
    std::cout<<'\n';
}*/
