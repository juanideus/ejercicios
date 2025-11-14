//
// Created by balta on 06-11-2025.
//

#include "GuiaArboles.h"

template<typename T>
int GuiaArboles::contarNodosABBrecursivo(BSTnode<T>* nodo) {
    if (!nodo) return 0;
    // retorna 1(el nodo actual contado porque no es nullptr)
    return 1 + contarNodosABBrecursivo(nodo->getLeft()) + contarNodosABBrecursivo(nodo->getRight());
}

template<typename T>
void GuiaArboles::seEncuentraX(BSTnode<T>* nodo, T x) {
    if (!nodo) {
        return;
    }

    if (nodo->getValue() == x) {
        cout << "El valor " + to_string(x) + " si se encuentra en el arbol";
        return;
    }

    seEncuentraX(nodo->getLeft(), x) + seEncuentraX(nodo->getRight(), x);
}

template<typename T>
int contarHojas(BSTnode<T>* nodo) {
    if (!nodo) return 0;

    if (!nodo->getLeft() && !nodo->getRight()) {
        return 1;
    }

    return contarHojas(nodo->getLeft()) + contarHojas(nodo->getRight());
}
