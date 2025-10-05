//
// Created by Usuario on 25-09-2025.
//

#ifndef EJERCICIOS_NODOPOLI_H
#define EJERCICIOS_NODOPOLI_H


class NodoPoli {
    int coef;
    int exp;
    NodoPoli* sig;
    public:
    NodoPoli();
    NodoPoli(int coef, int exp);


    void setCoef(int coef);
    int getCoef();
    void setExp(int exp);
    int getExp();
    void setSig(NodoPoli* sig);
    NodoPoli* getSig();

};


#endif //EJERCICIOS_NODOPOLI_H