#pragma once
#include "../Arboles/ABB/ABB.h"


namespace guia2 {
    int contarNodos(NodoABB*root);
    bool indicarX(NodoABB *N, int x);
    int contarHojas(NodoABB *N);
    int contarVeces(NodoABB *N);
    void deleteAbb(NodoABB *N);
    int susecorPreOrden(NodoABB *N, ABB *A);

};


