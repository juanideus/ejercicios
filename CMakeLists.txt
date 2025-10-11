cmake_minimum_required(VERSION 4.0)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios main.cpp
        src/MPP/NodoMPP.cpp
        src/MPP/NodoMPP.h
        src/MPP/MPP.cpp
        src/MPP/MPP.h
        src/Listas/Nodo.cpp
        src/Listas/Nodo.h
        src/Listas/ListaSimple.cpp
        src/Listas/ListaSimple.h
        src/Polinomios/NodoPoli.cpp
        src/Polinomios/NodoPoli.h
        src/Polinomios/ListaPolinomios.cpp
        src/Polinomios/ListaPolinomios.h
        src/template/NodoSimple.h
        src/template/NodoSimple.tpp
        src/template/ListaSimpleTemplate.h
        src/template/ListaSimpleTemplate.tpp
        src/template/Persona.cpp
        src/template/Persona.h
        src/Arboles/ABB/ABB.cpp
        src/Arboles/ABB/ABB.h
        src/Arboles/ABB/NodoABB.cpp
        src/Arboles/ABB/NodoABB.h
        src/Funciones/Ejercicios.cpp
        src/Funciones/Ejercicios.h
        src/Heaps/MaxHeap.cpp
        src/Heaps/MaxHeap.h
        src/Heaps/NodoHeap.cpp
        src/Heaps/NodoHeap.h
        src/Arboles/ENHEBRADO/nodoEn.cpp
        src/Arboles/ENHEBRADO/nodoEn.h
        src/Arboles/ENHEBRADO/ThreadedBST.cpp
        src/Arboles/ENHEBRADO/ThreadedBST.h)
