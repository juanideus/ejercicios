//
// Created by rodri on 18-10-2025.
//

#include "ejercicios.h"
#include "queue"

void ejercicios::ejercicio1(int *lista, int n) {

    queue<int> q;
    int mitad = n/2;
    for (int i = 0; i <= mitad; i++) {
        q.push(lista[i]);
        q.push(lista[i+mitad]);
    }

    for (int i = 0; i < n; i++) {
        cout << q.front() << endl;
        q.pop();
    }

}


void ejercicios::ejercicio2(int *lista, int n) {

    int maxNodos = 0;
    int indice = 0;
    Nodo *aux = mpp->ACOL[0];
    for (int i = 0; i < m; i++) {

        aux = mpp->ACOL[i].getDown();
        int nodosColumna = 0;
        while (aux != mpp->ACOL[i]) {
            if (aux.getFila()%2 != 0) nodosColumna++;
            aux.getDown();
        }

        if (nodosColumna > maxNodos) {
            maxNodos = nodosColumna;
            indice = i++;
        }
    }

    cout << indice << endl;

}