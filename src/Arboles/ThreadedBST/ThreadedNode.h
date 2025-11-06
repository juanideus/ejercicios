#pragma once

template <typename T>
class ThreadedNode {
    private:
        T value;
        ThreadedNode* leftChild;
        ThreadedNode* rightChild;
        bool leftTread;
        bool rightTread;

    public:
        ThreadedNode();
        ThreadedNode(T value);

        T getValue();
        ThreadedNode* getLeftChild();
        ThreadedNode* getRightChild();
        bool isLeftTread();
        bool isRightTread();

        void setValue(T value);
        void setLeftChild(ThreadedNode* leftChild);
        void setRightChild(ThreadedNode* rightChild);
        void setLeftTread(bool isLeftTread);
        void setRightTread(bool isRightTread);
};
