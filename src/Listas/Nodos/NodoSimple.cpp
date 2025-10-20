//
// Created by Usuario on 25-09-2025.
//

#include "NodoSimple.h"

template<typename T>
NodoSimple<T>::NodoSimple() {
    this->dato == nullptr;
    this->nodoSiguiente = nullptr;
}

template<typename T>
NodoSimple<T>::NodoSimple(T dato) {
    this->dato = dato;
    this->nodoSiguiente = nullptr;
}

template<typename T>
void NodoSimple<T>::setDato(T dato) {
    this->dato = dato;
}

template<typename T>
T NodoSimple<T>::getDato() {
    return this->dato;
}

template<typename T>
void NodoSimple<T>::setSiguiente(NodoSimple *nodoSiguiente) {
    this->nodoSiguiente = nodoSiguiente;
}

template<typename T>
NodoSimple<T> *NodoSimple<T>::getSiguiente() {
    return this->nodoSiguiente;
}
