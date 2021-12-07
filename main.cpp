#include <iostream>
#include<vector>
#include<memory>
#include"headers/abonament.h"
#include"headers/factura.h"
#include"headers/client.h"
#include"headers/abonament_angajati.h"
#include"headers/Abonament_Premiu.h"
#include "headers/eroare_date.h"
#include "headers/factura_angajati.h"


int main() {
    /// Set de date tema 1
    /*///Abonament set1
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
    std::cout<<"------------------------------"<<std::endl;



    factura f2{a4, a3};

    /*factura f5=factura(f2);
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<f5.getCost_abonament()<<std::endl;
    std::cout<<f5.getCost_Suplimentar()<<std::endl;
    std::cout<<f5.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;

    /*factura f4=f2;
    std::cout<<"------------------------------"<<std::endl;
    std::cout<<f4.getCost_abonament()<<std::endl;
    std::cout<<f4.getCost_Suplimentar()<<std::endl;
    std::cout<<f4.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;

    std::cout<<f2.getCost_abonament()<<std::endl;
    std::cout<<f2.getCost_Suplimentar()<<std::endl;
    std::cout<<f2.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;


    /*std::shared_ptr<factura> f3=std::make_shared<factura> (f1);
     client c1{ "Moiceanu", "Claudiu", "1234566", 70,f3} ;

    if(c1.getRestanta())
    {std::cout<<"Clientul mai are de achitat? "<<"Da"<<std::endl;
        std::cout<<"Clientul mai are de achitat: "<<c1.getDiferenta()<<std::endl;}
    else
    {std::cout<<"Clientul mai are de achitat? "<<"Nu"<<std::endl;
        std::cout<<"Clientul a platit platit in plus: "<<c1.getDiferenta()<<std::endl;}


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
*/
//////=========================================


    /// Set de date tema 2

    ///Abonament set1 -> eroare stabilire abonament
    /*
    abonament *a1=new abonament{-100, 1000, 500};
    abonament a2{150, 700, 501};

    a1->ActualizareMinuteNationale(5000);
    std::cout<<a1;
    std::cout<<"------------------------------"<<std::endl;

*/

    ///Abonament
    /*
    std::cout << "------------------------------" << std::endl;

    std::shared_ptr<abonament> a3 = std::make_shared<abonament>(100, 1200, 400);
    std::shared_ptr<abonament> a4 = std::make_shared<abonament>(100, 100, 301);

    abonament *a = new Abonament_Premiu(2000, 4488, 89);
    delete a; //Eliberare memorie
    std::cout << "------------------------------" << std::endl;

    Abonament_Premiu a2{4000, 2000, 3000};
    std::cout << "Puncte loialitate " << a2.get_PuncteLoialitate() << std::endl;
}
*/
    ///Factura
    // f1=f2, dar f1 costa mai mult decat f2
    /*std::shared_ptr<abonament> a3 = std::make_shared<abonament>(100, 1200, 400);
    std::shared_ptr<abonament> a4 = std::make_shared<abonament>(100, 100, 301);
    std::shared_ptr<factura> f1=std::make_shared<factura_angajati>(a3, a4);
    std::cout<<f1->getCost_abonament()<<std::endl;
    std::cout<<f1->getCost_Suplimentar()<<std::endl;
    std::cout<<f1->getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;



    factura f2{a3, a4};
    std::cout<<f2.getCost_abonament()<<std::endl;
    std::cout<<f2.getCost_Suplimentar()<<std::endl;
    std::cout<<f2.getCost_total()<<std::endl;
    std::cout<<"------------------------------"<<std::endl;*/


    /// CLIENT
   // Eroare lungime CNP
   // client c1{"Marian", "Preda", "14759402304", 100, f1};


   std::shared_ptr<abonament> a3 = std::make_shared<abonament>(100, 1200, 400);
   std::shared_ptr<abonament> a4 = std::make_shared<abonament>(100, 100, 301);
   std::shared_ptr<factura> f1=std::make_shared<factura_angajati>(a3, a4);

   client c1{"Marian", "Preda", "1234567890123", 100, f1};
   std::cout<<c1.getDiferenta();
   std::cout<<c1.getRestanta();
}






