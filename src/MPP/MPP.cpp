//
// Created by balta on 20-10-2025.
//

#include "MPP.h"

MPP::MPP(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;
    NodoMPP** AF = new NodoMPP *[filas];
    NodoMPP** AC = new NodoMPP *[columnas];

    for (int i = 0 ; i < filas ; i++) {
        AF[i] = new NodoMPP(0, i, 0);
    }

    for (int i = 0 ; i < columnas ; i++) {
        AC[i] = new NodoMPP(0, 0, i);
    }

    this->aCol = AC;
    this->aRow = AF;
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
