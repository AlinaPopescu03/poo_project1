
#ifndef POO_FACTURA_ANGAJATI_H
#define POO_FACTURA_ANGAJATI_H
#include"headers/factura.h"

class factura_angajati:public factura {
    static float const discount;
public:
    virtual void printare(std::ostream &os) const final;
    //factura_angajati();
    factura_angajati(const abonament &cerere, const abonament &oferta);
    virtual ~factura_angajati()=default;

};


#endif //POO_FACTURA_ANGAJATI_H
