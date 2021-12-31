
#include "../headers/eroare_date.h"
#include "../headers/client.h"
#include "../headers/abonament.h"
#include<string>


eroare_aplicatie::eroare_aplicatie(const std::string &msj)
    : std::runtime_error("Date inorecte: "+ msj){}


eroare_tipuri_date::eroare_tipuri_date()
    :eroare_aplicatie("Tipurile de date sunt diferite\n"){}

eroare_cnp_invalid::eroare_cnp_invalid()
    :eroare_aplicatie("CNP-ul contine alte caractere\n"){}

eroare_cnp_prea_scurt::eroare_cnp_prea_scurt()
    : eroare_aplicatie("CNP-ul nu are lungimea corespunzatoare\n"){}

eroare_abonament::eroare_abonament()
    : eroare_aplicatie("Greseala stabilire abonament \n"){}
