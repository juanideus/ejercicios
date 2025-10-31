#pragma once

template <typename T>
class NodoABB {
    private:
        T* value;
        NodoABB* left;
        NodoABB* right;

    public:
        NodoABB();
        NodoABB(T* value);

        T* getValue();
        NodoABB* getLeft();
        NodoABB* getRight();

        void setValue(T* value);
        void setLeft(NodoABB* left);
        void setRight(NodoABB* right);

        ~NodoABB();
};

