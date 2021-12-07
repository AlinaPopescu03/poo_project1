#include "Citire.h"

std::istream &operator>>(std::istream &in, const Citire &ob){
    ob.citire(in);
    return in;
}