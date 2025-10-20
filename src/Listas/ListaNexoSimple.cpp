

#include "ListaNexoSimple.h"

#include <iostream>
#include <sstream>
#include <stack>

template<typename T>
ListaNexoSimple<T>::ListaNexoSimple() {
    this->cabecera = nullptr;
}

template<typename T>
void ListaNexoSimple<T>::setCabecera(NodoSimple<T> *nuevaCabecera) {
    this->cabecera = nuevaCabecera;
}

template<typename T>
NodoSimple<T> *ListaNexoSimple<T>::getCabecera() {
    return this->cabecera;
}

template<typename T>
bool ListaNexoSimple<T>::isVacia() {
    return this->cabecera == nullptr;
}


template<typename T>
void ListaNexoSimple<T>::agregarAlFinal(T dato) {
    if (dato == nullptr) throw invalid_argument("El elemento a agregar es nulo");

    NodoSimple<T>* nuevoNodo;

    if (this->isVacia()) {
        nuevoNodo = new NodoSimple<T>*();
        this->cabecera = nuevoNodo;
    }

    NodoSimple<T>* aux;

    aux = this->cabecera;

    while (!aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }

    aux->setSiguiente(nuevoNodo);
    aux = nullptr;
    delete aux;
}

