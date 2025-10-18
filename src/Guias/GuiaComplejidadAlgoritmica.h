//
// Created by balta on 18-10-2025.
//

#ifndef EJERCICIOS_GUIACOMPLEJIDADALGORITMICA_H
#define EJERCICIOS_GUIACOMPLEJIDADALGORITMICA_H

namespace  GuiaComplejidadAlgoritmica {
    int sumarElementosLista(int* lista, int n); // #1

    int sumarPrimerMedioUltimoElemento(int* lista, int n); // #2

    int sumarElementosMatriz(int** matriz, int n, int m); // #3

    int sumaDiagonalPrincipalMatriz(int** matriz, int n); // #4

    int sumarDiagonalPrincipalYelementosDebajo(int** matriz, int n); // #5

    bool buscarX(int* a, int n, int x); // #6

    string validarOrdenLista(int* lista, int n); // #7

    void ordenarLista(int* lista, int n); // #8

    int sumarFilasImpares(int** matriz, int n); // #9

    bool semejanzaEntreColumnas(int** A, int n, int m, int k, int p); // #10

    int sumarCuatroEsquinas(int** A, int n, int m); // #11

    int** productoDeMatrices(int** A, int** B, int P, int Q, int R); // #12
}


#endif //EJERCICIOS_GUIACOMPLEJIDADALGORITMICA_H