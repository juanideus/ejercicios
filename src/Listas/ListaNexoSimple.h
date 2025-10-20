//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_LISTASIMPLE_H
#define EJERCICIOS_LISTASIMPLE_H

#include <iostream>
using namespace std;
#include "Nodos/NodoSimple.h"

template <typename T>
class ListaNexoSimple {
    private:
        NodoSimple<T>* cabecera;
    public:
        ListaNexoSimple();
        NodoSimple<T>* getCabecera();
        void setCabecera(NodoSimple<T>* nuevaCabecera);
        bool isVacia();
        void agregarAlFinal(T dato);
        void agregarAlInicio(T dato);
        void imprimirEnOrden();
};

#include "ListaNexoSimple.cpp"
#endif //EJERCICIOS_LISTASIMPLE_H