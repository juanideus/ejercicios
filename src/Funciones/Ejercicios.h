#pragma once
#include <stack>
using namespace std;
#include "string"
#include "../Polinomios/ListaPolinomios.h"
#include "../MPP/MPP.h"

namespace Ejercicios {
    // --- Funciones con arreglos ---
    int sumaArreglo(const int *A, int N);

    int sumaPrimerMedioUltimo(const int *A, int N);

    bool buscarEnArreglo(const int *A, int N, int X);

    bool estaOrdenado(const int *A, int N);

    void bubbleSort(int *A, int N);

    // --- Funciones con matrices ---

    int sumaMatriz(int **A, int N, int M);

    int sumaDiagonalPrincipal(int **A, int N);

    int sumaDiagonalYBajo(int **A, int N);

    int sumaFilasImpares(int **A, int N, int M);

    bool columnasIdenticas(int **A, int N, int M, int K, int P);

    int sumaEsquinas(int **A, int N, int M);

    int **multiplicarMatrices(int **A, int P, int Q, int **B, int R);

    void sumarDiagonales(int **M, int N, int &suma);

    // --- Funciones recursivas ---

    int factorial(int n);

    int fibonacci(int n);

    int suma(int n);

    int potencia(int base, int exponente);

    int sumaDigitos(int n);

    int contarDigitos(int n);

    int mcm(int a, int b);

    bool esPrimo(int n, int i = 2);

    int contarPrimos(int n);

    int sumaPares(int n);

    int sumaImpares(int n);

    int binarioADecimal(int n);

    int decimalABinario(int n);

    int combinacion(int n, int r);

    int permutacion(int n, int r);

    int sumaCuadrados(int n);

    int sumaCubos(int n);

    bool esCapicua(int n, int rev = 0);

    // --- Funciones con pilas y colas ---

    void invertirPila(std::stack<int> *s);

    void barajar(stack<char> *M, stack<char> *C, stack<char> *D, stack<char> *T, stack<char> *E);

    bool esPalo(const string &palabra);

    // --- Funciones con polinomios ---

    void insertar(ListaPolinomios *s, const string &poli2);

    void sumar(ListaPolinomios *A, ListaPolinomios *B, ListaPolinomios *C);

    // --- Funciones adicionales ---

    void duplicar(int *numero);

    void ejercicio3(MPP *matriz, int n);

    void sumarBordesMPP(MPP *matriz, int n);
    void contarFilaConMasNodos(MPP *matriz, int n);

};
