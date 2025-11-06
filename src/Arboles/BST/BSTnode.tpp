//
// Created by Juani on 05-10-2025.
//

#include "BSTnode.h"

template<typename T>
BSTnode<T>::BSTnode() : value(T()), left(nullptr), right(nullptr){}

template<typename T>
BSTnode<T>::BSTnode(T value) : value(value), left(nullptr), right(nullptr){}

template<typename T>
T BSTnode<T>::getValue() {
    return this->value;
}

template<typename T>
BSTnode<T> * BSTnode<T>::getLeft() {
    return this->left;
}

template<typename T>
BSTnode<T> * BSTnode<T>::getRight() {
    return this->right;
}

template<typename T>
void BSTnode<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
void BSTnode<T>::setLeft(BSTnode *left) {
    this->left = left;
}

template<typename T>
void BSTnode<T>::setRight(BSTnode *right) {
    this->right = right;
}