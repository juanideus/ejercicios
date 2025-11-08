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
    ~NodoHeap();
    NodoHeap(int data);
    void setData(int data);
    int getData();
    void setLeft(NodoHeap* left);
    NodoHeap* getLeft();
    void setRight(NodoHeap* right);
    NodoHeap* getRight();











};


#endif //EJERCICIOS_NODOHEAP_H