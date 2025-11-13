
#include "iostream"
#include "src/Arboles/AVL.h"
#include "src/Arboles/AVL.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


class AVL;
using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main()
{
    AVL*bst=new AVL();
    bst->insertar(100);
    bst->insertar(90);
    bst->insertar(95);
    bst->insertar(80);
    bst->insertar(85);
    bst->inorden(bst->root);
}