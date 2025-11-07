//
// Created by Usuario on 06-10-2025.
//

#ifndef EJERCICIOS_MAXHEAP_H
#define EJERCICIOS_MAXHEAP_H
#include "NodoHeap.h"


class MaxHeap {
    NodoHeap* heap;
    public:
    MaxHeap();
    bool isEmpty();
    bool isHeap(int* datos);
    void insert(int* datos, int n);
    void inorder(NodoHeap* datos);
};


#endif //EJERCICIOS_MAXHEAP_H