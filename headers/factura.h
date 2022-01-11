#ifndef POO_FACTURA_H
#define POO_FACTURA_H
#include"abonament.h"
#include<memory>
#include"eroare_date.h"

class factura {
protected:
    float pret_abonament;
    float cost_suplimentar;
    float pret_total;
    abonament cerere;
    abonament oferta;

    void setPret_Abonament();

    void setCost_Suplimentar();
public:

    virtual void setPret_Total() ;
    factura(){}
    factura( const abonament &cerere, const abonament &oferta);
    factura operator=(const factura &copie);
    factura(const factura& copie);
    float getCost_abonament()const;
     float getCost_Suplimentar()const;
     float getCost_total()const;
     virtual void printare(std::ostream &os)const;
    // friend std::istream& operator>>(std::istream&, const factura&);
    friend std::ostream& operator<<(std::ostream &os, const factura &factura); //supracincarcarea opertaorului <<
    virtual ~factura()=default;




};



#endif //POO_FACTURA_H
