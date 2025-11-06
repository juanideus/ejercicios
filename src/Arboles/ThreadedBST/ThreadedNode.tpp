
#include "ThreadedNode.h"

template<typename T>
ThreadedNode<T>::ThreadedNode() : value(T()), leftChild(nullptr), rightChild(nullptr), leftTread(true), rightTread(true){
}

template<typename T>
ThreadedNode<T>::ThreadedNode(T value) : value(value), leftChild(nullptr), rightChild(nullptr), leftTread(true), rightTread(true){}

template<typename T>
T ThreadedNode<T>::getValue() {
    return this->value;
}

template<typename T>
ThreadedNode<T> * ThreadedNode<T>::getLeftChild() {
    return this->leftChild;
}

template<typename T>
ThreadedNode<T> * ThreadedNode<T>::getRightChild() {
    return this->rightChild;
}

template<typename T>
bool ThreadedNode<T>::isLeftTread() {
    return this->leftTread;
}

template<typename T>
bool ThreadedNode<T>::isRightTread() {
    return this->rightTread;
}

template<typename T>
void ThreadedNode<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
void ThreadedNode<T>::setLeftChild(ThreadedNode *leftChild) {
    this->leftChild = leftChild;
}

template<typename T>
void ThreadedNode<T>::setRightChild(ThreadedNode *rightChild) {
    this->rightChild = rightChild;
}

template<typename T>
void ThreadedNode<T>::setLeftTread(bool isLeftTread) {
    this->leftTread = isLeftTread;
}

template<typename T>
void ThreadedNode<T>::setRightTread(bool isRightTread) {
    this->rightTread = isRightTread;
}
