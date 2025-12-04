//
// Created by Deus on 05-11-2025.
//

#include "AVL.h"

#include <algorithm>
#include <iostream>

NodoAVL *AVL::RR(NodoAVL *nodo){
    NodoAVL* newRoot = nodo->getRight();
    NodoAVL* temp = newRoot->getLeft();

    newRoot->setLeft(nodo);
    nodo->setRight(temp);

    return newRoot;
}
//TODO
NodoAVL *AVL::LR(NodoAVL *nodo){
    NodoAVL*aux=nodo->getLeft();
    NodoAVL* temp=aux->getRight()->getLeft();
    nodo->setLeft(aux->getRight());
    aux->getRight()->setLeft(aux);
    aux->setRight(temp);
    return LL(nodo);

}

NodoAVL *AVL::RL(NodoAVL *nodo){
    NodoAVL* aux=nodo->getRight();
    NodoAVL* temp=aux->getLeft()->getRight();
    nodo->setRight(temp->getLeft());
    aux->setLeft(temp->getRight());
    aux->setLeft(temp);
    return RR(nodo);


}

NodoAVL* AVL::LL(NodoAVL* nodo){

    NodoAVL* newRoot = nodo->getLeft();
    NodoAVL* temp = newRoot->getRight();

    newRoot->setRight(nodo);
    nodo->setLeft(temp);

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
    if (N == nullptr) return new NodoAVL(dato);

    if (dato < N->getDato()) N->setLeft(insertar(N->getLeft(), dato));

    else if (dato > N->getDato()) N->setRight(insertar(N->getRight(), dato));

    else
        return N; // dato duplicado

    // 🔹 Actualizar altura
    N->setAltura(1 + std::max(obtenerAltura(N->getLeft()), obtenerAltura(N->getRight())));

    // 🔹 Calcular factor de balance
    int fb = FactorBalance(N);

    // 🔹 Casos de rotación
    if (fb > 1 && dato < N->getLeft()->getDato())        // Caso LL
        return LL(N);

    if (fb < -1 && dato > N->getRight()->getDato())      // Caso RR
        return RR(N);

    if (fb > 1 && dato > N->getLeft()->getDato())        // Caso LR
        return LR(N);

    if (fb < -1 && dato < N->getRight()->getDato())      // Caso RL
        return RL(N);

    return N;
}


void AVL::inorden(NodoAVL* nodo){
    if (nodo==nullptr){return;}
    inorden(nodo->getLeft());
    std::cout << nodo->getDato() << std::endl;
    inorden(nodo->getRight());
}

