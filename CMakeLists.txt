cmake_minimum_required(VERSION 4.0)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios main.cpp
        src/Listas/Nodos/NodoSimple.h
        src/Listas/ListaNexoSimple.h
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
        src/Arboles/BST/BST.tpp
        src/Arboles/BST/BST.h
        src/Arboles/BST/BSTnode.tpp
        src/Arboles/BST/BSTnode.h
        src/Funciones/Ejercicios.cpp
        src/Funciones/Ejercicios.h
        src/Heaps/MaxHeap.cpp
        src/Heaps/MaxHeap.h
        src/Heaps/NodoHeap.cpp
        src/Heaps/NodoHeap.h
        src/Arboles/ThreadedBST/ThreadedNode.tpp
        src/Arboles/ThreadedBST/ThreadedNode.h
        src/Arboles/ThreadedBST/ThreadedBST.tpp
        src/Arboles/ThreadedBST/ThreadedBST.h
        src/Guias/GuiaListasEnlazadas.h
        src/Guias/GuiaComplejidadAlgoritmica.cpp
        src/Guias/GuiaComplejidadAlgoritmica.h
        src/MPP/NodoMPP.cpp
        src/MPP/NodoMPP.h
        src/MPP/MPP.cpp
        src/MPP/MPP.h
        src/Guias/GuiaArboles.tpp
        src/Guias/GuiaArboles.h)
