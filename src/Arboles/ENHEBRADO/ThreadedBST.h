#pragma once

#include <string>
using namespace std;
#include "NodoEn.h"


class ThreadedBST {
    NodoEn *root;
    public:
    ThreadedBST();
    ~ThreadedBST();

    NodoEn *sucesorInorden(NodoEn *nodo);

    NodoEn *predecesorInorden(NodoEn *nodo);

    void insertar(int dato);
    void eliminar(int dato);

    string toStringInOrder();
};

