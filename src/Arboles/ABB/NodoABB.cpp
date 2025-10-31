//
// Created by Juani on 05-10-2025.
//

#include "NodoABB.h"

template<typename T>
NodoABB<T>::NodoABB() : value(nullptr), left(nullptr), right(nullptr){}

template<typename T>
NodoABB<T>::NodoABB(T *value) : value(value), left(nullptr), right(nullptr){}

template<typename T>
T * NodoABB<T>::getValue() {
    return this->value;
}

template<typename T>
NodoABB<T> * NodoABB<T>::getLeft() {
    return this->left;
}

template<typename T>
NodoABB<T> * NodoABB<T>::getRight() {
    return this->right;
}

template<typename T>
void NodoABB<T>::setValue(T *value) {
    this->value = value;
}

template<typename T>
void NodoABB<T>::setLeft(NodoABB *left) {
    this->left = left;
}

template<typename T>
void NodoABB<T>::setRight(NodoABB *right) {
    this->right = right;
}

template<typename T>
NodoABB<T>::~NodoABB() {
}
