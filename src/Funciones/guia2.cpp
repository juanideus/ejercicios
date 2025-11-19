//
// Created by Deus on 18-11-2025.
//

#include "guia2.h"

int guia2::contarNodos(NodoABB*root) {
    if (root==nullptr)return 0;
    return 1+contarNodos(root->getLeft())+contarNodos(root->getRight());
}

bool guia2::indicarX(NodoABB*N, int x) {
    if (N==nullptr)return false;
    if (N->getDato()==x)return true;

    if (N->getDato()>x)return indicarX(N->getLeft(),x);
    if (N->getDato()<x)return indicarX(N->getRight(),x);

}

int guia2::contarHojas(NodoABB*N) {
   if (N->getLeft()==nullptr || N->getRight()==nullptr)return 1;
    return contarHojas(N->getLeft())+contarHojas(N->getRight());
}

void guia2::deleteAbb(NodoABB *N) {
    if (N==nullptr)return;
    deleteAbb(N->getLeft());
    deleteAbb(N->getRight());
    delete N;

}
