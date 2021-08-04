#ifndef MASCARILLA_H
#define MASCARILLA_H

#include "suministro.h"

class Mascarilla : public Suministro {

public:
    Mascarilla( QString tipo, QString fechaLlegada, int stock, QString _calidad )
    :Suministro(tipo,fechaLlegada, stock),calidad(_calidad){}
    ~Mascarilla(){}
    void setCalidad(QString);
    QString getCalidad();

private:
    QString calidad;
};

#endif // MASCARILLA_H
