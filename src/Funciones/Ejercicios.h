#pragma once
namespace Ejercicios {

       // --- Funciones con arreglos ---
    static int sumaArreglo(const int *A, int N);
    static int sumaPrimerMedioUltimo(const int *A, int N);
    static bool buscarEnArreglo(const int *A, int N, int X);
    static bool estaOrdenado(const int *A, int N);
    static void bubbleSort(int *A, int N);

    // --- Funciones con matrices ---
    static int sumaMatriz(int **A, int N, int M);
    static int sumaDiagonalPrincipal(int **A, int N);
    static int sumaDiagonalYBajo(int **A, int N);
    static int sumaFilasImpares(int **A, int N, int M);
    static bool columnasIdenticas(int **A, int N, int M, int K, int P);
    static int sumaEsquinas(int **A, int N, int M);
    static int** multiplicarMatrices(int **A, int P, int Q, int **B, int R);
    static void sumarDiagonales(int **M, int N, int &suma);

    // --- Funciones recursivas ---
    static int factorial(int n);
    static int fibonacci(int n);
    static int suma(int n);
    static int potencia(int base, int exponente);
    static int sumaDigitos(int n);
    static int contarDigitos(int n);
    static int mcm(int a, int b);
    static bool esPrimo(int n, int i = 2);
    static int contarPrimos(int n);
    static int sumaPares(int n);
    static int sumaImpares(int n);
    static int binarioADecimal(int n);
    static int decimalABinario(int n);
    static int combinacion(int n, int r);
    static int permutacion(int n, int r);
    static int sumaCuadrados(int n);
    static int sumaCubos(int n);
    static bool esCapicua(int n, int rev = 0);

    // --- Funciones con pilas y colas ---
    static void invertirPila(stack<int> *s);
    static void barajar(stack<char> *M, stack<char> *C, stack<char> *D, stack<char> *T, stack<char> *E);
    static bool esPalo(const string &palabra);

    // --- Funciones con polinomios ---
    static void insertar(ListaPolinomios *s, const string &poli2);
    static void sumar(ListaPolinomios *A, ListaPolinomios *B, ListaPolinomios *C);

    // --- Funciones adicionales ---
    static void duplicar(int *numero);
};

