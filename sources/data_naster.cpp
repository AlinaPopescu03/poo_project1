//
// Created by Alina on 01/10/2022.
//

#include "../headers/data_naster.h"

data_naster::data_naster(int zi, int luna, int an) : zi(zi), luna(luna), an(an) {}

data_naster::~data_naster() {

}

int data_naster::getAn() {return an;}
int data_naster::getLuna() {return luna;}
int data_naster::getZi() {return zi;}

std::ostream &operator<<(std::ostream &os, const data_naster &datanastere) {
    os << "zi: " << datanastere.zi << " luna: " << datanastere.luna << " an: " << datanastere.an;
    return os;
}
