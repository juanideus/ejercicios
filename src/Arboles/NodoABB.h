#pragma once


class NodoABB {
    int DATO;
    NodoABB* LEFT;
    NodoABB* RIGHT;
    public:
    NodoABB();
    NodoABB(int dato);
    ~NodoABB();
    int getDato() const;
    void setDato(int dato);
    NodoABB* getLeft() const;
    NodoABB* getRight() const;
    void setLeft(NodoABB* left);
    void setRight(NodoABB* right);

};

