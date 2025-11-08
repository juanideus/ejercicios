
#include "NodoHeap.h"

NodoHeap::NodoHeap(int data) {
    this->dato = data;
    this->left = nullptr;
    this->right = nullptr;

}

void NodoHeap::setData(int data) {
    this->dato = data;
}

int NodoHeap::getData() {
    return this->dato;
}
NodoHeap* NodoHeap::getLeft() {
    return this->left;
}
NodoHeap* NodoHeap::getRight() {
    return this->right;
}
void NodoHeap::setLeft(NodoHeap* n) {
    this->left = n;
}
void NodoHeap::setRight(NodoHeap* n) {
    this->right = n;

}


