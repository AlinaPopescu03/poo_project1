
#ifndef POO_CITIRE_H
#define POO_CITIRE_H
#include<iostream>

class Citire {
    friend std::istream &operator>>(std::istream &in, const Citire &ob);
public:
    virtual void citire(std::istream &in) const =0;
    virtual ~Citire()=default;

};


#endif //POO_CITIRE_H
