#pragma once
#include "../Arboles/ABB/ABB.h"
#include "../Heaps/NodoHeap.h"
#include "../Polinomios/ListaPolinomios.h"


namespace guia2 {
    NodoHeap* padreSucesor(NodoHeap *N);
    NodoABB* padreSucesor(NodoABB *N);
    int contarNodos(NodoABB*root);
    bool indicarX(NodoABB *N, int x);
    int contarHojas(NodoABB *N);
    int contarVeces(NodoABB *N);
    void deleteAbb(NodoABB *N);
    int susecorPreOrden(NodoABB *N, ABB *A);
    bool eliminarHeap(NodoHeap *&N);
    bool eliminarHeap(NodoHeap *&N,NodoHeap* hijo);

    void inorden(NodoABB *N, int x);
    //prueba recuperativa paralelo 1
    void ejercicio1(ListaPolinomios**lista,int x);
    void ejercicio2(NodoABB*P,NodoABB*raiz);

    NodoHeap *buscarPadre(NodoHeap *N, NodoHeap *hijo);
    void imprimirMayoresX(NodoABB *N, int x);

    //Mi propio ordenamiento
    void ordenamiento(int*A,int N);



};


