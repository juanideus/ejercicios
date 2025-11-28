
#include "iostream"
#include "src/Arboles/AVL.h"
#include "src/Arboles/AVL.h"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Funciones/guia2.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


class AVL;
using namespace Ejercicios;
using namespace std;
using namespace guia2;



//**Ejecuta aqui tu codigo**
int main()
{
    ABB*bst=new ABB();
    bst->insertar(50);
    bst->insertar(20);
    bst->insertar(75);
    bst->insertar(10);
    bst->insertar(30);
    bst->insertar(60);
    bst->insertar(90);
    bst->insertar(35);
    bst->insertar(80);

    bst->eliminarOptimo(75);
    NodoABB *nodo=bst->getRoot();





imprimirMayoresX(bst->getRoot(),50);




}