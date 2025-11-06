#include "BST.h"
#include <iostream>
#include <stack>
using namespace std;

template<typename T>
BST<T>::BST() {
    this->root = nullptr;
}

template<typename T>
BST<T>::~BST() {
    this->deleteTree(this->root);
}


template<typename T>
BSTnode<T> *BST<T>::getRoot() {
    return this->root;
}

template<typename T>
void BST<T>::setRoot(BSTnode<T> *newRoot) {
    this->root = newRoot;
}

template<typename T>
bool BST<T>::isEmpty() {
    return this->root == nullptr;
}

template<typename T>
void BST<T>::insert(T value) {
    BSTnode<T>* newNode;

    try {
        newNode = new BSTnode<T>(value);
    } catch (...) {
        cerr << "No se pudo instanciar el nodo..." << endl;
    }

    if (this->isEmpty()) {
        this->root = newNode;
        return;
    }

    BSTnode<T>* aux = this->root;

    while (true) {
        // lado izq de la raíz
        if (value < aux->getValue()) {
            if (!aux->getLeft()) {
                aux->setLeft(newNode);
                return;
            } else {
                aux = aux->getLeft();
                continue;
            }
        // lado der de la raíz
        } else {
            if (!aux->getRight()) {
                aux->setRight(newNode);
                return;
            } else {
                aux = aux->getRight();
            }
        }
    }
}

template<typename T>
void BST<T>::iterativePrintPreOrder() { // raíz(imprimir) -> izq -> der
    stack<BSTnode<T>*> s;
    BSTnode<T>* aux = this->root;

    while (true) {
        while (aux) { // se imprime cada raiz mientras va avanzando por cada nodo izq
            cout << aux->getValue() << endl;
            s.push(aux);
            aux = aux->getLeft();
        }

        if (!s.empty()) { // sacamos los nodos der de cada nodo izq de abajo hacia arriba
            aux = s.top();
            s.pop();
            aux = aux->getRight();

        } else {
            break;
        }
    }
}

template<typename T>
void BST<T>::iterativePrintInOrder() { // izq -> raiz(imprimir) -> der
    stack<BSTnode<T>*> s;
    BSTnode<T>* aux = this->root;

    while (true) {
        while (aux) {
            s.push(aux);
            aux = aux->getLeft();
        }

        if (!s.empty()) { // nos vamos el extremo izq de abajo y se imprime
            aux = s.top();
            s.pop();
            cout << aux->getValue() << endl;
            aux = aux->getRight();

        } else {
            break;
        }
    }
}

template<typename T>
void BST<T>::iterativePrintPostOrder() { // izq -> der -> raiz(imprimir)
    stack<BSTnode<T>*> s;
    BSTnode<T>* aux = this->root;

    while (true) {
        while (aux) {
            s.push(aux);
            aux = aux->getLeft();
        }

        if (!s.empty()) {

        }
        break;
    }
}

template<typename T>
void BST<T>::inverseIterativePrintPreOrder() {
}

template<typename T>
void BST<T>::inverseIterativePrintInOrder() {
}

template<typename T>
void BST<T>::inverseIterativePrintPostOrder() {
}

template<typename T>
int BST<T>::grade() {
    if (this->isEmpty()) {
        return 0;
    }

    int counter = 0;
    stack<BSTnode<T>*> s;
    BSTnode<T>* aux = this->root;

    while (true) {
        while (aux) {
            s.push(aux);
            aux = aux->getLeft();
        }

        if (!s.empty()) {
            aux = s.top();
            s.pop();

            if (aux->getLeft() && aux->getRight()) {
                counter++;
            }

            aux = aux->getRight();
        } else {
            break;
        }
    }
}

template<typename T>
void BST<T>::deleteTree(BSTnode<T>* node) {
    // metodo de eliminación recursivo in order (izq -> der -> raiz)
    if (!node) {
        return;
    }
    // recorremos hasta el ultimo nodo izq
    deleteTree(node->getLeft());
    // si no hay nodo izq del nodo actual
    // recorremos el nodo der del nodo actual
    deleteTree(node->getRight());
    // si tampoco hay nodo der del nodo actual, eliminamos raiz
    delete node;
}
