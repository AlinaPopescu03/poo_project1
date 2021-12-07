

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
    std::shared_ptr <factura> factura_;
    void setRestant();

public:
    client();

    client(std::string nume1 , std::string prenume1,  std::string cnp1,float achitat, const std::shared_ptr <factura> &factura_ );


    bool getRestanta()const;
    float getDiferenta()const;

    client (const client& copie);

    ~client();

};


#endif //POO_CLIENT_H
