#include "Ejercicios.h"

#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include "../Polinomios/ListaPolinomios.h"
#include "../MPP/NodoMPP.h"
#include "../MPP/MPP.h"

namespace Ejercicios {

// --- Funciones con arreglos ---
int sumaArreglo(const int *A, int N) {
    int suma = 0;
    for (int i = 0; i < N; i++) suma += A[i];
    return suma;
}

int sumaPrimerMedioUltimo(const int *A, int N) {
    return A[0] + A[N / 2] + A[N - 1];
}

bool buscarEnArreglo(const int *A, int N, int X) {
    for (int i = 0; i < N; i++) if (A[i] == X) return true;
    return false;
}

bool estaOrdenado(const int *A, int N) {
    for (int i = 0; i < N - 1; i++) if (A[i] > A[i + 1]) return false;
    return true;
}

void bubbleSort(int *A, int N) {
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (A[i] > A[j]) {
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
}

// --- Funciones con pilas y colas ---
void invertirPila(std::stack<int> *s) {
    std::queue<int> aux;
    while (!s->empty()) {
        aux.push(s->top());
        s->pop();
    }
    while (!aux.empty()) {
        s->push(aux.front());
        aux.pop();
    }
}

void barajar(std::stack<char> *M, std::stack<char> *C, std::stack<char> *D, std::stack<char> *T, std::stack<char> *E) {
    while (!M->empty()) {
        switch (M->top()) {
            case 'C': C->push(M->top()); break;
            case 'D': D->push(M->top()); break;
            case 'T': T->push(M->top()); break;
            case 'E': E->push(M->top()); break;
            default: std::cout << "no"; break;
        }
        M->pop();
    }
}

bool esPalo(const std::string &palabra) {
    std::stack<char> S;
    std::queue<char> q;
    for (char c : palabra) {
        S.push(c);
        q.push(c);
    }
    while (!S.empty()) {
        if (S.top() != q.front()) return false;
        S.pop();
        q.pop();
    }
    return true;
}

// --- Funciones recursivas ---
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// --- Funciones con polinomios ---
void insertar(ListaPolinomios *s, const std::string &poli2) {
    std::stringstream ss(poli2);
    std::string linea;
    std::vector<std::string> numeros;
    while (getline(ss, linea, '+')) numeros.push_back(linea);

    for (const auto &numero : numeros) {
        int coef = stoi(numero.substr(0, 1));
        if (numero.find("-") != std::string::npos) coef *= -1;
        if (numero.find('^') != std::string::npos) {
            int exp = stoi(numero.substr(3));
            s->insertar(coef, exp);
        } else {
            s->insertar(coef, 0);
        }
    }
}

void sumar(ListaPolinomios *A, ListaPolinomios *B, ListaPolinomios *C) {
    NodoPoli* aux = A->getInicio();
    NodoPoli* aux2 = B->getInicio();
    while (aux != nullptr && aux2 != nullptr) {
        if (aux->getExp() == aux2->getExp()) {
            C->insertar(aux->getCoef() + aux2->getCoef(), aux->getExp());
            aux  = aux->getSig();
            aux2 = aux2->getSig();
        } else if (aux->getExp() < aux2->getExp()) {
            C->insertar(aux2->getCoef(), aux2->getExp());
            aux2 = aux2->getSig();
        } else {
            C->insertar(aux->getCoef(), aux->getExp());
            aux = aux->getSig();
        }
    }
}

// --- Otras funciones ---
void duplicar(int *numero) { *numero *= 2; }

void ejercicio3(MPP *matriz, int n) {
    int counter = 0,i;
    NodoMPP* nodo;
    for (i = 1; i <= n; i++) {
        nodo=matriz->getRow()[i]->getLeft();
        while (nodo->getCol()!=0) {
            if (nodo->getCol()==i) {
                counter++;
            }
            if (nodo->getCol()==matriz->GetLargo()-i+1) {
                counter++;
            }
            nodo=nodo->getLeft();
        }
    }
    if (matriz->GetLargo()%2!=0) {
        nodo=matriz->getRow()[n+1/2]->getLeft();
        while (nodo->getCol()!=0) {
            if (nodo->getCol()==(n+1)/2) {
                counter--;
            }
            nodo=nodo->getLeft();
        }
    }
    cout << counter << endl;
}

void sumarBordesMPP(MPP *matriz, int n) {
    int counter = 0;
    NodoMPP* nodo;
    nodo=matriz->getRow()[1]->getLeft();
    while (nodo->getCol()!=0) {
        counter=counter+nodo->getValor();
        nodo=nodo->getLeft();
    }
    nodo=matriz->getRow()[n]->getLeft();
    while (nodo->getCol()!=0) {
        counter=counter+nodo->getValor();
        nodo=nodo->getLeft();
    }
    for (int i = 2; i < n; i++) {
        nodo=matriz->getRow()[i]->getLeft();
        while (nodo->getCol()!=0) {
            if (nodo->getCol()==1 || nodo->getCol()==n) {
                counter=counter+nodo->getValor();
            }
            nodo=nodo->getLeft();
        }
    }
    cout << counter << endl;
}

void contarFilaConMasNodos(MPP *matriz, int n) {
    int counter = 0,aux=0,fil=0;
    NodoMPP* nodo;
    for (int i = 1; i <= n; ++i) {
        nodo=matriz->getRow()[i]->getLeft();
        while (nodo->getCol()!=0) {
            aux++;
            nodo=nodo->getLeft();
        }
        if (aux>counter) {
            counter=aux;
            fil=i;
            aux=0;
        }

    }
    cout << "La fila con mas nodos es la " << fil << "con: "<< counter << endl;
}

void sumarDiagonales(int **M, int N, int &suma) {
    for (int i = 0; i < N; i++) {
        suma += M[i][i] + M[i][N - i - 1];
    }
}

} // namespace Ejercicios




