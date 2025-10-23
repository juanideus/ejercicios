//
// Created by balta on 20-10-2025.
//

#ifndef EJERCICIOS_MPP_H
#define EJERCICIOS_MPP_H
#include "NodoMPP.h"


class MPP {
    private:
        NodoMPP** aRow; // lista de listas de filas
        NodoMPP** aCol; // lista de listas de columnas
        int filas;
        int columnas;
    public:
        MPP(int filas, int columnas);
        int getFilas();
        void setFilas(int filas);
        int getColumnas();
        void setColumnas(int columnas);
        bool insertar(int value, int fila, int columna);
};


#endif //EJERCICIOS_MPP_H