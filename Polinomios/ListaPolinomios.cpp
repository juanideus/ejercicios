//
// Created by Usuario on 25-09-2025.
//

#include "ListaPolinomios.h"

#include <iostream>
#include <vector>

ListaPolinomios::ListaPolinomios() {
    this->inicio = nullptr;
}

void ListaPolinomios::insertar(int coef, int exp) {
    NodoPoli* nodo = new NodoPoli(coef, exp);
    if (this->inicio == nullptr) {
        this->inicio = nodo;
        return;
    }
    NodoPoli* aux = this->inicio;
    while (aux->getSig() != nullptr) {
        aux = aux->getSig();
    }
    aux->setSig(nodo);
}

ListaPolinomios ListaPolinomios::sumar(ListaPolinomios lista) {

    NodoPoli* aux  = this->inicio;
    NodoPoli* aux2 = lista.inicio;
    ListaPolinomios listaPolinomios;


    while (aux != nullptr && aux2 != nullptr) {
        if (aux->getExp() == aux2->getExp()) {
            int suma = aux->getCoef() + aux2->getCoef();
            listaPolinomios.insertar(suma, aux->getExp());
            aux  = aux->getSig();
            aux2 = aux2->getSig();
        }
        else if (aux->getExp() < aux2->getExp()) {
            listaPolinomios.insertar(aux2->getCoef(), aux2->getExp());
            aux2 = aux2->getSig();
        }
        else { // aux->getExp() > aux2->getExp()
            listaPolinomios.insertar(aux->getCoef(), aux->getExp());
            aux = aux->getSig();
        }
    }




    return listaPolinomios;

}

string ListaPolinomios::toString(const string &var) {
    NodoPoli* aux = this->inicio;
    string str = "";
    while (aux != nullptr) {
        if (aux->getExp() == 0 ){
            str += to_string(aux->getCoef());
        }else {
            str += to_string(aux->getCoef()) +var+"^"+ to_string(aux->getExp()) + " + ";
        }

        aux = aux->getSig();
    }
    return str;
}
