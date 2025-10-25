//
// Created by balta on 20-10-2025.
//

#ifndef EJERCICIOS_NODOMPP_H
#define EJERCICIOS_NODOMPP_H
#include <iostream>
using namespace std;

class NodoMPP {
    private:
        NodoMPP* left;
        NodoMPP* up;
        int value;
        int row;
        int col;
    public:
        NodoMPP();
        NodoMPP(int value, int row, int col);
        int getValue();
        void setValue(int value);
        int getRow();
        void setRow(int row);
        int getCol();
        void setCol(int col);
        NodoMPP* getLeft();
        void setLeft(NodoMPP* left);
        NodoMPP* getUp();
        void setUp(NodoMPP* up);
        string toString();
};


#endif //EJERCICIOS_NODOMPP_H