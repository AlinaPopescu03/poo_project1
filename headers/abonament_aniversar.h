//
// Created by Alina on 12/30/2021.
//

#ifndef POO_ABONAMENT_ANIVERSAR_H
#define POO_ABONAMENT_ANIVERSAR_H
#include<iostream>

template<typename U, typename T>
class abonament_aniversar {
    double minute_nationale;
    double minute_internationale;
    double trafic_internet;
    U beneficiu;
    T valoare_beneficiu;
    double durata;
    double pret;
    double pretTotal;
    double rata;


public:
    abonament_aniversar() {};

    abonament_aniversar(double minute_nationale, double minute_internationale, U beneficiu, U valoare,
                        double trafic_internet, double durata)
            : minute_nationale(minute_nationale), minute_internationale(minute_internationale), beneficiu(beneficiu),
              valoare_beneficiu(valoare), trafic_internet(trafic_internet), durata(durata) {}

    void detaliiAbonament();
    void setPretTotal();
    void setRata();
    double getRata();
    abonament_aniversar(const abonament_aniversar &copie);
    ~abonament_aniversar() {};
};


#endif //POO_ABONAMENT_ANIVERSAR_H
