//
// Created by balta on 15-10-2025.
//

#include <iostream>
#include <stack>
#include <queue>

#include "../Listas/NodoSimple.h"
using namespace std;
#include "GuiaListasEnlazadas.h"

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

    while (!S->empty()) {
        cout << S->top() << endl;
        S->pop();
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

    while (!Q->empty()) {
        cout << Q->front() << " ";
        Q->pop();
    }
} // #2

void GuiaListasEnlazadas::clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* t, stack<char>* E) {
    while (!M->empty()) {
        if (M->top() == 'C') {
            C->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 'D') {
            D->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 't') {
            t->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 'E') {
            E->push(M->top());
            M->pop();
        }
    }
} // #3

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

int imprimirRecursivamente(NodoSimple<int>* cabecera) {
    if (cabecera->getSiguiente() == nullptr) return cabecera->getDato();

    return imprimirRecursivamente(cabecera->getSiguiente());
} // #4
//...