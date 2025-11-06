
#include "ThreadedBST.h"
#include <iostream>

#include "../BST/BSTnode.h"
using namespace std;

template<typename T>
ThreadedBST<T>::ThreadedBST() {
    this->dummyRoot = new ThreadedNode<T>();
    this->dummyRoot->setLeftChild(this->dummyRoot); // la raíz se apunta a si misma por la izq(solo la hebra izq de la raiz es true)
    this->dummyRoot->setRightChild(this->dummyRoot); // la raíz se apunta a si  misma por la der
    this->dummyRoot->setRightTread(false); // la hebra pasa a ser hijo porque ahora apunta a un nodo(la misma raíz)
}

template<typename T>
ThreadedNode<T> *ThreadedBST<T>::getDummyRoot() {
    return this->dummyRoot;
}

template<typename T>
ThreadedBST<T>::~ThreadedBST() {

}

template<typename T>
bool ThreadedBST<T>::isEmpty() {
    // se valida la hebra izq porque por ese lado se insertar los nodos
    // si es hebra(true) no se ha insertado ningun nodo(la raiz se apunta a si misma)
    return this->dummyRoot->isLeftThread();
}

template<typename T>
void ThreadedBST<T>::insert(T value) {
    ThreadedNode<T>* newNode;

    try {
        newNode = new ThreadedNode<T>(value);
    } catch (...) {
        cerr << "No se pudo instanciar el nodo..." << endl;
    }

    if (this->isEmpty()) {
        // se ingresa la cabecera por la izq de la raiz
        this->dummyRoot->setLeftChild(newNode);
        this->dummyRoot->setLeftThread(false);
        // la cabecera tiene solo un predecesor al que apuntar(la raiz)
        newNode->setLeftChild(this->dummyRoot);
        newNode->setRightChild(this->dummyRoot);
        return;
    }

    ThreadedNode<T>* current = this->dummyRoot->getLeftChild();

    while (true) {
        // lado izq del nodo/subarbol
        if (value < current->getValue()) {
            // si el puntero izq es hebra(apunta de vuelta a la raiz)
            if (current->isLeftThread()) {
                current->setLeftChild(newNode);
                // ahora newNode es hijo de current
                current->setLeftThread(false);
                // newNode al ser el ultimo nodo izq apunta de vuelta a la raiz
                newNode->setLeftChild(this->dummyRoot);
                // newNode por la der apunta de vuelta a su predecesor(current)
                newNode->setRightChild(current);
                return;
            } else {
                current = current->getLeftChild();
                continue;
            }
        }
        // lado der del nodo/subarbol
        // logica invertida
        if (value > current->getValue()) {
            // si el puntero der es hebra(apunta de vuelta a la raiz)
            if (current->isRightThread()) {
                current->setRightChild(newNode);
                // ahora newNode es hijo de current
                current->setRightThread(false);
                // newNode al ser el ultimo nodo der apunta de vuelta a la raiz
                newNode->setRightChild(this->dummyRoot);
                //newNode por la izq apunta de vuelta a su predecesor(current)
                newNode->setLeftChild(current);
                return;
            } else {
                current = current->getRightChild();
            }
        }
    }
}

