
#ifndef POO_FACTURA_ANGAJATI_H
#define POO_FACTURA_ANGAJATI_H
#include"factura.h"

class factura_angajati:public factura {
protected:
    static float constexpr discount=0.2;
   void setCost_Total_Angajat();
public:
    virtual void printare(std::ostream &os) const final;
    factura_angajati(const abonament &cerere, const abonament &oferta);
    virtual ~factura_angajati()=default;



};


#endif //POO_FACTURA_ANGAJATI_H
