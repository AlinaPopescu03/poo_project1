
#ifndef POO_EROARE_DATE_H
#define POO_EROARE_DATE_H
#include <stdexcept>
#include <iostream>


class eroare_cnp : public std::runtime_error{
public:
    eroare_cnp(const std::string &msj);

};

class cnp_prea_scurt: public eroare_cnp{
  public:
    cnp_prea_scurt();
};

class eroare_abonament: public eroare_cnp{
public:
    eroare_abonament();
};


#endif //POO_EROARE_DATE_H
