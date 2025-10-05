#pragma once


using namespace std;
template <class T>
class NodoSimple{
    private:
    T* DATO;
    NodoSimple<T>* sig;
    public:
    NodoSimple();
    NodoSimple(T* dato);
    T* getData();
    NodoSimple<T>* getNext();
    void setData(T* data);
    void setNext(NodoSimple<T>* next);




};



#include "NodoSimple.tpp"
