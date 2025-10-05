#pragma once
#include <iostream>
#include <ostream>
#include <sstream>




template<class T>
ListaSimpleTemplate<T>::ListaSimpleTemplate() {
    this->HEAD=nullptr;
}

template<class T>
ListaSimpleTemplate<T>::~ListaSimpleTemplate()=default;


template<class T>
void ListaSimpleTemplate<T>::insertar(T* dato) {
    NodoSimple<T> *nodo=nullptr;
    try {
        nodo=new NodoSimple<T>(dato);
    } catch (...) {
        cerr << "Error crear nodoSimple" << endl;
        return;
    }
    if (HEAD==nullptr) {
        HEAD=nodo;
    }else {
        NodoSimple<T> *aux=HEAD;
        while (aux->getNext()!=nullptr) {
            aux=aux->getNext();
        }
        aux->setNext(nodo);
    }

}

template<class T>
bool ListaSimpleTemplate<T>::buscar(T* dato) {

    if (HEAD==nullptr ) {
        return false;
    }
    if (HEAD->data==dato) {
        return true;
    }
    NodoSimple<T> *aux=HEAD->getNext();
    while (aux!=nullptr) {
        if (aux->data==dato) {
            return true;
        }
        aux=aux->next;
    }
    return false;

}

template<class T>
string ListaSimpleTemplate<T>::tostring() {
    stringstream ss;
    if (HEAD==nullptr) {
        ss<<"lista vacia"<<endl;
        return ss.str();
    }
    NodoSimple<T> *aux=HEAD;
    while (aux!=nullptr) {
        ss<<aux->getData()->toString()<<endl;
        aux=aux->getNext();
    }
    return ss.str();

}




template<class T>
bool ListaSimpleTemplate<T>::eliminar(T* dato) {
    if (HEAD==nullptr) return false;

    NodoSimple<T> *aux=HEAD;
    while (aux->getNext()->getData()!=dato) {
        aux=aux->getNext();
    }
    NodoSimple<T> *NodoAeliminar=aux->getNext();
    aux->setNext(NodoAeliminar->getNext());
    delete NodoAeliminar;
    return true;

}

