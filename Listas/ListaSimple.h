//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_LISTASIMPLE_H
#define EJERCICIOS_LISTASIMPLE_H
#include <string>
using namespace std;
#include "NodoSimple.h"

template <typename T>
class ListaSimple {
    private:
        NodoSimple<T>* cabecera;
    public:
        ListaSimple();
        NodoSimple<T>* getCabecera();
        void setCabecera(NodoSimple<T>* nuevaCabecera);
        void agregar(T dato);
        bool isVacia();
        bool eliminar(T dato);
};



#endif //EJERCICIOS_LISTASIMPLE_H
