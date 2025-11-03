
#include <iostream>
#include <queue>
#include <stack>
#include "src/Listas/ListaNexoSimple.h"
#include "src/MPP/MPP.h"
#include "src/Arboles/BST/BST.h"
#include "src/Guias/GuiaListasEnlazadas.h"
using namespace std;

int main() {
    /* // guía listas enlazadas
    stack<int>* pila = new stack<int>();
    queue<int>* cola = new queue<int>();

    for (int i = 0; i < 3; i++) {
        //pila->push(i);
        cola->push(i);
    }

    GuiaListasEnlazadas::invertirStack(pila);
    GuiaListasEnlazadas::invertirQueue(cola);

    delete pila;
    delete cola;

    ListaNexoSimple<int>* lista = new ListaNexoSimple<int>;

    lista->agregarAlFinal(3);
    lista->agregarAlFinal(2);
    lista->agregarAlFinal(1);

    GuiaListasEnlazadas::imprimirRecursivoInverso(lista->getCabecera()); */

    // MPP
    MPP* matrizPocoPoblada = new MPP(5, 5);

    matrizPocoPoblada->insertar(1, 0, 0);
    matrizPocoPoblada->insertar(9, 0, 1);
    matrizPocoPoblada->insertar(2, 1, 1);
    matrizPocoPoblada->insertar(3, 2, 2);
    matrizPocoPoblada->insertar(4, 3, 3);
    matrizPocoPoblada->insertar(5, 4, 4);

    matrizPocoPoblada->insertar(100, 4, 2);

    matrizPocoPoblada->insertar(2, 0, 4);
    matrizPocoPoblada->insertar(3, 4, 0);

    matrizPocoPoblada->insertar(50, 0,3);
    matrizPocoPoblada->insertar(50, 2,4);

    cout << matrizPocoPoblada->mostrar() << endl;

    cout << GuiaListasEnlazadas::sumarDiagonalPrincipalMPP(matrizPocoPoblada) << endl;
    GuiaListasEnlazadas::imprimirPosicionValor100(matrizPocoPoblada);
    cout << GuiaListasEnlazadas::multiplicar4esquinas(matrizPocoPoblada) << endl;

    GuiaListasEnlazadas::eliminar50s(matrizPocoPoblada);

    cout << matrizPocoPoblada->mostrar() << endl;

    delete matrizPocoPoblada;
}