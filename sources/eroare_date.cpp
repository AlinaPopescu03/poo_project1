
#include "../headers/eroare_date.h"
#include "../headers/client.h"
#include "../headers/abonament.h"
#include<string>


eroare_aplicatie::eroare_aplicatie(const std::string &msj)
    : std::runtime_error("Date inorecte: "+ msj){}


cnp_prea_scurt::cnp_prea_scurt()
    : eroare_aplicatie("CNP gresit\n"){}

eroare_abonament::eroare_abonament()
    : eroare_aplicatie("Greseala stabilire abonament \n"){}

