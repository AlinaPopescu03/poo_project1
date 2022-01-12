
#ifndef POO_ABONAMENT_ANGAJATI_H
#define POO_ABONAMENT_ANGAJATI_H
#include"abonament.h"
#include<memory>
#include"data_naster.h"

class abonament_angajati: public abonament {
private:
    virtual void printare(std::ostream &os) const override ;


public:
   // abonament_angajati(){std::cout<<"constr";};
    abonament_angajati(float minute_nationale, float  minute_internationale, float trafic_internet);
    friend std::ostream& operator<<(std::ostream &os, abonament_angajati &abonament );
    friend std::istream& operator>>(std::istream &in, abonament_angajati &abonament);
    std::shared_ptr<abonament> clone() const final;
    void citire(std::istream &in) ;
    virtual ~abonament_angajati()=default;

};


#endif //POO_ABONAMENT_ANGAJATI_H
