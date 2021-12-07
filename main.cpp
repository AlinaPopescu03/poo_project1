#include <iostream>
#include<vector>
#include<memory>
#include"headers/abonament.h"
#include"headers/factura.h"
#include"headers/client.h"
//#inlcude<time.h>

int main() {
    ///Abonament set1
    abonament *a1=new abonament{100, 1000, 500};
    abonament a2{150, 700, 501};
    // Verificare getteri si setteri
    a1->ActualizareMinuteNationale(5000);
    std::cout<<a1;
    std::cout<<"------------------------------"<<std::endl;

    ///Abonament set 2
    abonament a3{110, 1200, 400};
    abonament a4{100, 100, 301};


    /// Factura set 1
    /*factura f1{a1, a2};
    std::cout<<f1.getCost_abonament()<<std::endl;
    std::cout<<f1.getCost_Suplimentar()<<std::endl;
    std::cout<<f1.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;*/


    ///Factura set 2
    factura f2{a4, a3};

    /*factura f5=factura(f2);
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<f5.getCost_abonament()<<std::endl;
    std::cout<<f5.getCost_Suplimentar()<<std::endl;
    std::cout<<f5.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;*/

    /*factura f4=f2;
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<f4.getCost_abonament()<<std::endl;
    std::cout<<f4.getCost_Suplimentar()<<std::endl;
    std::cout<<f4.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;*/

    std::cout<<f2.getCost_abonament()<<std::endl;
    std::cout<<f2.getCost_Suplimentar()<<std::endl;
    std::cout<<f2.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;

    ///Set 1 teste
    /*std::shared_ptr<factura> f3=std::make_shared<factura> (f1);
     client c1{ "Moiceanu", "Claudiu", "1234566", 70,f3} ;

    if(c1.getRestanta())
    {std::cout<<"Clientul mai are de achitat? "<<"Da"<<std::endl;
        std::cout<<"Clientul mai are de achitat: "<<c1.getDiferenta()<<std::endl;}
    else
    {std::cout<<"Clientul mai are de achitat? "<<"Nu"<<std::endl;
        std::cout<<"Clientul a platit platit in plus: "<<c1.getDiferenta()<<std::endl;}*/

    ///Set 2 teste
    std::shared_ptr<factura> f3=std::make_shared<factura> (f2);
    client c1{ "Moiceanu", "Claudiu", "1234566", 70,f3} ;

    if(c1.getRestanta())
    {
        std::cout<<"Clientul mai are de achitat? "<<"Da, "<<c1.getDiferenta()<<std::endl;
    }
    else
    {
        std::cout<<"Clientul mai are de achitat? "<<"Nu, a achitat in plus "<<c1.getDiferenta()<<std::endl;
    }
    std::cout<<"------------------------------"<<std::endl;

  


}

