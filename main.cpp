
#include <iostream>
#include <queue>
#include <stack>
#include "src/Listas/ListaNexoSimple.h"
#include "src/MPP/MPP.h"
#include "src/Arboles/BST/BST.h"
#include "src/Guias/GuiaArboles.h"
#include "src/Guias/GuiaListasEnlazadas.h"
using namespace std;

int main() {
    // guia arboles
    BST<int>* abb = new BST<int>();

    abb->insert(2);
    abb->insert(1);
    abb->insert(3);
    abb->insert(4);

    cout << GuiaArboles::contarHojas(abb->getRoot()) << endl;

    delete abb;
}