//
// Created by balta on 20-10-2025.
//

#include "MPP.h"
#include <iostream>
#include <sstream>
using namespace std;

MPP::MPP(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;
    this->aRow = new NodoMPP *[filas];
    this->aCol = new NodoMPP *[columnas];

    for (int i = 0 ; i < filas ; i++) {
        this->aRow[i] = new NodoMPP(0, i, 0);
        this->aRow[i]->setLeft(this->aRow[i]);
    }

    for (int i = 0 ; i < columnas ; i++) {
        this->aCol[i] = new NodoMPP(0, 0, i);
        this->aCol[i]->setUp(this->aCol[i]);
    }
}

int MPP::getColumnas() {
    return this->columnas;
}
void MPP::setFilas(int filas) {
    this->filas = filas;
}

int MPP::getFilas() {
    return this->filas;
}

void MPP::setColumnas(int columnas) {
    this->columnas = columnas;
}

void MPP::insertar(int value, int fila, int columna) {
    NodoMPP* nuevoNodo;

    try {
        nuevoNodo = new NodoMPP(value, fila, columna);
    } catch (...) {
        cerr << "No se pudo crear el nodo" << endl;
        return;
    }
    // AROW[FILA]
    // si no hay datos en la fila
    if (this->aRow[fila]->getLeft() == this->aRow[fila]) {
        nuevoNodo->setLeft(this->aRow[fila]);
        this->aRow[fila]->setLeft(nuevoNodo);
    } else {
        NodoMPP* aux = this->aRow[fila];
        // como va de de der a izq <- empieza de la cabecera y luego hacia el ultimo nodo del extremo der(atrás hacia adelante)
        // mientras la columna del aux sea mayor a la del nuevoNodo(por el setLeft)
        while (aux->getLeft()->getCol() > columna) {
            aux = aux->getLeft();
        }

        nuevoNodo->setLeft(aux->getLeft());
        aux->setLeft(nuevoNodo);
    }
    // ACOL[COLUMNA]
    // si no hay datos en la fila
    if (this->aCol[columna]->getUp() == this->aCol[columna]) {
        nuevoNodo->setUp(this->aCol[columna]);
        this->aCol[columna]->setUp(nuevoNodo);
    } else {
        NodoMPP* aux = this->aCol[columna];
        // como va de abajo hacia arriba ↑ empieza de la cabecera y luego hacia el ultimo nodo del extremo de abajo
        // mientras la fila del aux sea mayor a la del nuevoNodo(por el setUp)
        while (aux->getUp()->getRow() > fila) {
            aux = aux->getUp();
        }

        nuevoNodo->setUp(aux->getUp());
        aux->setUp(nuevoNodo);
    }
}

void MPP::mostrarComoMatriz() {
    int matriz[this->filas][this->columnas];

    for (int i = 0 ; i < this->filas ; i++) {
        for (int j = 0 ; i < this->columnas ; j++) {
            matriz[i][j] = 0;
        }
    }

    NodoMPP* aux;
    // for para iteración del array de filas
    for (int i = 0 ; i < this->filas ; i++) {
        aux = this->aRow[i];
        // iteramos por cada nodo del array en i fila
        while (aux->getLeft() != this->aRow[i]) {

        }
    }
}

