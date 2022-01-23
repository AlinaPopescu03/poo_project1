//
// Created by Alina on 01/11/2022.
//

#ifndef POO_FACTURA_STANDAR_H
#define POO_FACTURA_STANDAR_H
#include<memory>
#include"factura_baza.h"
#include"abonament_standard.h"

class factura_standar : public factura_baza{
    std::shared_ptr<abonament_standard> abStandard;
public:
    void setPret();
    factura_standar();
    virtual ~factura_standar();


};


#endif //POO_FACTURA_STANDAR_H
