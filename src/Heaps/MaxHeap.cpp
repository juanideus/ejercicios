//
// Created by Usuario on 06-10-2025.
//

#include "MaxHeap.h"

#include <iostream>
#include <queue>

MaxHeap::MaxHeap(){
    this->heap = nullptr;
}

bool MaxHeap::isEmpty(){
    return this->heap == nullptr;
}

bool MaxHeap::isHeap(int* datos)
{
}

void MaxHeap::insert(int*datos, int n)
{
    std::queue<NodoHeap*>subArboles;
    std::queue<NodoHeap*>arbol;
    NodoHeap* aux;
    for (int i=1;i<(n+1)/2;i++){
        aux=new NodoHeap(datos[i]);
        if (2*i<n)aux->setLeft(new NodoHeap(datos[2*i]));
        if (2*i+1<n)aux->setRight(new NodoHeap (datos[2*i+1]));
        subArboles.push(aux);
    }
    std::vector<NodoHeap*> nodos;

    while (!subArboles.empty()) {
        nodos.push_back(subArboles.front());
        subArboles.pop();
    }

    int L = nodos.size();

    // conectar hijos
    for (int i = 0; i < n; i++) {
        int izq = 2*i + 1;
        int der = 2*i + 2;
        if (izq < L) nodos[i]->setLeft(nodos[izq]);
        if (der < L) nodos[i]->setRight(nodos[der]);
    }

    // raíz del árbol completo:
    NodoHeap* raiz = nodos[0];
    inorder(raiz);
    datos[n]=raiz->getDato();
    n=n-1;
    NodoHeap* nodo = raiz->getLeft(),*der=raiz->getRight();




}


void MaxHeap::inorder(NodoHeap* datos){
    if (datos==nullptr){
        return;
    }
    inorder(datos->getLeft());
    std::cout << datos->getDato()<< " ";
    inorder(datos->getRight());
}
