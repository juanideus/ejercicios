#include "iostream"
#include <queue>
#include <sstream>
#include <stack>


#include "MPP.h"
#include "Listas/ListaSimple.h"
#include "Polinomios/ListaPolinomios.h"

using namespace std;
// guía ejercicios complejidad algorítmica
int sumarElementosLista(int* lista, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        sumaElementos += lista[i];
    }

    return sumaElementos;
} // #1

int sumarPrimerMedioUltimoElemento(int* lista, int n) {
    int sumaElementos = 0;
    int posicionMedia = (n/2);

    sumaElementos += lista[0];
    sumaElementos += lista[posicionMedia];
    sumaElementos += lista[n-1];

    return sumaElementos;
} // #2

int sumarElementosMatriz(int** matriz, int n, int m) {
    int sumaTotal = 0;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            sumaTotal += matriz[i][j];
        }
    }

    return sumaTotal;
} // #3

int sumaDiagonalPrincipalMatriz(int** matriz, int n) {
    int sumaDiagonal = 0;

    for (int i = 0; i < n; i++) {
        sumaDiagonal += matriz[i][i];
    }

    return sumaDiagonal;
} // #4

int sumarDiagonalPrincipalYelementosDebajo(int** matriz, int n) {
    int sumaElementos = 0;

    for (int i = 0; i < n; i++) {
        //j esta contenido dentro de las iteraciones de i
        for (int j = 0; j <= i; j++) {
            sumaElementos += matriz[i][j];
        }
    }

    return sumaElementos;
} // #5

bool buscarX(int* a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == n) {
            return true;
        }
    }
    return false;
} // #6

string validarOrdenLista(int* lista, int n) {
    for (int i = 0; i < n; i++) {
        if (lista[i] > lista[i+1]) {
            return "NO";
        }
    }
    return "SÍ";
} // #7

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
} // #8

int sumarFilasImpares(int** matriz, int n) {
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

bool semejanzaEntreColumnas(int** A, int n, int m, int k, int p) {
    for (int i = 0; i < m; i++) {
        if (A[i][k] != A[i][p]) {
            return false;
        }
    }

    return true;
} // #10

int sumarCuatroEsquinas(int** A, int n, int m) {
    return A[0][0] + A[0][m] + A[n][0] + A[n][m];
} // #11

int** productoDeMatrices(int** A, int** B, int P, int Q, int R) {
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
// guía ejercicios listas enlazadas
template <typename T>
void invertirStack(stack<T>* S) {
    queue<T> aux;

    while (!S->empty()) {
        aux.push(S->top()); // referencia 1er elemento
        S->pop(); // remover elemento
    }

    while (!aux.empty()) {
        S->push(aux.front());
        aux.pop();
    }
} // #2

template <typename T>
void invertirQueue(queue<T>* Q) {
    stack<T> aux;

    while (!Q->empty()) {
        aux.push(Q->front()); // referencia 1er elemento
        Q->pop(); // remover elemento
    }

    while (!aux.empty()) {
        Q->push(aux.top());
        aux.pop();
    }
} // #2

void clasificarPintas(stack<char>* M, stack<char>* C, stack <char>* D, stack<char>* t, stack<char>* E) {
    while (!M->empty()) {
        if (M->top() == 'C') {
            C->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 'D') {
            D->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 't') {
            t->push(M->top());
            M->pop();
            continue;
        }

        if (M->top() == 'E') {
            E->push(M->top());
            M->pop();
        }
    }
} // #3

bool isPalindromo(string str) {
    stack<char> pila;
    queue<char> cola;

    for (int i = 0; i < str.length(); ++i) {
        pila.push(str[i]);
        cola.push(str[i]);
    }

    while (!pila.empty() && !cola.empty()) {
        if (pila.top() != cola.front()){
            return false;
        }

        pila.pop();
        cola.pop();
    }

    return true;
} // #3
//...
int main(){
    /* guía complejidad algorítmica
    int* lista = new int[10];
    int** matriz = new int*[10]; //se reserva espacio para 10 filas
    int** matriz2 = new int*[20];

    for (int i = 0; i < 10; i++) {
        lista[i] = i;
        matriz[i] = new int[20]; //se reserva espacio de 20 columnas para cada fila

        for (int j = 0; j < 20; j++) {
            matriz[i][j] = i+j;
        }
    }

    for (int i = 0; i < 20; i++) {
        matriz2[i] = new int[15];

        for (int j = 0; j < 15; j++) {
            matriz2[i][j] = i+j;
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

    int** matrizProducto = productoDeMatrices(matriz, matriz2, 10, 20, 15);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            cout << matrizProducto[i][j] << " " << endl;
        }
        cout << endl;
    }

    delete[] lista;

    for (int i = 0; i < 10; i++) {
        delete[] matriz[i];
        delete[] matrizProducto[i];
    }

    for (int i = 0; i < 20; i++) {
        delete[] matriz2[i];
    }

    delete[] matriz;
    delete[] matriz2;
    delete[] matrizProducto; */
}