

#include "ListaSimple.h"

#include <iostream>
#include <sstream>
#include <stack>

Nodo * ListaSimple::recorrer(Nodo* aux) {
    while (aux->getProximo()!=nullptr) {
        aux = aux->getProximo();
    }
    return aux;
}

Nodo *ListaSimple::validarNodo(int dato) {

}

ListaSimple::ListaSimple() {
    this->inicio = nullptr;
}

ListaSimple::~ListaSimple() {

}

bool ListaSimple::estaVacia() {
    return inicio == nullptr;
}

bool ListaSimple::insertar(int dato) {
    Nodo* nuevoNodo=nullptr;
    try {
        nuevoNodo=new Nodo(dato);

    } catch (...) {
        cerr << "Error al insertar elementos" << endl;

    }
    if (estaVacia()) {
        this->inicio = nuevoNodo;
        return true;
    }
    Nodo* aux = recorrer(this->inicio);

    aux->setProximo(nuevoNodo);
    return true;
}

string ListaSimple::tostring() {
    std::stringstream ss;
    stack <int> s;
    Nodo* aux=this->inicio;
    while (aux!=nullptr) {
        s.push(aux->getDato());
        aux = aux->getProximo();
    }
    while (!s.empty()) {
        ss << s.top() << " ";
        s.pop();
    }
    return ss.str();

}

string ListaSimple::tostringNormal() {
    stringstream ss;
    Nodo* aux=this->inicio;
    while (aux != nullptr) {
        ss << aux->getDato() << " ";
        aux = aux->getProximo();
    }
    return ss.str();
}
