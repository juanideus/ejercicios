
#include "iostream"
#include "src/Arboles/AVL.h"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main()
{
    AVL*avl=new AVL();
    avl->insertar(50);
    avl->insertar(30);
    avl->insertar(20);
    avl->inorden(avl->root);
}
