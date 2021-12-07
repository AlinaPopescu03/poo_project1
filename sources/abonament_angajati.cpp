#include "../headers/abonament_angajati.h"

abonament_angajati::abonament_angajati(float minute_nationale, float  minute_internationale, float trafic_internet)
    :abonament(minute_nationale, minute_internationale, trafic_internet){
    std::cout<<"Constructor abonament angajat"<<std::endl;

}

void abonament_angajati::printare(std::ostream &os) const {
    os.precision(2);
    os<<std::fixed;
    os<<"Abonamentul angajatului are: "<<minute_nationale<<" "<<" minute nationale, "<<minute_internationale<<
    " minute internationale si "<<trafic_internet<<" trafic de internet."<<std::endl;
}