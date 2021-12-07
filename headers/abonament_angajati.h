
#ifndef POO_ABONAMENT_ANGAJATI_H
#define POO_ABONAMENT_ANGAJATI_H
#include"abonament.h"

class abonament_angajati: public abonament {
public:
    abonament_angajati(float minute_nationale, float  minute_internationale, float trafic_internet);
    virtual void printare(std::ostream &os) const override;
    ~abonament_angajati()=default;
};


#endif //POO_ABONAMENT_ANGAJATI_H
