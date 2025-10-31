﻿
#include <iostream>

#include "src/Listas/ListaNexoSimple.h"
#include "src/MPP/MPP.h"
using namespace std;

int main() {
    /* // guía listas enlazadas
    stack<int>* pila = new stack<int>();
    queue<int>* cola = new queue<int>();

    for (int i = 0; i < 3; i++) {
        pila->push(i);
        cola->push(i);
    }

    GuiaListasEnlazadas::invertirStack<int>(pila);
    GuiaListasEnlazadas::invertirQueue<int>(cola);

    delete pila;
    delete cola; */

    /* // MPP
    MPP* matrizPocoPoblada = new MPP(5, 5);

    matrizPocoPoblada->insertar(1, 0, 0);
    matrizPocoPoblada->insertar(9, 0, 1);
    matrizPocoPoblada->insertar(2, 1, 1);
    matrizPocoPoblada->insertar(3, 2, 2);
    matrizPocoPoblada->insertar(4, 3, 3);
    matrizPocoPoblada->insertar(5, 4, 4);

    cout << matrizPocoPoblada->mostrar() << endl;

    delete matrizPocoPoblada; */
}