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

NodoMPP ** MPP::getAROW() {
    return this->aRow;
}

NodoMPP ** MPP::getACOL() {
    return this->aCol;
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

NodoMPP *MPP::obtener(int fila, int columna) {
    NodoMPP* nodoEncontrado = this->aRow[fila]->getLeft();

    while (nodoEncontrado != this->aRow[fila]) {
        if (nodoEncontrado->getCol() == columna) {
            return nodoEncontrado;
        }
        nodoEncontrado = nodoEncontrado->getLeft();
    }

    return nullptr;
}


string MPP::mostrar() {
    stringstream ss;

    for (int i = 0 ; i < this->filas ; i++) {
        for (int j = 0 ; j < this->columnas ; j++) {
            if (this->obtener(i, j) != nullptr) {
                ss << "[" << this->obtener(i, j)->getValue() << "] ";
            } else {
                ss << "[0] ";
            }
        }
        ss << "\n";
    }

    return ss.str();
}

