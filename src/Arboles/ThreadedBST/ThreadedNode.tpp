
#include "ThreadedNode.h"

template<typename T>
ThreadedNode<T>::ThreadedNode() : value(T()), leftChild(nullptr), rightChild(nullptr), leftThread(true), rightThread(true){
}

template<typename T>
ThreadedNode<T>::ThreadedNode(T value) : value(value), leftChild(nullptr), rightChild(nullptr), leftThread(true), rightThread(true){}

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
bool ThreadedNode<T>::isLeftThread() {
    return this->leftThread;
}

template<typename T>
bool ThreadedNode<T>::isRightThread() {
    return this->rightThread;
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
void ThreadedNode<T>::setLeftThread(bool isLeftTread) {
    this->leftThread = isLeftTread;
}

template<typename T>
void ThreadedNode<T>::setRightThread(bool isRightTread) {
    this->rightThread = isRightTread;
}
