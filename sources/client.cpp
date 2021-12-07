//

#include "../headers/client.h"

/// Constructor fara parametrii
client::client(){std::cout<<"Constructor client"<<std::endl;}

/// Consytructor parametrizat
client::client(std::string nume1 , std::string prenume1,  std::string cnp1,float achitat, const std::shared_ptr<factura> &factura_ ):
nume(nume1), prenume(prenume1), cnp(cnp1),achitat(achitat), factura_(factura_)
{   setRestant();
    std::cout<<"Constructor client  param"<<std::endl;} // Constructor cu parametrii


void client::setRestant()
{
    if(factura_->getCost_total() - achitat )
    {   restant=true;
        diferenta -=factura_->getCost_total() - achitat;}
    else
    {restant=false;
        diferenta +=factura_->getCost_total() - achitat; // poate sa fie si negativ si fie scazut din urmatoarea factura
    }
}

bool client::getRestanta()const{return restant;}

float client::getDiferenta() const {return diferenta;}

client::client (const client& copie):
        nume(copie.nume), prenume(copie.prenume), cnp(copie.cnp) {std::cout<<"Copie informatii client"<<std::endl;}

client::~client(){std::cout<<"Destructor client"<<std::endl;} // Destructor