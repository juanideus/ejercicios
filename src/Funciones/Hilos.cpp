//
// Created by Juani on 08/12/2025.
//

#include "Hilos.h"

#include <algorithm>

void Hilos::sumararregloHilos(int *A, int inicio, int final, int &resultado) {
    for(int i=inicio;i<final;i++) {
        resultado+=A[i];
    }
}

void Hilos::sumarMatrizHilos(int A[][3], int N, int M,int&resultado) {
    for(int i=0;i<M;i++) {
        resultado+=A[N][i];
    }
}

void Hilos::maxBloque(int *A, int inicio, int final, int*resultado,int pos) {
    for(int i=inicio;i<final-1;i++) {

        resultado[pos]= std::max(A[i],A[i+1]);
    }
}
