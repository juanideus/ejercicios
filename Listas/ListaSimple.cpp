

#include "ListaSimple.h"

#include <sstream>
#include <stack>

template<typename T>
ListaSimple<T>::ListaSimple() {
    this->cabecera = nullptr;
}

template<typename T>
NodoSimple<T> *ListaSimple<T>::getCabecera() {
    return this->cabecera;
}

template<typename T>
void ListaSimple<T>::setCabecera(NodoSimple<T> *nuevaCabecera) {
    this->cabecera->setSiguiente(this->cabecera);
    this->cabecera = nuevaCabecera;
}

template<typename T>
bool ListaSimple<T>::isVacia() {
    return this->cabecera == nullptr;
}

template<typename T>
void ListaSimple<T>::agregar(T dato) {
    NodoSimple<T>* nuevoNodo = new NodoSimple<T>*(dato);

    if (this->isVacia()) {
        this->cabecera = nuevoNodo;
        return;
    }

    NodoSimple<T>* aux = this->cabecera;

    while (aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }

    aux->setSiguiente(nuevoNodo);
    delete aux;
}

template<typename T>
bool ListaSimple<T>::eliminar(T dato) {
    if (this->isVacia()) {
        return false;
    }

    NodoSimple<T>* aux;

    if (this->cabecera->getDato() == dato) {
        aux = this->cabecera;
        this->cabecera = this->cabecera->getSiguiente();
        delete aux;
        return true;
    }

    aux = this->cabecera;

    while (aux->getSiguiente() != nullptr) {
        if (aux->getSiguiente()->getDato() == dato) {

            aux.
        }

        aux = aux->getSiguiente();
    }

    delete aux;
}



