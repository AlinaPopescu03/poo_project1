//
// Created by Alina on 01/11/2022.
//

#ifndef POO_FACTURA_BAZA_H
#define POO_FACTURA_BAZA_H
#include<iostream>
#include<memory>
class factura_baza {
protected:
    float pret_total;
public:
    //factura_baza();
    virtual void setPret() =0;
    float getPret() ;
    friend std::ostream &operator<<(std::ostream &os,factura_baza &fac);
    virtual std::shared_ptr<factura_baza> clone() const=0;
    virtual void printare(std::ostream &os) =0 ;
    virtual ~factura_baza();
};


#endif //POO_FACTURA_BAZA_H
