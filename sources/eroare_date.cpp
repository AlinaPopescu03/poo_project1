
#include "../headers/eroare_date.h"
#include "../headers/client.h"
#include "../headers/abonament.h"
#include<string>

<<<<<<< HEAD

eroare_aplicatie::eroare_aplicatie(const std::string &msj)
    : std::runtime_error("Date inorecte: "+ msj){}


cnp_prea_scurt::cnp_prea_scurt()
    : eroare_aplicatie("CNP gresit\n"){}

eroare_abonament::eroare_abonament()
    : eroare_aplicatie("Greseala stabilire abonament \n"){}
=======
eroare_cnp::eroare_cnp(const std::string &msj)
    :runtime_error("Date incorect: "+ msj ){std::cout<<std::endl;}

cnp_prea_scurt::cnp_prea_scurt()
    : eroare_cnp("CNP gresit"){}

eroare_abonament::eroare_abonament()
    : eroare_cnp("Greseala stabilire abonament "){std::cout<<std::endl;}
>>>>>>> origin/main
