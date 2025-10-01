
#include <iostream>
#include <sstream>
using namespace std;
#include "MPP.h"
#define FO(i,N) for(i=1;i<=N;i++)
MPP::MPP():AROW(nullptr), ACOL(nullptr),largo(0),alto(0) {
}

MPP::MPP(int alto, int largo):AROW(nullptr), ACOL(nullptr),largo(largo),alto(alto) {
    this->alto = alto;
    this->largo = largo;
    this->AROW=new NodoMPP *[alto+1];
    int i=0;
    FO(i,alto){
        this->AROW[i]=new NodoMPP(i,0,0);
        this->AROW[i]->setLeft(this->AROW[i]);
    }

    this->ACOL=new NodoMPP *[largo+1];
    FO(i,largo) {
        this->ACOL[i]=new NodoMPP(0,i,0);
        this->ACOL[i]->setUp(this->ACOL[i]);
    }
}

int MPP::GetAlto() {
    return this->alto;
}

int MPP::GetLargo() {
    return this->largo;
}

void MPP::insertar(int dato, int fila, int col) {
    NodoMPP *aux = this->AROW[fila];
    NodoMPP *nuevoNodo = new NodoMPP(fila, col, dato);
    //Recorre La fila hasta uno antes de la posicion a agregar.
    while (aux->getLeft()->getCol() > col) {
        aux = aux->getLeft();
    }
    //actualizamos enlaces
    nuevoNodo->setLeft(aux->getLeft());
    aux->setLeft(nuevoNodo);
    //Nos paramos en la columna agregar
    aux = this->ACOL[col];
    //Recorre hasta uno antes de la fila a agregar
    while (aux->getRow() > fila) {
        aux = aux->getUp();
    }
    //Actualizamos enlaces
    nuevoNodo->setUp(aux->getUp());
    aux->setUp(nuevoNodo);

}

string MPP::toString() {
    stringstream oss;

    for (int i = 1; i <= alto; i++) {
        NodoMPP* cab = AROW[i];

        for (int j = 1; j <= largo; j++) {
            NodoMPP* fila = cab->getLeft();
            bool encontrado = false;

            // Recorremos toda la fila circular buscando la columna j
            while (fila != cab) {
                if (fila->getCol() == j) {
                    oss << fila->getValor() << " ";
                    encontrado = true;
                    break;
                }
                fila = fila->getLeft();
            }

            if (!encontrado)
                oss << "0 ";
        }

        oss << "\n";
    }

    return oss.str();
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

int MPP::sumarDiagonal() {
    int suma=0;
    for (int i = 1; i <= alto; i++) {
        NodoMPP* fila = AROW[i]->getLeft();
        while (fila->getCol()!=0) {
            if (fila->getCol() == i) {
                suma+=fila->getValor();
            }
            fila = fila->getLeft();
        }


    }
    return suma;
}

string MPP::Posicion100() {
    string respuesta;
    for (int i = 1; i <= alto; i++) {
        NodoMPP* aux = AROW[i]->getLeft();
        while (aux->getCol()!=0) {
            if (aux->getValor() == 100 ) {
                respuesta+="fila " + to_string(aux->getRow()) + " " +"col " + to_string(aux->getCol()) + "\n";
                return respuesta;
            }
            aux = aux->getLeft();
        }

    }
    return "No se encontro el 100";
}


