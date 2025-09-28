
#include <iostream>
using namespace std;
#include "MPP.h"
#define FO(i,N) for(i=1;i<=N;i++)
MPP::MPP():AROW(nullptr), ACOL(nullptr),largo(0),alto(0) {
}

MPP::MPP(int alto, int largo):AROW(nullptr), ACOL(nullptr),largo(largo),alto(alto) {
    this->AROW=new NodoMPP *[alto];
    int i=0;
    FO(i,alto){
        this->AROW[i]=new NodoMPP();
        this->AROW[i]->setRow(i);
        this->AROW[i]->setCol(0);
        this->AROW[i]->setLeft(this->AROW[i]);
    }

    this->ACOL=new NodoMPP *[largo];
    FO(i,largo) {
        this->ACOL[i]=new NodoMPP();
        this->ACOL[i]->setRow(0);
        this->ACOL[i]->setCol(i);
        this->ACOL[i]->setLeft(this->ACOL[i]);
    }
}

int MPP::GetAlto() {
    return this->alto;
}

int MPP::GetLargo() {
    return this->largo;
}

void MPP::insertar(int dato, int fila, int col) {



}


void MPP::insertar(int fila, int col) {
}

void MPP::eliminar(int fila, int col) {
}

void MPP::eliminar(int dato) {
}

NodoMPP * MPP::buscar(int fila, int col) {

        // Verifica que las coordenadas se encuentren en la matriz, retorna nullptr en caso contrario.
        if (fila < 1 || fila > this->alto || col < 1 || col > this->largo) return nullptr;

        NodoMPP* aux = this->AROW[fila]->getLeft(); // Se posiciona en la fila indicada.
        while (aux->getCol() >= col) { // Finaliza si la columna actual es menor a la buscada.
            if (aux->getCol() == col) return aux; // retorna el nodo si se encontro la columna buscada.
            aux = aux->getLeft();
        }
        // Retorna nullptr si se recorrió todas las columnas de la fila y no se encontro el dato buscado.
        return nullptr;
    }


bool MPP::mover(int Nuevafila, int Nuevacol, int dato) {
    return false;
}

void MPP::mostrarMatriz() {
    for (int i = 0; i < alto; i++) {
        NodoMPP* fila = AROW[i]->getLeft(); // primer nodo de la fila (circular)

        for (int j = 0; j < largo; j++) {
            if (fila != AROW[i] && fila->getCol() == j) {
                // hay un nodo en la columna j
                std::cout << fila->getValor() << " ";
                fila = fila->getLeft(); // avanzar al siguiente nodo en la fila
            } else {
                // no hay nodo en esta columna
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
}


