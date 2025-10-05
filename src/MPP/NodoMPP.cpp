#pragma once
#include "NodoMPP.h"

#include <iostream>

using namespace std;

NodoMPP::NodoMPP():valor(0), up(nullptr), left(nullptr), row(0), col(0) {

}

NodoMPP::NodoMPP(int valor):valor(valor),up(nullptr), left(nullptr), row(0), col(0) {

}

NodoMPP::NodoMPP(int row, int col,int valor): valor(valor), up(nullptr), left(nullptr), row(row), col(col) {

}

NodoMPP::~NodoMPP() {

}

int NodoMPP::getValor() { return valor; }

void NodoMPP::setValor(int valor) {this->valor = valor;}

NodoMPP * NodoMPP::getUp() {return up;}

NodoMPP * NodoMPP::getLeft() {return left;}

void NodoMPP::setUp(NodoMPP *up) {this->up = up;}

void NodoMPP::setLeft(NodoMPP *left) {this->left = left;}

int NodoMPP::getRow() {return row;}

int NodoMPP::getCol() {return col;}

void NodoMPP::setRow(int row) {this->row = row;}

void NodoMPP::setCol(int col) {this->col = col;}


