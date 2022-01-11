

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
    factura factura_;
    void setRestant();
    void afisare(std::ostream &os);

public:
    client();

    client(std::string nume1 , std::string prenume1,  std::string cnp1,float achitat, const factura &factura_ );
    friend std::ostream &operator<<(std::ostream &os, client &client);
    bool getRestanta()const;
    float getDiferenta()const;

    client (const client& copie);

    virtual ~client() = default;

};


#endif //POO_CLIENT_H
