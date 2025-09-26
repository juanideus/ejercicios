//
// Created by Usuario on 25-09-2025.
//

#include "ListaPolinomios.h"

#include <iostream>
#include <vector>

ListaPolinomios::ListaPolinomios() {
    this->inicio = nullptr;
}

void ListaPolinomios::insertar(string polinomio) {
    string linea;
    stringstream ss;
    vector<string> vec;
    while (getline(polinomio,linea,',')) {
        getline(ss,linea,'-')
    }
}

string ListaPolinomios::toString() {
}
