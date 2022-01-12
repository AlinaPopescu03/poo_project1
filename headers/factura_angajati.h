
#ifndef POO_FACTURA_ANGAJATI_H
#define POO_FACTURA_ANGAJATI_H
#include"factura.h"
#include"data_naster.h"

class factura_angajati:public factura , public data_naster{
protected:

    static float constexpr discount=0.2;
    //void setPret_Total_Angajat() ;


public:
    void printare(std::ostream &os) override;
    //FUNCTIA VIRTUALA
    void setPret() ;
    std::shared_ptr<factura_baza> clone() const  ;
    friend std::ostream &operator<<(std::ostream &os, factura_angajati &factura);
    factura_angajati(int zi, int luna, int an,const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta);
    ~factura_angajati();



};


#endif //POO_FACTURA_ANGAJATI_H
