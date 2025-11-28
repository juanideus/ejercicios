#pragma once
#include "../Arboles/ABB/ABB.h"
#include "../Heaps/NodoHeap.h"


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

    NodoHeap *buscarPadre(NodoHeap *N, NodoHeap *hijo);
    void imprimirMayoresX(NodoABB *N, int x);


};


