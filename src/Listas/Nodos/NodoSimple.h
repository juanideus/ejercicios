//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_NODO_H
#define EJERCICIOS_NODO_H

template <typename T>
class NodoSimple {
    private:
        T dato;
        NodoSimple* nodoSiguiente;
    public:
        NodoSimple();
        NodoSimple(T dato);
        T getDato();
        void setDato(T dato);
        NodoSimple* getSiguiente();
        void setSiguiente(NodoSimple* nodoSiguiente);
};

#include "NodoSimple.cpp"
#endif //EJERCICIOS_NODO_H