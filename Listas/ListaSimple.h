//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_LISTASIMPLE_H
#define EJERCICIOS_LISTASIMPLE_H
#include <string>
using namespace std;
#include "Nodo.h"


class ListaSimple {
    Nodo* inicio;
    Nodo* recorrer(Nodo* aux);

    Nodo *validarNodo(int dato);
    public:
    ListaSimple();
    ~ListaSimple();
    bool estaVacia();
    bool insertar(int dato);
    string tostring();
    string tostringNormal();

};



#endif //EJERCICIOS_LISTASIMPLE_H
