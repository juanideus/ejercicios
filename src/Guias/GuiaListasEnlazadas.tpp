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
//...