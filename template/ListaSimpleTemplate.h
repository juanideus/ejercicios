#pragma once
#include "NodoSimple.h"
using namespace std;
#include <string>
template <class T>

class ListaSimpleTemplate {
    NodoSimple<T>* HEAD;
    public:
    ListaSimpleTemplate();
    ~ListaSimpleTemplate();
    void insertar(T* dato);
    bool buscar(T* dato);
    string tostring();
    bool eliminar(T* dato);








};

#include "ListaSimpleTemplate.tpp"




