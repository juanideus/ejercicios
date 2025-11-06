//
// Created by balta on 15-10-2025.
//

#include <iostream>
#include <stack>
#include <queue>

#include "../Listas/Nodos/NodoSimple.h"
using namespace std;

// guía ejercicios listas enlazadas
template <typename T>
void GuiaListasEnlazadas::invertirStack(stack<T>* S) {
    queue<T> aux;

    while (!S->empty()) {
        aux.push(S->top()); // referencia 1er elemento
        S->pop(); // remover elemento
    }

    while (!aux.empty()) {
        S->push(aux.front());
        aux.pop();
    }
} // #2

template <typename T>
void GuiaListasEnlazadas::invertirQueue(queue<T>* Q) {
    stack<T> aux;

    while (!Q->empty()) {
        aux.push(Q->front()); // referencia 1er elemento
        Q->pop(); // remover elemento
    }

    while (!aux.empty()) {
        Q->push(aux.top());
        aux.pop();
    }
} // #2

bool GuiaListasEnlazadas::isPalindromo(string str) {
    stack<char> pila;
    queue<char> cola;

    for (int i = 0; i < str.length(); ++i) {
        pila.push(str[i]);
        cola.push(str[i]);
    }

    while (!pila.empty() && !cola.empty()) {
        if (pila.top() != cola.front()){
            return false;
        }

        pila.pop();
        cola.pop();
    }

    return true;
} // #3

void GuiaListasEnlazadas::clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* T, stack<char>* E) {
    while (!M->empty()) {
        switch (M->top()) {
            case 'C':
                C->push(M->top());
                break;
            case 'D':
                D->push(M->top());
                break;
            case 'T':
                T->push(M->top());
                break;
            case 'E':
                E->push(M->top());
                break;
        }
        M->pop();
    }
} // #4

template <typename T>
void GuiaListasEnlazadas::imprimirRecursivoInverso(NodoSimple<T>* nodo) {
    if (!nodo) {
        return;
    }

    imprimirRecursivoInverso(nodo->getSiguiente());

    cout << nodo->getDato() << endl;
} // #5

int GuiaListasEnlazadas::sumarDiagonalPrincipalMPP(MPP *mpp) {
    int sumaDiagonalPrincipal = 0;
    NodoMPP* aux;

    for (int i = 0 ; i < mpp->getFilas() ; i++) {
        aux = mpp->getAROW()[i]->getLeft();

        while (aux != mpp->getAROW()[i]) {
            if (aux ->getCol() == i) {
                break;
            }
            aux = aux->getLeft();
        }

        sumaDiagonalPrincipal += aux->getValue();
    }

    return sumaDiagonalPrincipal;
} // #7.1

void GuiaListasEnlazadas::imprimirPosicionValor100(MPP *mpp) {
    int fila, columna;
    bool romper = false;
    NodoMPP* aux;

    for (int i = 0 ; i < mpp->getFilas() ; i++) {
        aux = mpp->getAROW()[i]->getLeft();

        while (aux != mpp->getAROW()[i]) {
            if (aux->getValue() == 100) {
                fila = aux->getRow();
                columna = aux->getCol();
                romper = true;
                break;
            }
            aux = aux->getLeft();
        }

        if (romper) {
            break;
        }
    }

    cout << "El valor 100 se encuentra en las posiciones: Fila -> " << std::to_string(fila+1) << " | Columna -> " << std::to_string(columna+1) << endl;
} // 7.2

int GuiaListasEnlazadas::multiplicar4esquinas(MPP *mpp) {
    int producto4esquinas = 0;
    NodoMPP* aux = mpp->getAROW()[0]->getLeft();

    while (aux != mpp->getAROW()[0]) {
        if (aux->getCol() == mpp->getColumnas()-1) {
            producto4esquinas = aux->getValue();
        }
        if (aux->getCol() == 0) {
            producto4esquinas *= aux->getValue();
        }
        aux = aux->getLeft();
    }

    aux = mpp->getAROW()[mpp->getFilas()-1]->getLeft();

    while (aux != mpp->getAROW()[mpp->getFilas()-1]) {
        if (aux->getCol() == mpp->getColumnas()-1) {
            producto4esquinas *= aux->getValue();
        }
        if (aux->getCol() == 0) {
            producto4esquinas *= aux->getValue();
        }
        aux = aux->getLeft();
    }

    return producto4esquinas;
} // #7.3

void GuiaListasEnlazadas::eliminar50s(MPP *mpp) {
    NodoMPP* aux;

    for (int i = 0 ; i < mpp->getFilas() ; i++) {
        aux = mpp->getAROW()[i];

        while (aux->getLeft() != mpp->getAROW()[i]) {
            if (aux->getLeft()->getValue() == 50) {
                NodoMPP* nodoAeliminar = aux->getLeft();
                aux->setLeft(nodoAeliminar->getLeft());
                aux = mpp->getACOL()[nodoAeliminar->getCol()];

                while (aux->getUp() != mpp->getACOL()[nodoAeliminar->getCol()]) {
                    if (aux->getUp() == nodoAeliminar) {
                        aux->setUp(nodoAeliminar->getUp());
                        break;
                    }
                }

                delete nodoAeliminar;

                if (aux->getLeft() == mpp->getAROW()[i]) {
                    break;
                }
            }
            aux = aux->getLeft();
        }
    }
}

//...