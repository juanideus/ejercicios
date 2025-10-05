cmake_minimum_required(VERSION 4.0)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios main.cpp
        MPP/NodoMPP.cpp
        MPP/NodoMPP.h
        MPP/MPP.cpp
        MPP/MPP.h
        Listas/Nodo.cpp
        Listas/Nodo.h
        Listas/ListaSimple.cpp
        Listas/ListaSimple.h
        Polinomios/NodoPoli.cpp
        Polinomios/NodoPoli.h
        Polinomios/ListaPolinomios.cpp
        Polinomios/ListaPolinomios.h
        template/NodoSimple.h
        template/NodoSimple.tpp
        template/ListaSimpleTemplate.h
        template/ListaSimpleTemplate.tpp
        template/Persona.cpp
        template/Persona.h)
