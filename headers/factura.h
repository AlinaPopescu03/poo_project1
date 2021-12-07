#ifndef POO_FACTURA_H
#define POO_FACTURA_H
#include"abonament.h"
#include<memory>

class factura {
protected:
    float pret_abonament;
    float cost_suplimentar;
    float pret_total;
    std::shared_ptr<abonament> cerere;
    std::shared_ptr<abonament> oferta;

    void setPret_Abonament();
    void setPret_Total();
    virtual void setCost_Suplimentar();
public:


    factura(){}
    factura( const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta);
    factura operator=(const factura &copie);
    factura(const factura& copie);
    float getCost_abonament()const;
     float getCost_Suplimentar()const;
     float getCost_total()const;
     void printare(std::ostream &os)const;
    // friend std::istream& operator>>(std::istream&, const factura&);
    friend std::ostream& operator<<(std::ostream &os, const factura &factura); //supracincarcarea opertaorului <<
    virtual ~factura()=default;




};



#endif //POO_FACTURA_H
