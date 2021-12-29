#include "../headers/factura_angajati.h"


 std::ostream &operator<<(std::ostream &os,const factura_angajati &factura){
    factura.printare(os);
    return os;



 void factura_angajati::printare(std::ostream &os) const {
    os<<"Factura angajatului este:"<<std::endl;
    factura::printare(os);


}
//factura_angajati::factura_angajati(){}


factura_angajati::factura_angajati(const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta)
     :factura{cerere, oferta}
     {
         factura::setPret_Abonament();
         factura::getCost_Suplimentar();
         setCost_Total_Angajat();
         std::cout<<"Constructor factura angajat\n";
     }

void factura_angajati::setCost_Total_Angajat()
{
    if (cost_suplimentar==0)
        pret_total=(1-discount)*pret_abonament;
    else
        pret_total=(1-discount)*(pret_abonament+cost_suplimentar);
}

