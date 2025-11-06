#pragma once

template <typename T>
class ThreadedNode {
    private:
        T value;
        ThreadedNode* leftChild;
        ThreadedNode* rightChild;
        bool leftThread;
        bool rightThread;

    public:
        ThreadedNode();
        ThreadedNode(T value);

        T getValue();
        ThreadedNode* getLeftChild();
        ThreadedNode* getRightChild();
        bool isLeftThread();
        bool isRightThread();

        void setValue(T value);
        void setLeftChild(ThreadedNode* leftChild);
        void setRightChild(ThreadedNode* rightChild);
        void setLeftThread(bool isLeftTread);
        void setRightThread(bool isRightTread);
};
