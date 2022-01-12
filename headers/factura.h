#ifndef POO_FACTURA_H
#define POO_FACTURA_H
#include"abonament.h"
#include<memory>
#include"eroare_date.h"
#include"factura_baza.h"

class factura :public factura_baza{
protected:
    float pret_abonament;
    float cost_suplimentar;

    std::shared_ptr<abonament> cerere;
    std::shared_ptr<abonament> oferta;
    void setPret_Abonament();
    void setCost_Suplimentar();

public:
    //FUNCTIA VIRTUALA
    virtual void setPret();

    //factura();
    factura( const  std::shared_ptr<abonament> &cerere, const  std::shared_ptr<abonament> &oferta);
    factura(float pretAbonament, float costSuplimentar, const std::shared_ptr<abonament> &cerere,
            const std::shared_ptr<abonament> &oferta);

    //factura operator=(const factura &copie);
    factura(const factura& copie);
    float getCost_abonament()const;
     float getCost_Suplimentar()const;
     float getCost_total();

     void printare(std::ostream &os)override ;
     virtual std::shared_ptr<factura_baza> clone() const;
    // friend std::istream& operator>>(std::istream&, const factura&);
    friend std::ostream& operator<<(std::ostream &os, const factura &factura); //supracincarcarea opertaorului <<
    //virtual ~factura()=default;




};



#endif //POO_FACTURA_H
