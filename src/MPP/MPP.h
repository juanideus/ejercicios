#pragma once
#include "NodoMPP.h"
using namespace std;


class MPP {
    private:
    NodoMPP**AROW;
    NodoMPP**ACOL;
    int alto;
    int largo;
    public:
    MPP();
    MPP(int alto, int largo);

    int GetAlto();

    int GetLargo();

    void insertar(int dato, int fila, int col);

    string toString();



    void eliminar(int fila, int col);

    void eliminar(int dato);

    NodoMPP *buscar(int fila, int col);

    bool mover(int Nuevafila,int Nuevacol, int dato);

    void mostrarMatriz();

    int sumarDiagonal();

    string Posicion100();

    int sumarEsquinas();

    void eliminar50();

    NodoMPP**getRow();

};


