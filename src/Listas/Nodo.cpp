//
// Created by Usuario on 25-09-2025.
//

#include "Nodo.h"

Nodo::Nodo() {
    this->dato = 0;
    this->proximo = nullptr;
}

Nodo::Nodo(int dato) {
    this->dato = dato;
    this->proximo = nullptr;
}

int Nodo::getDato() {
    return this->dato;
}

void Nodo::setDato(int dato) {
    this->dato = dato;
}

Nodo * Nodo::getProximo() {
    return this->proximo;
}

void Nodo::setProximo(Nodo *proximo) {
    this->proximo = proximo;
}
