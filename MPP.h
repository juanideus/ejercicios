#pragma once
#include "NodoMPP.h"


class MPP {
    NodoMPP**AROW;
    NodoMPP** ACOL;
    int alto;
    int largo;
    public:
    MPP();
    MPP(int alto, int largo);

    int GetAlto();

    int GetLargo();

    void insertar(int dato, int fila, int col);


    void insertar(int fila, int col);

    void eliminar(int fila, int col);

    void eliminar(int dato);

    NodoMPP *buscar(int fila, int col);

    bool mover(int Nuevafila,int Nuevacol, int dato);

    void mostrarMatriz();



};


