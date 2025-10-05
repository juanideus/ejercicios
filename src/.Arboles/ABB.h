#pragma once
#include <string>

#include "NodoABB.h"

#include "string"
using namespace std;
class ABB {
    NodoABB* root;
    public:
    ABB();

    NodoABB *insertarRecursivo(NodoABB *nodo, int dato);
    void insertar(int dato);
    NodoABB* getRoot();
    bool isEmpty();
    void eliminar(int dato);
    void inorder(NodoABB *nodo);
    void preorder(NodoABB *nodo);
    void postorder(NodoABB *nodo);
    void inorderInverso(NodoABB *nodo);
    void preorderInverso(NodoABB *nodo);
    void postorderInverso(NodoABB *nodo);

    void toString(int opcion);


};
