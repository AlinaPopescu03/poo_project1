#include "../headers/abonament_angajati.h"

abonament_angajati::abonament_angajati(float minute_nationale, float  minute_internationale, float trafic_internet)
    :abonament(minute_nationale, minute_internationale, trafic_internet){
    std::cout<<"Constructor abonament angajat"<<std::endl;

}

void abonament_angajati::citire(std::istream &in) {
    abonament::citire(in);

}

std::ostream& operator<<(std::ostream &os, abonament_angajati &abonament ){
    abonament.printare(os);
    return os;
}

std::istream& operator>>(std::istream &in, abonament_angajati &abonament ){
   abonament.citire(in);
    return in;
}



void abonament_angajati::printare(std::ostream &os) const  {
    os<<"Abonament angajati:"<<std::endl;
    abonament::printare(os);

}

 std::shared_ptr<abonament> abonament_angajati::clone() const {
    return std::make_shared<abonament_angajati> (*this);
}


