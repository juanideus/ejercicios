#pragma once


class NodoEn {
    int dato;
    bool leftThread;
    NodoEn*leftChild;
    NodoEn* rightChild;
    bool rightThread;
    public:
    NodoEn();
    NodoEn(int dato);
    void setDato(int dato);
    int getDato();
    void setLeftThread(bool leftThread);
    bool getLeftThread();
    void setRightThread(bool rightThread);
    bool getRightThread();
    NodoEn* getLeftChild();
    NodoEn* getRightChild();
    void setLeftChild(NodoEn* leftChild);
    void setRightChild(NodoEn* rightChild);

};
