
#include "ThreadedBST.h"

template<typename T>
ThreadedBST<T>::ThreadedBST() {
    this->dummyRoot = new ThreadedNode<T>();
    this->dummyRoot->setLeftChild(this->root); // la raíz se apunta a si misma por la izq(solo la hebra izq de la raiz es true)
    this->dummyRoot->setRightChild(this->root); // la raíz se apunta a si  misma por la der
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
    return this->dummyRoot->isLeftTread();
}

template<typename T>
void ThreadedBST<T>::insert(T value) {
    ThreadedNode<T>* newNode;

    try {
        newNode = new ThreadedNode<T>(value);
    } catch (...) {
        cerr << "No se pudo instanciar el nodo..." << endl;
    }


}

