#include "../headers/factura_angajati.h"


 void factura_angajati::printare(std::ostream &os) const {
    os.precision(2);
    os<<"Factura angajatului este:"<<std::endl;

}
//factura_angajati::factura_angajati(){}


factura_angajati::factura_angajati(const abonament &cerere, const abonament &oferta)
    :factura{ cerere, oferta }{
    factura_angajati::setCost_Total_Angajat();
    //factura::setPret_Abonament();
    //factura::getCost_Suplimentar();
    std::cout<<"Constructor factura angajat"<<std::endl;

}

void factura_angajati::setCost_Total_Angajat()
{
    if (cost_suplimentar==0)
        pret_total=(1-discount)*pret_abonament;
    else
        pret_total=(1-discount)*(pret_abonament+cost_suplimentar);
}

