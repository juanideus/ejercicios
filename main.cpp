#include "iostream"
#include <queue>
#include <sstream>
#include <stack>


#include "MPP.h"
#include "Listas/ListaSimple.h"
#include "Polinomios/ListaPolinomios.h"

using namespace std;

int sumarElementosLista(int* lista, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        sumaElementos += lista[i];
    }

    return sumaElementos;
}

int sumarPrimerMedioUltimoElemento(int* lista, int n) {
    int sumaElementos = 0;
    int posicionMedia = (n/2);

    sumaElementos += lista[0];
    sumaElementos += lista[posicionMedia];
    sumaElementos += lista[n-1];

    return sumaElementos;
}

int sumarElementosMatriz(int** matriz, int n, int m) {
    int sumaTotal = 0;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            sumaTotal += matriz[i][j];
        }
    }

    return sumaTotal;
}

int sumaDiagonalPrincipalMatriz(int** matriz, int n) {
    int sumaDiagonal = 0;

    for (int i = 0; i < n; i++) {
        sumaDiagonal += matriz[i][i];
    }

    return sumaDiagonal;
}

int main(){
    int* lista = new int[10];
    int** matriz = new int*[10]; //se reserva espacio para 10 filas

    for (int i = 0; i < 10; i++) {
        lista[i] = i;
        matriz[i] = new int[10]; //se reserva espacio de 10 columnas para cada fila

        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i+j;
        }
    }

    cout << sumarElementosLista(lista, 10) << endl;
    cout << sumarPrimerMedioUltimoElemento(lista, 10) << endl;
    cout << sumarElementosMatriz(matriz, 10, 10) << endl;
    cout << sumaDiagonalPrincipalMatriz(matriz, 10) << endl;

    delete[] lista;
    for (int i = 0; i < 10; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}