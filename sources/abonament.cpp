

#include "../headers/abonament.h"
#include "../headers/eroare_date.h"

abonament::abonament(float minute_nationale, float  minute_internationale, float trafic_internet)
    :minute_internationale(minute_internationale), minute_nationale(minute_nationale), trafic_internet(trafic_internet)

{  if (minute_nationale<0 || minute_internationale<0 || trafic_internet<0)
        throw eroare_abonament();
    std::cout<<"Constructor abonament parametrizat"<<std::endl;}
// Constructor cu parametrii

void abonament::ActualizareMinuteNationale(float minute_nationale){this->minute_nationale=minute_nationale;}
void abonament::ActualizareMinuteInternationale(float minute_internationale){this->minute_internationale=minute_internationale;}
void abonament::ActualizareTraficInternet(float trafic_internet){this->trafic_internet=trafic_internet;}

float abonament::getMinute_Nationale() const{return minute_nationale;}
float abonament::getMinute_Internationale() const {return minute_internationale;}
float abonament::getTrafic_Internet() const {return trafic_internet;}
//functii care returneaza variabilele private din clasa


std::ostream &operator<<(std::ostream &os, const abonament &ab)
{
    os.precision(2);
    ab.printare(os);
    return os;
}

std::istream &operator>>(std::istream &in, abonament &ab)
{
    ab.citire(in);
    return in;
}


void abonament::citire(std::istream &in) {

        double minInternationale;
        double minNationale;
        double trafInternet;
        in>>minInternationale;
        in>>minNationale;
        in>>trafInternet;
        minute_nationale=minNationale;
        minute_internationale=minInternationale;
        trafic_internet=trafInternet;

}
 void abonament::printare(std::ostream &os) const {
    os.precision(2);
    os<<"Abonamentul include "<<minute_nationale<<" minute nationale "<<minute_internationale<<" minute_internationale"<<trafic_internet<<" GB trafic de internet"<<"\n";
    os<<"========================================"<<std::endl;

}


// Destructor tema 1
// abonament::~abonament(){std::cout<<"Destructor abonament"<<std::endl;}