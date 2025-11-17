
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
    AVL*avl=new AVL();
    avl->insertar(90);
    avl->insertar(45);
    avl->insertar(95);
    avl->insertar(20);
    avl->insertar(70);
    avl->insertar(60);
    avl->insertar(80);
    avl->insertar(65);
    // ← este causa el LR exótico
    // ← aquí ocurre el LR


   avl->inorden(avl->root);
}