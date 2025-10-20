

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

    NodoSimple<T>* nuevoNodo = new NodoSimple<T>*(dato);

    if (this->isVacia()) {
        this->cabecera = nuevoNodo;
        return;
    }

    NodoSimple<T>* aux;

    aux = this->cabecera;

    while (aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }

    aux->setSiguiente(nuevoNodo);
}

template<typename T>
void ListaNexoSimple<T>::agregarAlInicio(T dato) {
    if (dato == nullptr) throw invalid_argument("El elemento a agregar es nulo");

    NodoSimple<T>* nuevoNodo = new NodoSimple<T>*(dato);

    if (this->cabecera == nullptr) {
        this->cabecera == nuevoNodo;
    }

    nuevoNodo->setSiguiente(this->cabecera);
    this->cabecera = nuevoNodo;
}

template<typename T>
void ListaNexoSimple<T>::imprimirEnOrden() {
    if (this->cabecera == nullptr) cout << "No hay elementos!" << endl;

    NodoSimple<T>* aux = this->cabecera;

    while (aux->getSiguiente() != nullptr) {
        cout << aux->getDato() << endl;
        aux = aux->getSiguiente();
    }
}

