//
// Created by Usuario on 09-10-2025.
//

#include "NodoHeap.h"

NodoHeap::NodoHeap(){
    this->dato = 0;
    this->left = nullptr;
    this->right = nullptr;
}

NodoHeap::NodoHeap(int dato){
    this->dato = dato;
    this->left = nullptr;
    this->right = nullptr;
}

void NodoHeap::setLeft(NodoHeap* nodo){
    this->left = nodo;
}

void NodoHeap::setRight(NodoHeap* nodo){
    this->right = nodo;
}

int NodoHeap::getDato(){
    return this->dato;
}

NodoHeap* NodoHeap::getLeft(){
    return this->left;
}

NodoHeap* NodoHeap::getRight(){
    return this->right;

}

void NodoHeap::setDato(int dato){
    this->dato = dato;
}
