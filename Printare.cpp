#include "Printare.h"


std::ostream &operator<<(std::ostream &os, const Printare &ob){
    ob.printare(os);
    return os;
}
