#include "../headers/abonament_aniversar.h"
#include<string>


template class abonament_aniversar< std::string>;

template<typename U>
void abonament_aniversar<U>::detaliiAbonament(){
    std::cout<<"Minute nationale: "<<minute_internationale<<"\n";
    std::cout<<"Minute internationale: "<<minute_internationale<<"\n";
    std::cout<<"Trafic internet: "<<trafic_internet<<"\n";
    std::cout<<"Beneficiu: "<<beneficiu<<"\n";
    std::cout<<" Valoare beneficiu: "<<beneficiu<<"\n";
    std::cout<<"Durata abonamentului este: "<<durata<<"\n";

    if (getRata()>0)
    {
        std::cout<<"Pretul abonamentului este: "<<pretTotal<<" si include o rata de "<<rata<<"\n";
    }
    else
        std::cout<<"Pretul abonamentului este: "<<pret<<"\n";
}


template<typename U>
void abonament_aniversar<U>::setRata(){
    double v=std::stoi(valoare_beneficiu);
    rata=v/(12*durata);

}

template<typename U>
void abonament_aniversar<U>::setPret()  {
    if (rata>0)
        pretTotal=pret+getRata();
    else
        pretTotal=pret;

}

template<typename U>
double abonament_aniversar<U>::getRata() {
    return rata;
}

template<typename U>
double abonament_aniversar<U>::getPret()  {
    return pretTotal;
}



template<typename U>
abonament_aniversar<U>::abonament_aniversar(const abonament_aniversar &copie)
    :minute_nationale(copie.minute_nationale), minute_internationale(copie.minute_internationale),
    trafic_internet(copie.trafic_internet), beneficiu(copie.beneficiu), durata(copie.durata), pret(copie.pret){

   std::cout<<"CC \n";
}