//
// Created by Alina on 01/11/2022.
//

#ifndef POO_ABONAMENT_STANDARD_H
#define POO_ABONAMENT_STANDARD_H
#include<iostream>


class abonament_standard  {
    int id;
    std::string nume;
    float minute_nationale;
    float minute_internationale;
    float trafic_internet;

public:
    abonament_standard(int id, std::string nume, float minuteNationale, float minuteInternationale, float traficInternet);
    abonament_standard(const abonament_standard &ab);
    std::string getNume();
    float getPret();
    int getId();
    ~abonament_standard();


};

class abonament_standar_factory{
public:
    static abonament_standard basic(){return abonament_standard(1,"basic",100, 100, 1000);}
    static abonament_standard boring(){return abonament_standard(2,"boring",3000, 300, 500);}
    static abonament_standard silver(){return abonament_standard(3,"silver", 1000, 500, 1000);}
    static abonament_standard gold(){return abonament_standard(4,"gold",5000, 10000, 900000);}
};


#endif //POO_ABONAMENT_STANDARD_H
