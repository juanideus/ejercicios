//
// Created by Usuario on 09-10-2025.
//

#ifndef EJERCICIOS_NODOHEAP_H
#define EJERCICIOS_NODOHEAP_H


class NodoHeap {
    int dato;
    NodoHeap* left;
    NodoHeap* right;
    public:
    NodoHeap();
    NodoHeap(int dato);
    void setLeft(NodoHeap* nodo);
    void setRight(NodoHeap* nodo);
    int getDato();
    NodoHeap* getLeft();
    NodoHeap* getRight();
    void setDato(int dato);



};


#endif //EJERCICIOS_NODOHEAP_H