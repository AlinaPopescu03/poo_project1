#include "../headers/abonament_aniversar.h"
#include<string>


template class abonament_aniversar< std::string, std::string>;

template<typename U, typename T>
void abonament_aniversar<U, T>::detaliiAbonament(){
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


template<typename U, typename T>
void abonament_aniversar<U, T>::setRata(){
    double v=std::stoi(valoare_beneficiu);
    rata=v/(12*durata);

}

template<typename U, typename T>
void abonament_aniversar<U, T>::setPretTotal()  {
    if (rata>0)
        pretTotal=pret+getRata();
    else
        pretTotal=pret;

}

template<typename U, typename T>
double abonament_aniversar<U,T>::getRata() {
    return rata;
}

template<typename U, typename T>
abonament_aniversar<U, T>::abonament_aniversar(const abonament_aniversar &copie)
    :minute_nationale(copie.minute_nationale), minute_internationale(copie.minute_internationale),
    trafic_internet(copie.trafic_internet), beneficiu(copie.beneficiu), durata(copie.durata), pret(copie.pret){

   std::cout<<"CC \n";
}