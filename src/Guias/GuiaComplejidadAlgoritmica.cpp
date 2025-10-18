//
// Created by balta on 15-10-2025.
//

#include <iostream>
using namespace std;
#include "GuiaComplejidadAlgoritmica.h"
// guía ejercicios complejidad algorítmica
int GuiaComplejidadAlgoritmica::sumarElementosLista(int* lista, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        sumaElementos += lista[i];
    }

    return sumaElementos;
} // #1

int GuiaComplejidadAlgoritmica::sumarPrimerMedioUltimoElemento(int* lista, int n) {
    int sumaElementos = 0;
    int posicionMedia = (n/2);

    sumaElementos += lista[0];
    sumaElementos += lista[posicionMedia];
    sumaElementos += lista[n-1];

    return sumaElementos;
} // #2

int GuiaComplejidadAlgoritmica::sumarElementosMatriz(int** matriz, int n, int m) {
    int sumaTotal = 0;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            sumaTotal += matriz[i][j];
        }
    }

    return sumaTotal;
} // #3

int GuiaComplejidadAlgoritmica::sumaDiagonalPrincipalMatriz(int** matriz, int n) {
    int sumaDiagonal = 0;

    for (int i = 0; i < n; i++) {
        sumaDiagonal += matriz[i][i];
    }

    return sumaDiagonal;
} // #4

int GuiaComplejidadAlgoritmica::sumarDiagonalPrincipalYelementosDebajo(int** matriz, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        //j esta contenido dentro de las iteraciones de i
        for (int j = 0; j <= i; j++) {
            sumaElementos += matriz[i][j];
        }
    }

    return sumaElementos;
} // #5

bool GuiaComplejidadAlgoritmica::buscarX(int* a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == n) {
            return true;
        }
    }
    return false;
} // #6

string GuiaComplejidadAlgoritmica::validarOrdenLista(int* lista, int n) {
    for (int i = 0; i < n; i++) {
        if (lista[i] > lista[i+1]) {
            return "NO";
        }
    }
    return "SÍ";
} // #7

void GuiaComplejidadAlgoritmica::ordenarLista(int* lista, int n) {
    int aux;
    //menor a mayor
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (lista[i] > lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
} // #8

int GuiaComplejidadAlgoritmica::sumarFilasImpares(int** matriz, int n) {
    int sumaFilas = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i%2!=0) {
                sumaFilas += matriz[i][j];
            }
        }
    }

    return sumaFilas;
} // #9

bool GuiaComplejidadAlgoritmica::semejanzaEntreColumnas(int** A, int n, int m, int k, int p) {
    for (int i = 0; i < m; i++) {
        if (A[i][k] != A[i][p]) {
            return false;
        }
    }

    return true;
} // #10

int GuiaComplejidadAlgoritmica::sumarCuatroEsquinas(int** A, int n, int m) {
    return A[0][0] + A[0][m] + A[n][0] + A[n][m];
} // #11

int** GuiaComplejidadAlgoritmica::productoDeMatrices(int** A, int** B, int P, int Q, int R) {
    int** matrizProducto = new int*[P]; // se inicializa con P filas

    for (int i = 0; i < P; i++) {
        matrizProducto[i] = new int[R]; // R columnas por cada fila
    }
    // la matriz A tiene la misma cantidad de columnas que la matriz B de filas
    // por lo tanto la iteraciones estan contenidas en Q
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < P; j++) {
            matrizProducto[j][i] = A[j][i];
        }
        for (int k = 0; k < R; k++) {
            matrizProducto[i][k] *= B[i][k];
        }
    }

    return matrizProducto;
} // #12
//...