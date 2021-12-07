cmake_minimum_required(VERSION 3.20)
project(poo)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo main.cpp  sources/factura.cpp  sources/abonament.cpp  sources/client.cpp Printare.cpp Printare.h Citire.cpp Citire.h Abonament_Premiu.cpp Abonament_Premiu.h abonament_angajati.cpp abonament_angajati.h factura_angajati.cpp factura_angajati.h)
