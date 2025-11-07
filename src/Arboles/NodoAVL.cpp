//
// Created by Deus on 05-11-2025.
//

#include "NodoAVL.h"

#include <tuple>


NodoAVL::NodoAVL(){
    this->dato=-1;
    this->altura=-1;
    this->LEFT=nullptr;
    this->RIGHT=nullptr;
}

NodoAVL::NodoAVL(int dato){
    this->dato=dato;
    this->altura=1;
    this->LEFT=nullptr;
    this->RIGHT=nullptr;
}

NodoAVL* NodoAVL::getLeft(){
    return this->LEFT;
}

NodoAVL* NodoAVL::getRight(){
    return this->RIGHT;
}

int NodoAVL::getAltura(){
    return this->altura;
}

void NodoAVL::setAltura(int altura){
    this->altura=altura;
}

void NodoAVL::setLeft(NodoAVL* nodo){
    this->LEFT=nodo;
}

void NodoAVL::setRight(NodoAVL* nodo){
    this->RIGHT=nodo;
}

int NodoAVL::getDato(){
    return this->dato;
}
