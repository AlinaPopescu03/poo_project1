
#ifndef POO_ABONAMENT_PREMIU_H
#define POO_ABONAMENT_PREMIU_H
#include "abonament.h"

class Abonament_Premiu : public abonament{
protected:
    std::string nume;
    float puncte_loialitate{0};
    virtual void printare(std::ostream &os) const;
public:
    Abonament_Premiu(std::string nume, float minute_nationale, float  minute_internationale, float trafic_internet);
    friend std::ostream &operator<<(std::ostream &os, Abonament_Premiu &ab);
    std::shared_ptr<abonament> clone() const final;
    void setPuncteLoialitate();
    virtual ~Abonament_Premiu()=default;
    float get_PuncteLoialitate() const;
    
};
class abonament_premium_factory{
public:
    static Abonament_Premiu basic(){return Abonament_Premiu("red1", 100, 100, 1000);}
    static Abonament_Premiu boring(){return Abonament_Premiu("red2",3000, 300, 500);}
    static Abonament_Premiu silver(){return Abonament_Premiu("red3", 1000, 500, 1000);}
    static Abonament_Premiu gold(){return Abonament_Premiu("red4",5000, 10000, 900000);}
};

#endif //POO_ABONAMENT_PREMIU_H
