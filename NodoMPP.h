#pragma once


class NodoMPP {
   int valor;
   NodoMPP* up;
   NodoMPP* left;
   int row;
   int col;
   public:
   NodoMPP();
   NodoMPP(int valor);
   NodoMPP(int row, int col, int valor);
   ~NodoMPP();
   int getValor();
   void setValor(int valor);
   NodoMPP* getUp();
   NodoMPP* getLeft();
   void setUp(NodoMPP* up);
   void setLeft(NodoMPP* left);
   int getRow();
   int getCol();
   void setRow(int row);
   void setCol(int col);


};



