

#include "NodoEn.h"

NodoEn::NodoEn() {
    this->dato=0;
    this->leftChild=nullptr;
    this->rightChild=nullptr;
    this->leftThread=true;
    this->rightThread=true;

}

NodoEn::NodoEn(int dato) {
    this->dato=dato;
    this->leftChild=nullptr;
    this->rightChild=nullptr;
    this->leftThread=true;
    this->rightThread=true;
}

void NodoEn::setDato(int dato) {
    this->dato=dato;
}

int NodoEn::getDato() {
    return this->dato;
}

void NodoEn::setLeftThread(bool leftThread) {
    this->leftThread=leftThread;
}

bool NodoEn::getLeftThread() {
    return this->leftThread;
}

void NodoEn::setRightThread(bool rightThread) {
    this->rightThread=rightThread;
}

bool NodoEn::getRightThread() {
    return this->rightThread;
}

NodoEn * NodoEn::getLeftChild() {
    return this->leftChild;
}

NodoEn * NodoEn::getRightChild() {
    return this->rightChild;
}

void NodoEn::setLeftChild(NodoEn *leftChild) {
    this->leftChild=leftChild;
}

void NodoEn::setRightChild(NodoEn *rightChild) {
    this->rightChild=rightChild;
}

