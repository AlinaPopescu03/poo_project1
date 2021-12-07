#ifndef POO_FACTURA_H
#define POO_FACTURA_H
#include"abonament.h"
#include"../Printare.h"

class factura :public Printare{
protected:
    float pret_abonament;
    float cost_suplimentar;
    float pret_total;
    abonament cerere;
    abonament oferta;

    void setPret_Abonament();
    void setPret_Total();
    void setCost_Suplimentar();
public:


    factura(){}
    factura( const abonament &cerere, const abonament &oferta);
    factura operator=(const factura &copie);
    factura(const factura& copie);
    float getCost_abonament()const;
    float getCost_Suplimentar()const;
    float getCost_total()const;
    // friend std::istream& operator>>(std::istream&, const factura&);
    //friend std::ostream& operator<<(std::ostream&, const factura&); //supracincarcarea opertaorului <<
    virtual ~factura()=default;
    virtual void printare(std::ostream &os) const override;



};



#endif //POO_FACTURA_H
