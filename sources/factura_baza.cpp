//
// Created by Alina on 01/11/2022.
//

#include "../headers/factura_baza.h"


float factura_baza::getPret() {return pret_total;}

std::ostream &operator<<(std::ostream &os, factura_baza &fac)
{
    fac.printare(os);
    return os;
}

factura_baza ::~factura_baza(){}