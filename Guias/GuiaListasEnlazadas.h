//
// Created by balta on 15-10-2025.
//

#ifndef EJERCICIOS_GUIALISTASENLAZADAS_H
#define EJERCICIOS_GUIALISTASENLAZADAS_H

#include <stack>
#include <queue>
#include <iostream>

#include "../Listas/NodoSimple.h"
using namespace std;

namespace GuiaListasEnlazadas {
    template <typename T>
    void invertirStack(stack<T>* S); // #2

    template <typename T>
    void invertirQueue(queue<T>* Q); // #2

    void clasificarPintas(stack<char>* M, stack<char>* C, stack<char>* D, stack<char>* t, stack<char>* E); // #3

    bool isPalindromo(string str); // #4

    int imprimirRecursivamente(NodoSimple<int>* cabecera);

}

#include "GuiaListasEnlazadas.tpp"

#endif //EJERCICIOS_GUIALISTASENLAZADAS_H