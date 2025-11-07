//
// Created by Deus on 05-11-2025.
//

#ifndef EJERCICIOS_NODOAVL_H
#define EJERCICIOS_NODOAVL_H


class NodoAVL{
    int dato;
    NodoAVL *LEFT;
    NodoAVL *RIGHT;
    int altura;
    public:
    NodoAVL();
    NodoAVL(int dato);
    NodoAVL *getLeft();
    NodoAVL *getRight();
    int getAltura();
    void setAltura(int altura);
    void setLeft(NodoAVL *nodo);
    void setRight(NodoAVL *nodo);
    int getDato();

};


#endif //EJERCICIOS_NODOAVL_H