
#ifndef POO_FACTURA_ANGAJATI_H
#define POO_FACTURA_ANGAJATI_H
#include"factura.h"
#include"data_naster.h"

class factura_angajati:public factura , public data_naster{
protected:

    static float constexpr discount=0.2;
    //void setPret_Total_Angajat() ;
   void printare(std::ostream &os) const override;

public:

    virtual void setPret_Total() override;
   friend std::ostream &operator<<(std::ostream &os, factura_angajati &factura);
    factura_angajati(int zi, int luna, int an,const abonament &cerere, const abonament &oferta);
    virtual ~factura_angajati()=default;



};


#endif //POO_FACTURA_ANGAJATI_H
