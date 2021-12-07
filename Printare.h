#ifndef POO_PRINTARE_H
#define POO_PRINTARE_H
#include<iostream>

class Printare {
    friend std::ostream &operator<<(std::ostream &os, const Printare &ob);
public:
    virtual void printare(std::ostream &os) const=0;
    virtual ~Printare()=default;

};


#endif //POO_PRINTARE_H
