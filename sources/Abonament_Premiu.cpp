
#include "../headers/Abonament_Premiu.h"

Abonament_Premiu::Abonament_Premiu(float minute_nationale, float  minute_internationale, float trafic_internet)
    :abonament(minute_nationale, minute_internationale, trafic_internet){

    setPuncteLoialitate();
    std::cout<<"Constructor pentru abonament premium"<<std::endl;

}



std::ostream &operator<<(std::ostream &os, Abonament_Premiu &ab){
    ab.printare(os);
    return os;
}


 void Abonament_Premiu:: printare(std::ostream &os) const{

    os<<"Abonamentul premium ofera: "<<minute_nationale<<" "<<" minute nationale, "<<minute_internationale<<
      " minute internationale si "<<trafic_internet<<" trafic de internet."<<std::endl;

}
void Abonament_Premiu::setPuncteLoialitate(){
    puncte_loialitate+=0.05*(minute_internationale+minute_nationale)+0.04*(trafic_internet);

}

float Abonament_Premiu::get_PuncteLoialitate() const {
    return puncte_loialitate;
}

