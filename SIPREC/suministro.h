#ifndef SUMINISTRO_H
#define SUMINISTRO_H

#include <QObject>

class Suministro : public QObject{

    Q_OBJECT

public:
    Suministro( QString _tipo,QString _fechaLlegada,int _stock )
            :tipo(_tipo),fechaLlegada(_fechaLlegada),stock(_stock){}
    ~Suministro(){}
    void setTipo(QString);
    QString getTipo();
    void setFechaLlegada(QString);
    QString getFechaLlegada();
    void setStock(int);
    int getStock();

private:
    QString tipo;
    QString fechaLlegada;
    int stock;
};

#endif // SUMINISTRO_H
