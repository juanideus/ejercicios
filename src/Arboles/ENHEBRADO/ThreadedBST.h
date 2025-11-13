#pragma once

#include <string>
using namespace std;
#include "NodoEn.h"


class ThreadedBST {

    NodoEn *leftMost(NodoEn*);
    public:
    NodoEn *root;
    ThreadedBST();
    ~ThreadedBST();

    NodoEn *sucesorInorden(NodoEn *nodo);

    NodoEn *predecesorInorden(NodoEn *nodo);

    void insertar(int dato);
    void eliminar(int dato);

    string toStringInOrder();
    void InorderRecursivo(NodoEn* nodo);
    void imprimir();
};

