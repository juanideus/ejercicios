
#include "iostream"
#include "src/Arboles/AVL.h"
#include "src/Arboles/AVL.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


class AVL;
using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main()
{
    ThreadedBST*bst=new ThreadedBST();
    bst->insertar(10);
    bst->insertar(20);
    bst->insertar(15);
    bst->insertar(30);
    bst->insertar(29);
    bst->insertar(100);
    bst->insertar(0);
    bst->insertar(60);
   cout<< bst->buscar(100);
    // ← este causa el LR exótico
    // ← aquí ocurre el LR



}