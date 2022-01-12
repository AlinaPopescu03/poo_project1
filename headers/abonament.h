#ifndef POO_ABONAMENT_H
#define POO_ABONAMENT_H
#include<iostream>
#include<memory>

class abonament {
protected:
    float minute_nationale;
    float minute_internationale;
    float trafic_internet;
    //friend class abonament_builder;
    virtual void printare(std::ostream &os) const;

public:
    abonament(){}

    void citire(std::istream &in);
    friend std::ostream &operator<<(std::ostream &os, const abonament &ab);
    friend std::istream &operator>>(std::istream &in, abonament &ab);
    virtual std::shared_ptr<abonament> clone()const=0;
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

/*class abonament_builder{
private:
    std::shared_ptr<abonament> a;
public:
    abonament_builder()=default;
    abonament_builder &minute_nationale(int nrMinNat){
        a->minute_nationale=nrMinNat;
        return *this;
    }
    abonament_builder &minute_inaternationale(int nrMinInternat){
        a->minute_internationale=nrMinInternat;
        return *this;
    }
    abonament_builder &trafic_internet(int trafic){
        a->trafic_internet=trafic;
        return *this;
    }
    class abonament build(){
        return std::make_shared<abonament>(a);
    }

};



*/
#endif //POO_ABONAMENT_H