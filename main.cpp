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

int sumarDiagonalPrincipalYelementosDebajo(int** matriz, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        //j esta contenido dentro de las iteraciones de i
        for (int j = 0; j <= i; j++) {
            sumaElementos += matriz[i][j];
        }
    }

    return sumaElementos;
}

bool buscarX(int* a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == n) {
            return true;
        }
    }
    return false;
}

string validarOrdenLista(int* lista, int n) {
    for (int i = 0; i < n; i++) {
        if (lista[i] > lista[i+1]) {
            return "NO";
        }
    }
    return "SÍ";
}

void ordenarLista(int* lista, int n) {
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
    cout << sumarDiagonalPrincipalYelementosDebajo(matriz, 10) << endl;

    if (buscarX(lista, 10, 5)) {
        cout << "Si esta en la lista" << endl;
    } else {
        cout << "No esta en la lista" << endl;
    }

    cout << validarOrdenLista(lista, 10) << endl;

    delete[] lista;
    for (int i = 0; i < 10; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}