//
// Created by Usuario on 25-09-2025.
//

#include "NodoPoli.h"

NodoPoli::NodoPoli() {
    this->coef = 0;
    this->exp = 0;
    this->sig=nullptr;
}

NodoPoli::NodoPoli(int coef, int exp) {
    this->coef = coef;
    this->exp = exp;
    this->sig=nullptr;
}

void NodoPoli::setCoef(int coef) {
    this->coef = coef;
}


int NodoPoli::getCoef() {
    return this->coef;
}

void NodoPoli::setExp(int exp) {
    this->exp = exp;
}

int NodoPoli::getExp() {
    return this->exp;
}


void NodoPoli::setSig(NodoPoli *sig) {
    this->sig = sig;
}

NodoPoli * NodoPoli::getSig() {
    return this->sig;
}
