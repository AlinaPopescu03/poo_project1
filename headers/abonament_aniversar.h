//
// Created by Alina on 12/30/2021.
//

#ifndef POO_ABONAMENT_ANIVERSAR_H
#define POO_ABONAMENT_ANIVERSAR_H
#include<iostream>

template< typename U>
class abonament_aniversar {
    double minute_nationale;
    double minute_internationale;
    double trafic_internet;
    U beneficiu;
    double durata;
    double pret;


public:
    abonament_aniversar(){};
    abonament_aniversar(double minute_nationale, double minute_internationale, double trafic_internet,U beneficiu, double durata, double pret)
        :minute_nationale(minute_nationale), minute_internationale(minute_internationale),beneficiu(beneficiu), trafic_internet(trafic_internet), durata(durata), pret(pret){}
    void detaliiAbonament();
    abonament_aniversar(const abonament_aniversar &copie);
    ~abonament_aniversar() {  };
};


#endif //POO_ABONAMENT_ANIVERSAR_H
