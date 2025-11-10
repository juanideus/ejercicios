//
// Created by Deus on 05-11-2025.
//

#ifndef EJERCICIOS_AVL_H
#define EJERCICIOS_AVL_H
#include "NodoAVL.h"


class AVL{
    public:
    NodoAVL* root;

    //Metodos
    NodoAVL *RR(NodoAVL *nodo);

    NodoAVL *LR(NodoAVL *nodo);

    NodoAVL *RL(NodoAVL *nodo);
    NodoAVL* LL(NodoAVL* nodo);
    int obtenerAltura(NodoAVL* nodo);
    int FactorBalance(NodoAVL* nodo);
    public:
    AVL();
    void insertar(int dato);
    NodoAVL* insertar(NodoAVL*N,int dato);
    void inorden(NodoAVL* nodo);

};


#endif //EJERCICIOS_AVL_H