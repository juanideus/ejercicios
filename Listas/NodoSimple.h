//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_NODO_H
#define EJERCICIOS_NODO_H

template <typename T>
class NodoSimple {
    public:
        NodoSimple();
        NodoSimple(T dato);
        ~NodoSimple();
        T getDato();
        void setDato(T dato);
        NodoSimple* getSiguiente();
        void setSiguiente(NodoSimple* nodoSiguiente);
    private:
        T dato;
        NodoSimple* siguiente;
};


#endif //EJERCICIOS_NODO_H