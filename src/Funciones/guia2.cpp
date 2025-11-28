//
// Created by Deus on 18-11-2025.
//

#include "guia2.h"

#include <iostream>
#include <ostream>
#include <queue>

NodoHeap * guia2::padreSucesor(NodoHeap *N) {


        if (N == nullptr) return nullptr;
        if (N->getLeft() == nullptr && N->getRight() == nullptr)
            return nullptr; // solo raíz, no hay padre del último

        queue<NodoHeap*> q;
        q.push(N);

        NodoHeap* padre = nullptr;

        while (!q.empty()) {
            NodoHeap* actual = q.front();
            q.pop();

            // Si tiene hijo izquierdo, ese es hijo → actual es su padre
            if (actual->getLeft()) {
                padre = actual;
                q.push(actual->getLeft());
            }

            // Si tiene hijo derecho, ese es hijo → actual es su padre
            if (actual->getRight()) {
                padre = actual;
                q.push(actual->getRight());
            }
        }

        return padre; // el último padre visitado es el padre del último nodo
    }

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

int guia2::susecorPreOrden(NodoABB *N,ABB*A) {



}

bool guia2::eliminarHeap(NodoHeap *&N) {
    NodoHeap *NE = N;
    NodoHeap *subArbolIzq = N->getLeft();
    NodoHeap *subArbolDer = N->getRight();
    //BUSCAR EL ULTIMO NODO INSERTADO
    NodoHeap *padre = padreSucesor(N);
    NodoHeap *sucesor;
    if (padre == nullptr) {
        delete N;
        return true;
    }
    if (padre->getRight()) {
        sucesor = padre->getRight();
        padre->setRight(nullptr);
    } else {
        sucesor = padre->getLeft();
        padre->setLeft(nullptr);
    }

    sucesor->setLeft(subArbolIzq);
    sucesor->setRight(subArbolDer);
    delete NE;
    N = sucesor;
    return true;
}

bool guia2::eliminarHeap(NodoHeap *&N, NodoHeap *hijo) {
    NodoHeap *NE = N;
    NodoHeap *subArbolIzq = N->getLeft();
    NodoHeap *subArbolDer = N->getRight();
    //BUSCAR EL ULTIMO NODO INSERTADO
    NodoHeap *padre = buscarPadre(N,hijo);
    NodoHeap *sucesor;
    if (padre == nullptr) {
        delete N;
        N=nullptr;
        return true;
    }
    if (padre->getRight()) {
        sucesor = padre->getRight();
        padre->setRight(nullptr);
    } else {
        sucesor = padre->getLeft();
        padre->setLeft(nullptr);
    }

    sucesor->setLeft(subArbolIzq);
    sucesor->setRight(subArbolDer);
    delete NE;
    N = sucesor;
    return true;
}

void guia2::inorden(NodoABB *N,int x) {
    if (N==nullptr)return;
    inorden(N->getLeft(), x);
    // if (N->getDato()<x) {
    cout<<N->getDato()<<endl;
//}
    inorden(N->getRight(), x);
}


NodoHeap *guia2::buscarPadre(NodoHeap *N, NodoHeap *hijo) {
    queue<NodoHeap *> q;
    q.push(N);
    while (!q.empty()) {
        NodoHeap *actual = q.front();
        q.pop();
        if (actual->getLeft() == hijo || actual->getRight() == hijo)return actual;

        if (actual->getLeft())q.push(actual->getLeft());

        if (actual->getRight())q.push(actual->getRight());
    }
    return nullptr;

}

void guia2::imprimirMayoresX(NodoABB *N, int x) {
    NodoABB *aux=N;
        if (N==nullptr)return;
        if (aux->getDato()>x) {

            imprimirMayoresX(N->getLeft(), x);

            imprimirMayoresX(N->getRight(), x);
            cout<<aux->getDato()<<endl  ;
        }else {
            imprimirMayoresX(N->getRight(), x);
        }
    }





