#pragma once
#include <string>

#include "NodoABB.h"

#include "string"
using namespace std;
class ABB {
    NodoABB* root;
    NodoABB* buscarRemplazo(NodoABB*aux);
    NodoABB* padreRemplazo(NodoABB*remplazante,NodoABB*inicio);
    public:
    ABB();

    NodoABB *insertarRecursivo(NodoABB *nodo, int dato);
    void insertar(int dato);
    bool existe(NodoABB*nodo,int dato);
    NodoABB* getRoot();
    bool isEmpty();
    void eliminar(int dato);
    void inorder(NodoABB *nodo);
    void preorder(NodoABB *nodo);
    void postorder(NodoABB *nodo);
    void inorderInverso(NodoABB *nodo);
    void preorderInverso(NodoABB *nodo);
    void postorderInverso(NodoABB *nodo);
    NodoABB* minimo(NodoABB*aux);
    NodoABB* maximo(NodoABB*aux);

    void inorderIterativo();


    void toString(int opcion);



    NodoABB * obtener(int i, NodoABB * nodoAbb);
};
