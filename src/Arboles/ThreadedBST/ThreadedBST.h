#pragma once

#include "ThreadedNode.h"

template <typename T>
class ThreadedBST {
    private:
        ThreadedNode<T>* dummyRoot;
    public:
        ThreadedBST();
        ~ThreadedBST();

        ThreadedNode<T>* getDummyRoot();

        bool isEmpty();
        void insert(T value);
        ThreadedNode<T>* getCurrentFather(ThreadedNode<T>* currentNode);
};

