#pragma once



template<class T>
NodoSimple<T>::NodoSimple() {
    this->DATO = 0;
    this->sig = nullptr;
}

template<class T>
NodoSimple<T>::NodoSimple(T* dato) {
    this->DATO = dato;
    this->sig = nullptr;

}

template<class T>
T* NodoSimple<T>::getData() {
    return this->DATO;
}

template<class T>
NodoSimple<T> * NodoSimple<T>::getNext() {
    return this->sig;
}

template<class T>
void NodoSimple<T>::setData(T* data) {
    this->DATO = data;
}

template<class T>
void NodoSimple<T>::setNext(NodoSimple<T> *next) {
    this->sig = next;
}


