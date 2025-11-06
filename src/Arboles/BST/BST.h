#pragma once
#ifndef EJERCICIOS_BST_H
#define EJERCICIOS_BST_H
#include "BSTnode.h"
#include "string"
using namespace std;

template <typename T>
class BST {
    private:
        BSTnode<T>* root;

    public:
        BST();
        ~BST();

        BSTnode<T>* getRoot();
        void setRoot(BSTnode<T>* newRoot);
        // methods
        bool isEmpty();
        void insert(T value);
        int grade();
        void deleteTree(BSTnode<T>* node);
        // iterativos
        void iterativePrintPreOrder();
        void iterativePrintInOrder();
        void iterativePrintPostOrder();
        // iterativos inversos
        void inverseIterativePrintPreOrder();
        void inverseIterativePrintInOrder();
        void inverseIterativePrintPostOrder();
};

#include "BST.tpp"
#endif
