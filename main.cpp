#include "iostream"
#include <queue>
#include <sstream>
#include <stack>


#include "Listas/ListaSimple.h"
#include "Polinomios/ListaPolinomios.h"
using namespace std;

// 1. Sumar todos los elementos de un arreglo
int sumaArreglo(const int *A, int N) {
    int suma = 0;
    //T(N)=Σ(i=0,N-1) 1=N -->T(N)=O(N)
    for (int i = 0; i < N; i++) {
        suma += A[i];
    }
    return suma;
}

// 2. Suma: primer + medio + último elemento
int sumaPrimerMedioUltimo(const int *A, int N) {
    //T(N)=Σ(i=0,0) 1=1 -->T(N)=O(1)
    return A[0] + A[N / 2] + A[N - 1];
}

// 3. Sumar todos los elementos de una M
//NxM
int sumaMatriz(int **A, int N, int M) {
    int suma = 0;
    //T(N)=Σ(i=0,N-1)Σ(i=0,M-1) 1=N*M -->T(N)=O(NM)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            suma += A[i][j];
        }
    }
    return suma;
}

// 4. Sumar diagonal principal NxN
int sumaDiagonalPrincipal(int **A, int N) {
    int suma = 0;
    //T(N)=Σ(i=0,N-1) 1=N -->T(N)=O(N)
    for (int i = 0; i < N; i++) {
        suma += A[i][i];
    }
    return suma;
}

// 5. Sumar diagonal principal y bajo ella NxN
int sumaDiagonalYBajo(int **A, int N) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            suma += A[i][j];
        }
    }
    return suma;
}

// 6. Buscar valor X en arreglo ordenado
bool buscarEnArreglo(const int *A, int N, int X) {
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            return true;
        }
    }
    return false;
}

// 7. Verificar si el arreglo está ordenado
bool estaOrdenado(const int *A, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                return false;
            }
        }
    }
    return true;
}

// 8. Ordenar arreglo con Bubble Sort
void bubbleSort(int *A, int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
}

// 9. Suma de filas impares
int sumaFilasImpares(int **A, int N, int M) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i % 2 != 0) {
                suma += A[i][j];
            }
        }
    }
    return suma;
}

// 10. Verificar si columnas K y P son idénticas
bool columnasIdenticas(int **A, int N, int M, int K, int P) {
    for (int i = 0; i < N; i++) {
        if (A[i][K] != A[i][P]) {
            return false;
        }
    }
    return true;
}

// 11. Sumar esquinas de M
//NxM
int sumaEsquinas(int **A, int N, int M) {
    return A[0][0] + A[0][M - 1] + A[N - 1][0] + A[N - 1][M - 1];
}

// 12. Multiplicar matrices A(PxQ) y B(QxR)
int **multiplicarMatrices(int **A, int P, int Q, int **B, int R) {
    //TODO
    return nullptr;
}

//todo recursivos
int factorial(int n) {
    if (n == 0)return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)return 0;
    if (n == 1)return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int suma(int n) {
    if (n == 0)return 0;
    return n + suma(n - 1);
}

int potencia(int base, int exponente) {
    if (exponente == 1)return base;
    if (base == 0)return 0;
    return base * potencia(base, exponente - 1);
}

int sumaDigitos(int n) {
    if (n == 0)return 0;
    return n % 10 + sumaDigitos(n / 10);
}

int contarDigitos(int n) {
    return 0;
}

// int mcd(int a, int b) {
// }
int mcm(int a, int b) { return 0; }

bool esPrimo(int n, int i = 2) {
    if (n % i == 0)return true;
    return false;
}

int contarPrimos(int n) {
    return 0;
}

int sumaPares(int n) {
    if (n < 2)return 0;
    if (n % 2 != 0)n--;
    return n + sumaPares(n - 2);
}

int sumaImpares(int n) {
    if (n == 1)return 1;
    if (n % 2 == 0)n--;
    return n + sumaImpares(n - 2);
}

// int invertirNumero(int n, int inv = 0) {}
int binarioADecimal(int n) {
    if (n == 0) return 0;
    return (n % 10) + 2 * binarioADecimal(n / 10);
}

int decimalABinario(int n) {
    if (n==1)return 1;
    if (n==0)return 0;
    return n%2 +10 * decimalABinario(n/2);
}
// int combinacion(int n, int r) {}
// int permutacion(int n, int r) {}
// int sumaCuadrados(int n) {}
// int sumaCubos(int n) {}
// bool esCapicua(int n, int rev = 0) {}


//guia 2
void invertirPila(stack<int> *s) {
    auto aux = new queue<int>;
    while (!s->empty()) {
        aux->push(s->top());
        s->pop();
    }
    while (!aux->empty()) {
        s->push(aux->front());
        aux->pop();
    }
    delete aux;

}

void barajar(stack<char> *M, stack<char> *C, stack<char> *D, stack<char> *T, stack<char> *E) {
    while (!M->empty()) {
        switch (M->top()) {
            case 'C': C->push(M->top());
                break;
            case 'D': D->push(M->top());
                break;
            case 'T': T->push(M->top());
                break;
            case 'E': E->push(M->top());
                break;
            default: cout << "no";
        }
        M->pop();
    }
}

void duplicar(int *numero) {
    *numero *= 2;
}

bool esPalo(const string &palabra) {
    queue<char> q;
    stack<char> S;
    for (char i : palabra) {
        q.push(i);
        S.push(i);
    }
    while (!S.empty()) {
        if (q.front() != S.top()) {
            return false;
        }
        S.pop();
        q.pop();
    }
    return true;
}

void insertar(ListaPolinomios *s, const string &poli2) {
    stringstream ss(poli2);
    string linea;
    vector<string> numeros;
    while (getline(ss, linea, '+') ) {
        numeros.push_back(linea);
    }

    for (const auto & numero : numeros) {
        int coef = stoi(numero.substr(0, 1));
        if (numero.find("-") != string::npos) {
            coef *= -1;
        }
        if (numero.find('^') != string::npos) {
            int exp = 0;
            exp = stoi(numero.substr(3, 4));
            s->insertar(coef, exp);
        } else {
            s->insertar(coef, 0);
        }
    }
}
void sumar(ListaPolinomios *A,ListaPolinomios *B,ListaPolinomios *C) {
    NodoPoli* aux=A->getInicio();
    NodoPoli* aux2=B->getInicio();
    while (aux != nullptr && aux2 != nullptr) {
        if (aux->getExp() == aux2->getExp()) {
            int suma = aux->getCoef() + aux2->getCoef();
            C->insertar(suma, aux->getExp());
            aux  = aux->getSig();
            aux2 = aux2->getSig();
        }
        else if (aux->getExp() < aux2->getExp()) {
            C->insertar(aux2->getCoef(), aux2->getExp());
            aux2 = aux2->getSig();
        }
        else {
            C->insertar(aux->getCoef(), aux->getExp());
            aux = aux->getSig();
        }
    }
}
void sumarDiagonales(int**M,int N,int &suma) {
    for (int i = 0; i < N; i++) {
        suma += M[i][i];
        suma+=M[i][N-i-1];
    }

}


using namespace std;

int main(){

}