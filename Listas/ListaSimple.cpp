

#include "ListaSimple.h"

#include <sstream>
#include <stack>

ListaSimple::ListaSimple() {
    this->inicio = nullptr;
}

ListaSimple::~ListaSimple() {

}

bool ListaSimple::estaVacia() {
    return inicio == nullptr;
}

bool ListaSimple::insertar(int dato) {
    Nodo* nodo = new Nodo(dato);
    if (estaVacia()) {
        this->inicio = nodo;
        return true;
    }
    Nodo* aux=this->inicio;
    while (aux->getProximo()!=nullptr) {
        aux = aux->getProximo();
    }
    aux->setProximo(nodo);
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
