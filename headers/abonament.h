#ifndef POO_ABONAMENT_H
#define POO_ABONAMENT_H
#include<iostream>
#include"../Printare.h"


class abonament : public Printare{
protected:
    float minute_nationale;
    float minute_internationale;
    float trafic_internet;

public:
    abonament(){}
    virtual void printare(std::ostream &os) const override;
    abonament(float minute_nationale, float  minute_internationale, float trafic_internet);
    // Constructor cu parametrii

    void ActualizareMinuteNationale(float minute_nationale);
    void ActualizareMinuteInternationale(float minute_internationale);
    void ActualizareTraficInternet(float trafic_internet);

    float getMinute_Nationale()const;
    float getMinute_Internationale() const;
    float getTrafic_Internet()const;
    //functii care returneaza variabilele private din clasa

    virtual ~abonament();


};


#endif //POO_ABONAMENT_H
