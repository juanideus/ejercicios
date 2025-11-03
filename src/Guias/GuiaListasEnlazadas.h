//
// Created by balta on 18-10-2025.
//

#ifndef EJERCICIOS_GUIALISTASENLAZADAS_H
#define EJERCICIOS_GUIALISTASENLAZADAS_H


class GuiaListasEnlazadas {
    public:
        template <typename T>
        static void invertirStack(stack<T>* S);

        template <typename T>
        static void invertirQueue(queue<T>* Q);

        static void clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* t, stack<char>* E);

        static bool isPalindromo(string str);
};

#include "GuiaListasEnlazadas.tpp"
#endif //EJERCICIOS_GUIALISTASENLAZADAS_H