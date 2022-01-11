#ifndef POO_ABONAMENT_H
#define POO_ABONAMENT_H
#include<iostream>
#include<memory>

class abonament {
protected:
    float minute_nationale;
    float minute_internationale;
    float trafic_internet;

    virtual void printare(std::ostream &os) const;

public:
    abonament(){}
    void citire(std::istream &in);
    friend std::ostream &operator<<(std::ostream &os, const abonament &ab);
    friend std::istream &operator>>(std::istream &in, abonament &ab);
    //virtual std::shared_ptr<abonament> clone() const=0;
    abonament(float minute_nationale, float  minute_internationale, float trafic_internet);
    // Constructor cu parametrii

    void ActualizareMinuteNationale(float minute_nationale);
    void ActualizareMinuteInternationale(float minute_internationale);
    void ActualizareTraficInternet(float trafic_internet);


    float getMinute_Nationale()const;
    float getMinute_Internationale() const;
    float getTrafic_Internet()const;
    //functii care returneaza variabilele private din clasa

    virtual ~abonament()=default;


};


#endif //POO_ABONAMENT_H
