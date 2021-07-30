#ifndef PRUEBA_H
#define PRUEBA_H

#include "suministro.h"

class Prueba : public Suministro
{
public:
    Prueba(QString tipo,QString fechaLlegada,int stock)
    :Suministro(tipo,fechaLlegada,stock){}

    virtual ~Prueba(){}
    //virtual void verInfo() override;
    //virtual void actualizarDatos() override;
};

#endif // PRUEBA_H
