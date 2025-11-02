#pragma once

template <typename T>
class BSTnode {
    private:
        T* value;
        BSTnode* left;
        BSTnode* right;

    public:
        BSTnode();
        BSTnode(T* value);

        T* getValue();
        BSTnode* getLeft();
        BSTnode* getRight();

        void setValue(T* value);
        void setLeft(BSTnode* left);
        void setRight(BSTnode* right);

        ~BSTnode();
};

