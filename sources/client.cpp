//

#include "../headers/client.h"
#include "../headers/eroare_date.h"
#include<iostream>


/// Constructor fara parametrii
client::client(){std::cout<<"Constructor client"<<std::endl;}

/// Consytructor parametrizat
// T2: erori
client::client(std::string nume1 , std::string prenume1,  std::string cnp1,float achitat, const std::shared_ptr<factura> &factura_ )
    :nume(nume1), prenume(prenume1), cnp(cnp1),achitat(achitat), factura_(factura_)
{

    if(cnp1.length()!=13)
        throw eroare_cnp_prea_scurt();
    else
    {
        for(int i=0; i<13; i++)
            if(cnp[i]<0 || cnp[i]>9)
                throw eroare_cnp_invalid();
    }
    setRestant();
    std::cout<<"Constructor client  param"<<std::endl;
} // Constructor cu parametrii


void client::setRestant()
{
    if(factura_->getCost_total() - achitat )
    {   restant=true;
        diferenta -=factura_->getCost_total() - achitat;}
    else
    {   restant=false;
        diferenta +=factura_->getCost_total() - achitat; // poate sa fie si negativ si fie scazut din urmatoarea factura
    }
}

bool client::getRestanta()const{return restant;}

float client::getDiferenta() const {return diferenta;}

client::client (const client& copie):
        nume(copie.nume), prenume(copie.prenume), cnp(copie.cnp) {std::cout<<"Copie informatii client"<<std::endl;}

void client::afisare(std::ostream &os){
    os<<nume<<" "<<prenume<<" "<<cnp<<"\n";
}

std::ostream &operator<<(std::ostream &os, client &client)
{
    client.afisare(os);
    return os;
}


//client::~client(){std::cout<<"Destructor client"<<std::endl;} // Destructor


