//
// Created by Juani on 05-10-2025.
//

#include "NodoABB.h"

NodoABB::NodoABB() {
    this->DATO = 0;
    this->LEFT = nullptr;
    this->RIGHT = nullptr;
}

NodoABB::NodoABB(int dato) {
    this->DATO = dato;
    this->LEFT = nullptr;
    this->RIGHT = nullptr;
}

NodoABB::~NodoABB()=default;




int NodoABB::getDato() const {
    return this->DATO;
}

void NodoABB::setDato(int dato) {
    this->DATO = dato;
}

NodoABB * NodoABB::getLeft() const {
    return this->LEFT;
}

NodoABB * NodoABB::getRight() const {
    return this->RIGHT;
}

void NodoABB::setLeft(NodoABB *left) {
    this->LEFT = left;
}

void NodoABB::setRight(NodoABB *right) {
    this->RIGHT = right;
}
