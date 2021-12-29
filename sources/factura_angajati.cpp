#include "../headers/factura_angajati.h"

<<<<<<< HEAD
 std::ostream &operator<<(std::ostream &os, factura_angajati &factura){
    factura.printare(os);
    return os;
}


 void factura_angajati::printare(std::ostream &os) const {
    os<<"Factura angajatului este:"<<std::endl;
    factura::printare(os);
=======

 void factura_angajati::printare(std::ostream &os) const {
    os.precision(2);
    os<<"Factura angajatului este:"<<std::endl;
>>>>>>> origin/main

}
//factura_angajati::factura_angajati(){}


<<<<<<< HEAD
factura_angajati::factura_angajati(const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta)
    :factura{cerere, oferta}{

    factura::setPret_Abonament();
    factura::getCost_Suplimentar();
    factura::setPret_Total();
=======
factura_angajati::factura_angajati(const abonament &cerere, const abonament &oferta)
    :factura{ cerere, oferta }{
    factura_angajati::setCost_Total_Angajat();
    //factura::setPret_Abonament();
    //factura::getCost_Suplimentar();
>>>>>>> origin/main
    std::cout<<"Constructor factura angajat"<<std::endl;

}

void factura_angajati::setCost_Total_Angajat()
{
    if (cost_suplimentar==0)
        pret_total=(1-discount)*pret_abonament;
    else
        pret_total=(1-discount)*(pret_abonament+cost_suplimentar);
}

