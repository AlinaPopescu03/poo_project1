//
// Created by Alina on 01/11/2022.
//

#include "../headers/abonament_standard.h"
#include<cstring>
abonament_standard::abonament_standard(int id, std::string nume, float minuteNationale, float minuteInternationale, float traficInternet)
        :id(id),nume(nume),minute_nationale(minuteNationale), minute_internationale(minuteInternationale),
          trafic_internet(traficInternet) {

}

 abonament_standard::abonament_standard(const abonament_standard &ab) :nume(ab.nume),
 minute_nationale(ab.minute_nationale), minute_internationale(ab.minute_internationale), trafic_internet(ab.trafic_internet){}

 std::string abonament_standard::getNume() {return nume;}

 int abonament_standard::getId() {return id;}
float abonament_standard::getPret() {
    switch (id){
        case 1:
            return 50;
        case 2:
            return 60;
        case 3:
            return 65;
        case 4:
            return 75;
        default:
            return 0;
    }

}