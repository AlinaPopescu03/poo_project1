#include "../headers/factura_angajati.h"


 std::ostream &operator<<(std::ostream &os, factura_angajati &factura){
    factura.printare(os);
    return os;
}


 void factura_angajati::printare(std::ostream &os) const {
    os<<"Factura angajatului este:"<<std::endl;
    factura::printare(os);

}
//factura_angajati::factura_angajati(){}


factura_angajati::factura_angajati(int zi, int luna, int an, const abonament &cerere,
                                   const abonament &oferta)
        : data_naster(zi, luna, an), factura{cerere, oferta} {
    setPret_Total();

    std::cout << "Constructor factura angajat" << std::endl;

}

void factura_angajati::setPret_Total() {
    if (cost_suplimentar == 0)
        pret_total = (1 - discount) * pret_abonament;
    else
        pret_total = (1 - discount) * (pret_abonament + cost_suplimentar);

    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    int month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
    if (data_naster::getLuna() == month)
        pret_total = 0;

}

