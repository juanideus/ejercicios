//
// Created by balta on 18-10-2025.
//

#ifndef EJERCICIOS_GUIALISTASENLAZADAS_H
#define EJERCICIOS_GUIALISTASENLAZADAS_H


class GuiaListasEnlazadas {
    template <typename T>
    void invertirStack(stack<T>* S);

    template <typename T>
    void invertirQueue(queue<T>* Q);

    void clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* t, stack<char>* E);

    bool isPalindromo(string str);
};


#endif //EJERCICIOS_GUIALISTASENLAZADAS_H