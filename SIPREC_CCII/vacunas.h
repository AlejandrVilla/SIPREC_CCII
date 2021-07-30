#ifndef VACUNAS_H
#define VACUNAS_H
#include "suministro.h"

class Vacunas : public Suministro
{
public:
    Vacunas(QString tipo,int stock,QString fechaLlegada,QString _pais,QString _cantDosis="")
        :Suministro(tipo,fechaLlegada,stock),pais(_pais),cantDosis(_cantDosis){}
    virtual ~Vacunas(){}

    //virtual void verInfo() override;
    //virtual void actualizarDatos() override;
    void setPais(QString);
    QString getPais();
    void setDosis(QString);
    QString getDosis();

private:
    QString pais;
    QString cantDosis;
};

#endif // VACUNAS_H
