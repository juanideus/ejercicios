//
// Created by Usuario on 06-10-2025.
//

#include "MaxHeap.h"

#include <iostream>
#include <ostream>
#include <iostream>
using namespace std;
NodoHeap * MaxHeap::crearNodo(int key) {
    try {
       return new NodoHeap(key);
    }
    catch (...) {
        cerr << "Exception thrown" << endl;
    }
    return nullptr;
}

bool MaxHeap::isEmpty() {
    return root == nullptr;
}

MaxHeap::MaxHeap() {
    root = nullptr;
}

void MaxHeap::insert(int *key) {
    root = crearNodo(key[1]);
    NodoHeap *aux = root, *izq = root, *der = root;
    for (int i = 1; i < (10/2)+1; i++) {
        der->setLeft(crearNodo(key[2 * i]));
        der->setRight(crearNodo(key[2 * i + 1]));
        der = der->getRight();
        izq = izq->getLeft();
        i++;
        izq->setLeft(crearNodo(key[2 * i]));
        izq->setRight(crearNodo(key[2 * i + 1]));
    }





}