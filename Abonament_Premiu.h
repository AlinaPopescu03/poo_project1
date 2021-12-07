
#ifndef POO_ABONAMENT_PREMIU_H
#define POO_ABONAMENT_PREMIU_H
#include "headers/abonament.h"

class Abonament_Premiu : public abonament{
private:
    float puncte_loialitate;
    bool premium{false};
public:
    Abonament_Premiu(float minute_nationale, float  minute_internationale, float trafic_internet, float puncte_loialitate);
    


};


#endif //POO_ABONAMENT_PREMIU_H
