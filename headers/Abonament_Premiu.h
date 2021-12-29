
#ifndef POO_ABONAMENT_PREMIU_H
#define POO_ABONAMENT_PREMIU_H
#include "abonament.h"

class Abonament_Premiu : public abonament{
protected:
    float puncte_loialitate{0};
public:
    Abonament_Premiu(float minute_nationale, float  minute_internationale, float trafic_internet);
    virtual void printare(std::ostream &os) const;
    void setPuncteLoialitate();
    virtual ~Abonament_Premiu()=default;
    float get_PuncteLoialitate() const;
    
};

#endif //POO_ABONAMENT_PREMIU_H
