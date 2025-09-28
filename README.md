# Algoritmos en C++

Este proyecto en C++ contiene implementaciones de **listas enlazadas, polinomios, matrices, recursión, pilas, colas y operaciones numéricas**. Incluye ejercicios clásicos de algoritmos y estructuras de datos.

## Contenido del proyecto

- **Listas**
  - `ListaSimple.h`: Lista enlazada simple.
  - `ListaPolinomios.h`: Lista de polinomios con inserción y suma.

- **Funciones de Arreglos y Matrices**

| Función | Descripción |
|---------|------------|
| `int sumaArreglo(const int *A, int N)` | Suma todos los elementos de un arreglo. |
| `int sumaPrimerMedioUltimo(const int *A, int N)` | Suma el primer, medio y último elemento del arreglo. |
| `int sumaMatriz(int **A, int N, int M)` | Suma todos los elementos de una matriz NxM. |
| `int sumaDiagonalPrincipal(int **A, int N)` | Suma los elementos de la diagonal principal de una matriz NxN. |
| `int sumaDiagonalYBajo(int **A, int N)` | Suma diagonal principal y elementos bajo ella de una matriz NxN. |
| `bool buscarEnArreglo(const int *A, int N, int X)` | Verifica si un valor `X` está en un arreglo. |
| `bool estaOrdenado(const int *A, int N)` | Verifica si un arreglo está ordenado (O(N²) por comparación). |
| `void bubbleSort(int *A, int N)` | Ordena un arreglo usando Bubble Sort. |
| `int sumaFilasImpares(int **A, int N, int M)` | Suma las filas impares de una matriz NxM. |
| `bool columnasIdenticas(int **A, int N, int M, int K, int P)` | Verifica si dos columnas son idénticas. |
| `int sumaEsquinas(int **A, int N, int M)` | Suma las esquinas de una matriz NxM. |
| `int **multiplicarMatrices(int **A, int P, int Q, int **B, int R)` | Multiplica matrices A(PxQ) y B(QxR) (TODO). |

---

- **Funciones Recursivas**

| Función | Descripción |
|---------|------------|
| `int factorial(int n)` | Calcula el factorial de `n`. |
| `int fibonacci(int n)` | Calcula el n-ésimo número de Fibonacci. |
| `int suma(int n)` | Suma los números de 1 a n. |
| `int potencia(int base, int exponente)` | Calcula base^exponente. |
| `int sumaDigitos(int n)` | Suma los dígitos de `n`. |
| `int contarDigitos(int n)` | Cuenta los dígitos de `n` (pendiente de implementación). |
| `int mcm(int a, int b)` | Calcula el mínimo común múltiplo (pendiente). |
| `bool esPrimo(int n, int i=2)` | Verifica si `n` es primo (implementación incompleta). |
| `int contarPrimos(int n)` | Cuenta primos hasta `n` (pendiente). |
| `int sumaPares(int n)` | Suma todos los números pares hasta `n`. |
| `int sumaImpares(int n)` | Suma todos los números impares hasta `n`. |
| `int binarioADecimal(int n)` | Convierte un número binario a decimal. |
| `int decimalABinario(int n)` | Convierte un número decimal a binario. |

---

- **Funciones de Pila y Cola**

| Función | Descripción |
|---------|------------|
| `void invertirPila(stack<int> &s)` | Invierte los elementos de una pila. |
| `void barajar(stack<char> M, stack<char> &C, stack<char> &D, stack<char> &T, stack<char> &E)` | Distribuye cartas de la pila M a 4 pilas según el palo. |
| `void duplicar(int *numero)` | Duplica el valor de un número usando puntero. |
| `bool esPalo(const string &palabra)` | Verifica si una palabra es palíndromo. |

---

- **Funciones para Polinomios**

| Función | Descripción |
|---------|------------|
| `void insertar(ListaPolinomios &s, const string &poli2)` | Inserta los términos de un polinomio dado como string en una lista de polinomios. |

---

## Estructura del proyecto

