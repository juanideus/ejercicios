//
// Created by balta on 20-10-2025.
//

#include "NodoMPP.h"

#include <pthread.h>

NodoMPP::NodoMPP() {
    this->value = 0;
    this->col = 0;
    this->row = 0;
    this->left = nullptr;
    this->up = nullptr;
}

NodoMPP::NodoMPP(int value, int row, int col) {
    this->value = value;
    this->row = row;
    this->col = col;
    this->left = nullptr;
    this->up = nullptr;
}

int NodoMPP::getValue() {
    return this->value;
}

void NodoMPP::setValue(int value) {
    this->value = value;
}

int NodoMPP::getCol() {
    return this->col;
}

void NodoMPP::setCol(int col) {
    this->col = col;
}

int NodoMPP::getRow() {
    return this->row;
}

void NodoMPP::setRow(int row) {
    this->row = row;
}






