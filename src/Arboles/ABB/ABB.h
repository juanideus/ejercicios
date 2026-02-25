#pragma once
#include <string>

#include "NodoABB.h"

using namespace std;

class ABB {
    NodoABB *root;

    static NodoABB *buscarRemplazo(NodoABB *aux);

    static NodoABB *padreRemplazo(const NodoABB *remplazante, NodoABB *inicio);

public:
    ABB();

    static NodoABB *insertarRecursivo(NodoABB *nodo, int dato);

    void insertar(int dato);

    static bool existe(const NodoABB *nodo, int dato);

    NodoABB *getRoot() const;

    bool isEmpty() const;

    void eliminar(int dato) const;

    void eliminarOptimo(int dato) const;

    static NodoABB *eliminarRecursivo(NodoABB *N, int dato);

    static void inorder(const NodoABB *nodo);

    static void preorder(const NodoABB *nodo);

    static void postorder(const NodoABB *nodo);

    static void inorderInverso(const NodoABB *nodo);

    static void preorderInverso(const NodoABB *nodo);

    static void postorderInverso(const NodoABB *nodo);

    static NodoABB *minimo(NodoABB *aux);

    static NodoABB *maximo(NodoABB *aux);

    void inorderIterativo() const;


    void toString(int opcion) const;


    static NodoABB *obtener(int i, NodoABB *nodoAbb);
};
