#include <iostream>


class Client {
private:
    int id;
    int varsta;
    std::string nume;
    std::string prenume;
    std::string cnp;
    std::string data_nasterii;
public:
    Client(){} // constructor
    Client(int id, int varsta, const std::string &nume, const std::string &prenume,const std::string &cnp, const std::string &data_nasterii) {
        this->id = id;
        this->varsta = varsta;
        this->nume = nume;
        this->prenume = prenume;
        this->cnp = cnp;
        this->data_nasterii = data_nasterii;
    }//constructor cu parametrii
    ~Client(){ std::cout<<"destructor"<<std::endl;} //destructor

    Client(const Client &copie) {
        this->id = copie.id;
        this->varsta = copie.varsta;
        this->nume = copie.nume;
        this->prenume = copie.prenume;
        this->cnp = copie.cnp;
        this->data_nasterii = copie.data_nasterii;

    } //constructor de copiere

    Client &operator=(const Client &copie) {
        this->id = copie.id;
        this->nume = copie.nume;
        this->prenume = copie.prenume;
        this->varsta = copie.varsta;
        this->data_nasterii = copie.data_nasterii;
        this->cnp = copie.cnp;
        return *this;

    }//operator =

    friend std::ostream &operator<<(std::ostream &os, const Client &client) {
        os << "ID-ul clientului este " << client.id << std::endl;
        os << "Numele clientului este " << client.nume << std::endl;
        os << "Prenumele clientului este " << client.prenume << std::endl;
        os << "Varsta clientului este " << client.varsta << std::endl;
        os << "CNP-ul clientului este " << client.cnp << std::endl;
        os << "Data de nastere a  clientului este " << client.data_nasterii << std::endl;
        return os;

    } //Operatorul de afisare

    void setnume(const std::string &nume){
        this->nume=nume;    }

};

    void h(Client *p, std::string nume_) // moodificare nume
    {p->setnume(nume_);}

    void afis(Client c){
        std::cout<<c<<std::endl;
    }//functie pentru a afisa datele unui client


class Abonament{
    private:
    std::string nume_abonament;
    float pret;
    float durata; // se masoara in ani, nu nr intreg in unele cazuri

    public:
    Abonament(const std::string &nume_abonament, float pret, float durata):nume_abonament(nume_abonament), pret(pret), durata(durata) {
    }

    Abonament (const Abonament &copie){
        this->durata=copie.durata;
        this->nume_abonament=copie.nume_abonament;
        this->pret=copie.pret;
    } //const de copiere

    Abonament &operator=(const Abonament &copie){
        this->durata=copie.durata;
        this->nume_abonament=copie.nume_abonament;
        this->pret=copie.pret;
        return *this;
    } //operator =

    friend std::ostream &operator<<(std::ostream &os, const Abonament &abonament) {
        os<<"Numele abonamentului este "<< abonament.nume_abonament << std::endl;
        os<<"Pretul abonamentului este "<< abonament.pret << std::endl;
        os<<"Durata abonamentului este de"<< abonament.durata <<" ani"<< std::endl;
        return os;
    }



    ~Abonament(){} ; //destructor

};

class Abonament_Premium:public Abonament{
    int reducere;
    bool premiu;
    int puncte_loialitate;
public:
   // Abonament_Premium();
    //~Abonament_Premium(){};
    //functii in lucru
    //void calcul_reducere();
    //void este_premium();
    //void calcul_puncte_loialitate();
};

void afis_abonament(Abonament a){
    std::cout<<a<<std::endl;
}//functie pentru a afisa datele despre un abonament



int main() {
   Client c1(7, 20, "Antonescu", "Lucian","43575594675876", "10.10.200" );
   Client c3=c1;
   //Client c4();
   afis(c1);
   //afis(c3); am verificat daca operatorul = functioneaza

   Abonament a1("red", 128, 2);
    afis_abonament(a1);


}
