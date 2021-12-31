#include "../headers/abonament_aniversar.h"


template class abonament_aniversar<std::string>;


template<typename U>
void abonament_aniversar<U>::detaliiAbonament(){
    std::cout<<"Minute nationale: "<<minute_internationale<<"\n";
    std::cout<<"Minute internationale: "<<minute_internationale<<"\n";
    std::cout<<"Trafic internet: "<<trafic_internet<<"\n";
    std::cout<<"Beneficiu: "<<beneficiu<<"\n";
    std::cout<<"Durata abonamentului este: "<<durata<<"\n";
    std::cout<<"Pretul abonamentului este: "<<pret<<"\n";
}

template<typename U>
abonament_aniversar<U>::abonament_aniversar(const abonament_aniversar &copie)
    :minute_nationale(copie.minute_nationale), minute_internationale(copie.minute_internationale),
    trafic_internet(copie.trafic_internet), beneficiu(copie.beneficiu), durata(copie.durata), pret(copie.pret){

   std::cout<<"CC \n";
}