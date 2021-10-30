#include <iostream>

#include<vector>

class abonament{

private:
    float minute_nationale;
    float minute_internationale;
    float trafic_internet;

public:
    abonament(){}
    abonament(float minute_nationale, float  minute_internationale, float trafic_internet):
    minute_internationale(minute_internationale), minute_nationale(minute_nationale), trafic_internet(trafic_internet)
    {std::cout<<"Constructor abonament parametrizat"<<std::endl;}
    // Constructor cu parametrii

    void ActualizareMinuteNationale(float minute_nationale){this->minute_nationale=minute_nationale;}
    void ActualizareMinuteInternationale(float minute_internationale){this->minute_internationale=minute_internationale;}
    void ActualizareTraficInternet(float trafic_internet){this->trafic_internet=trafic_internet;}

    float getMinute_Nationale() const{return minute_nationale;}
    float getMinute_Internationale() const {return minute_internationale;}
    float getTrafic_Internet() const {return trafic_internet;}
    //functii care returneaza variabilele private din clasa

    ~abonament(){std::cout<<"Destructor abonament"<<std::endl;}

};

class factura{

private:
    float pret_abonament;
    float cost_suplimentar;
    float pret_total;
    abonament cerere;
    abonament oferta;
    void setPret_Abonament()
    {
        pret_abonament=20*(oferta.getMinute_Internationale()/1000)+25*(oferta.getMinute_Nationale()/100)+
                       25*(oferta.getTrafic_Internet()/1000);
    } //Setare pret contract

    void setPret_Total()
    {
        if (cost_suplimentar==0)
            pret_total=pret_abonament;
        else
            pret_total=pret_abonament+cost_suplimentar;
    } //Calculare plata lunara

    void setCost_Suplimentar()
    {
        cost_suplimentar=0;
        if(cerere.getMinute_Internationale()>oferta.getMinute_Internationale())
            cost_suplimentar+=10*(cerere.getMinute_Internationale()-oferta.getMinute_Internationale())/1000;
        if (cerere.getMinute_Nationale()>oferta.getMinute_Nationale())
            cost_suplimentar+=15*(cerere.getMinute_Nationale()-oferta.getMinute_Nationale())/100;
        if (cerere.getTrafic_Internet()>oferta.getTrafic_Internet())
            cost_suplimentar+=15*(cerere.getTrafic_Internet()-oferta.getTrafic_Internet())/100;
    } //Calcul cost suplimentar lunar
    /// Am folosit setteri privati pentru a limita accesul la datele clientului

public:


    factura(){std::cout<<"Constructor factura"<<std::endl;}
    factura ( const abonament &cerere, const abonament &oferta):
    cerere(cerere), oferta(oferta) {std::cout<<"Constructor factura parametrizat"<<std::endl;}//Constructor cu parametrii

    void setPreturi()
    {
        pret_abonament.setPret_Abonament();
        cost_suplimentar.setCost_Suplimentar();
        pret_total.setPret_Total();
    } // Functie care apeleaza setteri



    factura(const factura& copie)
    {
        this->pret_abonament=copie.pret_abonament;
        this->cost_suplimentar=copie.cost_suplimentar;
        this->pret_total=copie.pret_total;
        this->oferta=copie.oferta;
        this->cerere=copie.cerere;

    }

    float getCost_abonament()const{return pret_abonament;}
    float getCost_Suplimentar()const{return cost_suplimentar;}
    float getCost_total()const{return pret_total;}

   // friend std::istream& operator>>(std::istream&, const factura&);
    friend std::ostream& operator<<(std::ostream&, const factura&); //supracincarcarea opertaorului <<

    ~factura(){std::cout<<"Destructor factura"<<std::endl;}
};


std::ostream& operator<<(std::ostream& out, factura& fac)
{
    out<<fac.cost_suplimentar<<std::endl;
    return out;
}


class client{
private:
    std::string nume;
    std::string prenume;
    std::string cnp;
    float achitat;
    float restant;
    factura* facturi;

public:
    client(){std::cout<<"Constructor client"<<std::endl;}
   /* client(std::string &nume, std::string &prenume,  std::string &cnp, factura &facturi):
    nume(nume), prenume(prenume), cnp(cnp), facturi(facturi){} // Constructor cu parametrii*/

    client(std::string nume = "", std::string prenume = "",  std::string cnp = "", float achitat=0, factura* facturi = new factura):
            nume(nume), prenume(prenume), cnp(cnp),achitat(achitat),  facturi(facturi){std::cout<<"Constructor client  param"<<std::endl;} // Constructor cu parametrii


    void setRestant(factura& facturi)
    {
        if (achitat!=facturi.getCost_total())
            restant=facturi.getCost_total()-achitat; // poate sa fie si negativ si fie scazut din urmatoarea factura

    }
    float getRestanta()const{return restant;}

    client (const client& copie):
    nume(copie.nume), prenume(copie.prenume), cnp(copie.cnp){}

    ~client(){std::cout<<"Destructor client"<<std::endl;} // Destructor
};



int main() {
   abonament a1{100, 1000, 500};
   abonament a2{150, 700, 501};
   //factura f1{{a1}, {a2}};
   factura* f1 = new factura(a1,a2);
   f1->setCost_Suplimentar(a1, a2);
   std::cout<<f1->getCost_Suplimentar()<<std::endl;

   //factura f2({a1}, {a2});
   client c1("Dobre", "Pavel", "5759385098524",100, f1);


}
