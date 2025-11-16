
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
    // se valida la hebra izq porque por ese lado se insertan los nodos
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
        // lado izq del (sub)arbol
        if (value < current->getValue()) {
            if (current->isLeftThread()) {
                current->setLeftChild(newNode);
                current->setLeftThread(false);
                newNode->setRightChild(current);
                // si la hebra izq es la raiz
                if (current->getLeftChild() == this->dummyRoot) {
                    newNode->setLeftChild(this->dummyRoot);
                    return;
                } else {
                    // si no es la raiz
                    // apunta al predecesor de current
                    ThreadedNode<T>* currentFather = this->getCurrentFather(current);

                    newNode->setLeftChild(currentFather);
                    return;
                }
            } else {
                current = current->getLeftChild();
                continue;
            }
        }
        // lado der del (sub)arbol
        if (value >= current->getValue()) {
            if (current->isRightThread()) {
                current->setRightChild(newNode);
                current->setRightThread(false);
                newNode->setLeftChild(current);
                // si la hebra der es la raiz
                if (current->getRightChild() == this->dummyRoot) {
                    newNode->setRightChild(this->dummyRoot);
                } else {
                    // si no es la raiz
                    // apunta al predecesor de current
                    ThreadedNode<T>* currentFather = this->getCurrentFather(current);

                    newNode->setRightChild(currentFather);
                    return;
                }
            }
        } else {
            current = current->getRightChild();
        }
    }
}

template<typename T>
ThreadedNode<T> * ThreadedBST<T>::getCurrentFather(ThreadedNode<T> *currentNode) {
    ThreadedNode<T>* aux = this->dummyRoot->getLeftChild();

    while (true) {
        if (currentNode->getValue() < aux->getValue()) {
            if (aux->getLeftChild()->getValue() == currentNode->getValue()) {
                return aux;
            } else {
                aux = aux->getLeftChild();
                continue;
            }
        }

        if (currentNode->getValue() > aux->getValue()) {
            if (aux->getRightChild()->getValue() == currentNode->getValue()) {
                return aux;
            } else {
                aux = aux->getRightChild();
            }
        }
    }
}

