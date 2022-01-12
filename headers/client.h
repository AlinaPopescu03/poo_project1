

#ifndef POO_CLIENT_H
#define POO_CLIENT_H
#include<iostream>
#include<vector>
#include"factura.h"
#include<memory>

class client {
protected:
    std::string nume;
    std::string prenume;
    std::string cnp;
    float achitat;
    bool restant{false};
    float diferenta{0};
    std::shared_ptr<factura> factura_;
    void setRestant();
    void afisare(std::ostream &os);
    friend class client_builder;

public:
    client();

    client(std::string nume1 , std::string prenume1,  std::string cnp1,float achitat, const std::shared_ptr<factura> &factura_ );
    friend std::ostream &operator<<(std::ostream &os, client &client);
    bool getRestanta()const;
    float getDiferenta()const;

    client (const client& copie);

    virtual ~client() = default;

};

class client_builder{
private:
    client a;
public:
    client_builder()=default;
    client_builder &minute_nationale(std::string nume){
        a.nume=nume;
        return *this;
    }
    client_builder &minute_inaternationale(std::string prenume){
       a.prenume=prenume;
        return *this;
    }
    client_builder &trafic_internet(std::string cnp){
        a.cnp=cnp;
        return *this;
    }
    class client build(){
        return a;
    }

};


#endif //POO_CLIENT_H
