#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "suministro.h"

class Medicamento : public Suministro{

public:
    Medicamento(QString tipo,QString fechaLlegada,int stock,QString _dosis)
    :Suministro(tipo,fechaLlegada,stock),dosis(_dosis){}
    ~Medicamento(){}
    void setDosis(QString);
    QString getDosis();

private:
    QString dosis;
};

#endif // MEDICAMENTO_H
