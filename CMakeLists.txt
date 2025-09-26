cmake_minimum_required(VERSION 4.0)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios main.cpp
        NodoMPP.cpp
        NodoMPP.h
        MPP.cpp
        MPP.h
        Listas/Nodo.cpp
        Listas/Nodo.h
        Listas/ListaSimple.cpp
        Listas/ListaSimple.h
        Polinomios/NodoPoli.cpp
        Polinomios/NodoPoli.h
        Polinomios/ListaPolinomios.cpp
        Polinomios/ListaPolinomios.h)
