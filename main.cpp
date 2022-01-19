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
#include"headers/abonament_aniversar.h"
#include"headers/data_naster.h"
#include"headers//abonament_standard.h"


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


    //abonament_builder abBuild;
    //abonament abonament2=abBuild.minute_nationale(100).minute_inaternationale(200).trafic_internet(1000).build();

    std::shared_ptr<abonament_angajati> a3 = std::make_shared<abonament_angajati>(100, 1200, 400);
    std::shared_ptr<abonament_angajati> a4 = std::make_shared<abonament_angajati>(100, 100, 301);

    std::shared_ptr<abonament> a = std::make_shared< abonament_angajati>(2000, 4488, 89);
    std::cout<<a;

   std::shared_ptr<factura_angajati> f1=std::make_shared<factura_angajati>(2, 1, 200, a3, a4);
   std::shared_ptr<factura> f2=std::make_shared<factura>( a3, a4);
   f2->setPret();
   //std::shared_ptr<client> client{};


    Abonament_Premiu a2{"gold",4000, 2000, 3000};
    std::cout << "Puncte loialitate " << a2.get_PuncteLoialitate() << std::endl;


    std::cout<<"==============================\n";
    //Pentru template
    abonament_aniversar<std::string> abonament_anv {1000, 1000,  "Smatrphone", "2000",10000, 2 , 37};
    abonament_anv.setRata();
    std::cout<<abonament_anv.getRata()<<"\n";
    abonament_anv.setPret();
    std::cout<<abonament_anv.getPret()<<"\n";
    abonament_anv.detaliiAbonament();
    std::cout<<"===============================\n";
        //Client eroare CNP
        try{
            std::shared_ptr<client> c1=std::make_shared<client>("Marian", "Preda", "14759402304", 100, f1);
            std::cout << c1 << "\n";
            std::cout << c1->getDiferenta();
            std::cout << c1->getRestanta();
        }catch (eroare_tipuri_date &err1) {
            std::cout << err1.what() << "\n";
        }
    }



