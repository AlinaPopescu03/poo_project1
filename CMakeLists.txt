cmake_minimum_required(VERSION 3.20)
project(poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo main.cpp  sources/factura.cpp  sources/abonament.cpp  sources/client.cpp sources/Abonament_Premiu.cpp headers/Abonament_Premiu.h sources/abonament_angajati.cpp headers/abonament_angajati.h sources/factura_angajati.cpp headers/factura_angajati.h sources/eroare_date.cpp headers/eroare_date.h sources/abonament_aniversar.cpp headers/abonament_aniversar.h sources/data_naster.cpp headers/data_naster.h)
