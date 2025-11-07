//
// Created by Deus on 05-11-2025.
//

#include "AVL.h"

#include <algorithm>
#include <iostream>

void AVL::RR(NodoAVL* nodo){
}

void AVL::LR(NodoAVL* nodo){


}

void AVL::RL(NodoAVL* nodo){
}

NodoAVL* AVL::LL(NodoAVL* nodo){
    if (nodo == nullptr || nodo->getLeft() == nullptr) {
        std::cout << "❌ LL inválida: nodo o hijo izquierdo nulo" << std::endl;
        return nodo; // no rota
    }

    NodoAVL* newRoot = nodo->getLeft();
    NodoAVL* temp = newRoot->getRight();

    newRoot->setRight(nodo);
    nodo->setLeft(temp);

    // recalcular alturas
    nodo->setAltura(1 + std::max(obtenerAltura(nodo->getLeft()), obtenerAltura(nodo->getRight())));
    newRoot->setAltura(1 + std::max(obtenerAltura(newRoot->getLeft()), obtenerAltura(newRoot->getRight())));

    return newRoot;
    
}


int AVL::obtenerAltura(NodoAVL* nodo){
    if(nodo==nullptr){
        return 0;
    }
    return 1+std::max(obtenerAltura(nodo->getLeft()),obtenerAltura(nodo->getRight()));
}

int AVL::FactorBalance(NodoAVL* nodo){
    if (nodo == nullptr)
    {
        return 0;

    }
    return obtenerAltura(nodo->getLeft()) - obtenerAltura(nodo->getRight());
}

AVL::AVL(){
    this->root=nullptr;
}

void AVL::insertar(int dato){
   this->root=insertar(this->root,dato);



}

NodoAVL* AVL::insertar(NodoAVL* N, int dato)
{
    if (N == nullptr)
        return new NodoAVL(dato);

    if (dato < N->getDato())
        N->setLeft(insertar(N->getLeft(), dato));
    else if (dato > N->getDato())
        N->setRight(insertar(N->getRight(), dato));
    else
        return N; // dato duplicado

    // 🔹 Actualizar altura
    N->setAltura(1 + std::max(obtenerAltura(N->getLeft()), obtenerAltura(N->getRight())));

    // 🔹 Calcular factor de balance
    int fb = FactorBalance(N);

    // 🔹 Casos de rotación
    if (fb > 1 && dato < N->getLeft()->getDato())
        return LL(N); // rotación simple izquierda
    // if (fb < -1 && dato > N->getRight()->getDato())
    //     return RR(N);
    // if (fb > 1 && dato > N->getLeft()->getDato())
    //     return LR(N);
    // if (fb < -1 && dato < N->getRight()->getDato())
    //     return RL(N);

    // 🔹 Si está balanceado, retornar el nodo actual
    return N;
}


void AVL::inorden(NodoAVL* nodo){
    if (nodo==nullptr){return;}
    inorden(nodo->getLeft());
    std::cout << nodo->getDato() << std::endl;
    inorden(nodo->getRight());
}

