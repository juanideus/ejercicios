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

void guia2::ejercicio1(ListaPolinomios **lista, int x) {

    ListaPolinomios*p = nullptr;
    ListaPolinomios*aux;
    int idx=0;
    int contador=0;
    p=lista[idx];
    while (lista[idx]!=nullptr) {

        NodoPoli*i=p->getInicio();
        while (i!=nullptr) {
            if (i->getExp()==x) {
                contador++;
            }
            i=i->getSig();
        }
        idx++;
        p=lista[idx];
    }
    cout<<"La cantidad de veces que se esncuentra x es"<<contador;





}

void guia2::ejercicio2(NodoABB *P, NodoABB *raiz) {
        if (raiz==nullptr)return;
        if (P->getRight()!=nullptr) {
            NodoABB*aux=P->getRight();
            while (aux->getLeft()!=nullptr) {
                aux=aux->getLeft();
            }
            cout<<aux->getDato()<<endl;
            return;
        }
        else {
            NodoABB* antecesor = nullptr;
            NodoABB* actual = raiz;

            while (actual != nullptr) {
                if (P->getDato() < actual->getDato()) {
                    // P está en el SUBÁRBOL IZQUIERDO de actual
                    // ENTONCES este "actual" ES un ANTECESOR válido
                    antecesor = actual;
                    actual = actual->getLeft();
                }
                else if (P->getDato() > actual->getDato()) {
                    actual = actual->getRight();
                }
                else break; // encontrado el nodo
            }
            cout << antecesor->getDato();

        }
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





