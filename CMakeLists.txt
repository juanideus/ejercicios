cmake_minimum_required(VERSION 4.0)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios main.cpp
        MPP/NodoMPP.cpp
        MPP/NodoMPP.h
        MPP/MPP.cpp
        MPP/MPP.h
        Listas/NodoSimple.cpp
        Listas/NodoSimple.h
        Listas/ListaSimple.cpp
        Listas/ListaSimple.h
        Polinomios/NodoPoli.cpp
        Polinomios/NodoPoli.h
        Polinomios/ListaPolinomios.cpp
        Polinomios/ListaPolinomios.h
        Guias/GuiaComplejidadAlgoritmica.cpp
        Guias/GuiaComplejidadAlgoritmica.h
        Guias/GuiaListasEnlazadas.tpp
        Guias/GuiaListasEnlazadas.h)
