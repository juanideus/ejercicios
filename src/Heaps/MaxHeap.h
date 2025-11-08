//
// Created by Usuario on 06-10-2025.
//

#ifndef EJERCICIOS_MAXHEAP_H
#define EJERCICIOS_MAXHEAP_H
#include "NodoHeap.h"


class MaxHeap {
    NodoHeap* root;
    NodoHeap* crearNodo(int key);
    bool isEmpty();
    public:
    MaxHeap();
    ~MaxHeap();
    void insert(int key[]);
    bool isHeapify();
    void swap(int a[]);









};


#endif //EJERCICIOS_MAXHEAP_H