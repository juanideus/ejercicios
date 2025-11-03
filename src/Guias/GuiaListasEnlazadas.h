//
// Created by balta on 18-10-2025.
//

#ifndef EJERCICIOS_GUIALISTASENLAZADAS_H
#define EJERCICIOS_GUIALISTASENLAZADAS_H

namespace GuiaListasEnlazadas {
        template <typename T>
        void invertirStack(stack<T>* S);

        template <typename T>
        void invertirQueue(queue<T>* Q);

        void clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* t, stack<char>* E);

        bool isPalindromo(string str);

        template <typename T>
        void imprimirRecursivoInverso(NodoSimple<T>* nodo);

        int sumarDiagonalPrincipalMPP(MPP* mpp);

        void imprimirPosicionValor100(MPP* mpp);

        int multiplicar4esquinas(MPP* mpp);

        void eliminar50s(MPP* mpp);
}

#include "GuiaListasEnlazadas.tpp"
#endif //EJERCICIOS_GUIALISTASENLAZADAS_H