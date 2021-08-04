#ifndef PRUEBA_H
#define PRUEBA_H

#include "suministro.h"

class Prueba : public Suministro{

public:
    Prueba(QString tipo,QString fechaLlegada,int stock)
    :Suministro(tipo,fechaLlegada,stock){}

    ~Prueba(){}
};

#endif // PRUEBA_H
