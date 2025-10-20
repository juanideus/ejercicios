

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
    NodoSimple<T>* nuevoNodo;

    try {
        nuevoNodo = new NodoSimple<T>(dato);
    } catch (...) {
        cerr << "No se puede instanciar el nuevo nodo";
    }

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
    NodoSimple<T>* nuevoNodo;

    try {
        nuevoNodo = new NodoSimple<T>(dato);
    } catch (...) {
        cerr << "No se puede instanciar el nuevo nodo";
    }

    if (this->cabecera == nullptr) {
        this->cabecera == nuevoNodo;
        return;
    }

    nuevoNodo->setSiguiente(this->cabecera);
    this->cabecera = nuevoNodo;
}

template<typename T>
void ListaNexoSimple<T>::imprimirEnOrden() {
    if (this->cabecera == nullptr) {
        cout << "No hay elementos!" << endl;
        return;
    }

    NodoSimple<T>* aux = this->cabecera;

    while (aux != nullptr) {
        cout << aux->getDato() << endl;
        aux = aux->getSiguiente();
    }
}