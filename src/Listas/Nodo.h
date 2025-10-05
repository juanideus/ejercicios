//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_NODO_H
#define EJERCICIOS_NODO_H


class Nodo {
    int dato;
    Nodo* proximo;
    public:
    Nodo();
    Nodo(int dato);
    int getDato();
    void setDato(int dato);
    Nodo* getProximo();
    void setProximo(Nodo* proximo);

};


#endif //EJERCICIOS_NODO_H