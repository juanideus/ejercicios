//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_LISTAPOLINOMIOS_H
#define EJERCICIOS_LISTAPOLINOMIOS_H
#include <string>

#include "NodoPoli.h"
#include "../Listas/Nodo.h"
using namespace std;

class ListaPolinomios {
    NodoPoli * inicio;
    public:

    ListaPolinomios();
    void insertar(string polinomio);
    string toString();
};


#endif //EJERCICIOS_LISTAPOLINOMIOS_H