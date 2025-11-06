//
// Created by balta on 06-11-2025.
//

#ifndef EJERCICIOS_GUIAARBOLES_H
#define EJERCICIOS_GUIAARBOLES_H
#include "../Arboles/BST/BST.h"

namespace GuiaArboles {
    template <typename T>
    int contarNodosABBrecursivo(BSTnode<T>* nodo);

    template <typename T>
    void seEncuentraX(BSTnode<T>* nodo, T x);
}

#include "GuiaArboles.tpp"
#endif //EJERCICIOS_GUIAARBOLES_H