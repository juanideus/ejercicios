//
// Created by balta on 20-10-2025.
//

#ifndef EJERCICIOS_MPP_H
#define EJERCICIOS_MPP_H
#include "NodoMPP.h"


class MPP {
    private:
        NodoMPP** aRow; // lista de listas de filas
        NodoMPP** aCol; // lista de lisats de columnas
        int filas;
        int columnas;
};


#endif //EJERCICIOS_MPP_H