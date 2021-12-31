#include "../headers/factura.h"

factura::factura ( const std::shared_ptr<abonament> &cerere, const std::shared_ptr<abonament> &oferta):cerere(cerere), oferta(oferta)
{

    setPret_Abonament();
    setCost_Suplimentar();
    setPret_Total();

    std::cout<<"Constructor factura parametrizat"<<std::endl;}//Constructor cu parametrii


void factura::setPret_Abonament()
{
    pret_abonament=20*(oferta->getMinute_Internationale()/1000)+25*(oferta->getMinute_Nationale()/100)+
                   25*(oferta->getTrafic_Internet()/1000);
} //Setare pret contract

void factura::setPret_Total()
{
    if (cost_suplimentar==0)
        pret_total=pret_abonament;
    else
        pret_total=pret_abonament+cost_suplimentar;
} //Calculare plata lunara

void factura::setCost_Suplimentar()
{
    cost_suplimentar=0;

    if(cerere->getMinute_Internationale()>oferta->getMinute_Internationale())
            cost_suplimentar+=10*(cerere->getMinute_Internationale()-oferta->getMinute_Internationale())/1000;
    if (cerere->getMinute_Nationale()>oferta->getMinute_Nationale())
            cost_suplimentar+=15*(cerere->getMinute_Nationale()-oferta->getMinute_Nationale())/100;
    if (cerere->getTrafic_Internet()>oferta->getTrafic_Internet())
            cost_suplimentar+=15*(cerere->getTrafic_Internet()-oferta->getTrafic_Internet())/100;

} //Calcul cost suplimentar lunar

factura::factura(const factura& copie)
{
this->pret_abonament=copie.pret_abonament;
this->cost_suplimentar=copie.cost_suplimentar;
this->pret_total=copie.pret_total;
this->oferta=copie.oferta;
this->cerere=copie.cerere;

}

float factura::getCost_abonament()const{return pret_abonament;}
float factura::getCost_Suplimentar()const{return cost_suplimentar;}
float factura::getCost_total()const{return pret_total;}


std::ostream& operator<<(std::ostream& os,const  factura& factura)
{
    os<<factura.cost_suplimentar<<std::endl;
    return os;
}


void factura::printare(std::ostream &os)const{
    os<<pret_total<<"\n";
}


factura factura::operator=( const factura &fac)
{   this->pret_abonament=fac.pret_abonament;
    this->cost_suplimentar=fac.cost_suplimentar;
    this->pret_total=fac.pret_total;
    return *this;

}




