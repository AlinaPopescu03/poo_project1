
#ifndef POO_FACTURA_ANGAJATI_H
#define POO_FACTURA_ANGAJATI_H
#include"factura.h"

class factura_angajati:public factura {
protected:

    static float constexpr discount=0.2;
    void setPret_Total_Angajat();
   void printare(std::ostream &os) const override;

public:
   friend std::ostream &operator<<(std::ostream &os, factura_angajati &factura);
    factura_angajati(const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta);
    virtual ~factura_angajati()=default;



};


#endif //POO_FACTURA_ANGAJATI_H
