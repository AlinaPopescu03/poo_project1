//
// Created by Alina on 01/10/2022.
//

#ifndef POO_DATA_NASTER_H
#define POO_DATA_NASTER_H


#include <ostream>

class data_naster {
    int zi;
    int luna;
    int an;
public:
    data_naster(int zi, int luna, int an);

    friend std::ostream &operator<<(std::ostream &os, const data_naster &datanastere);
    int getLuna();
    int getZi();
    int getAn();
    virtual ~data_naster();

};


#endif //POO_DATA_NASTER_H
