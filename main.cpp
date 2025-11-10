
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
    avl->insertar(100);
    avl->insertar(90);
    avl->insertar(120);
    avl->insertar(93);
    avl->insertar(92);
    avl->insertar(95);
    avl->insertar(110);
    avl->insertar(140);



    avl->inorden(avl->root);
}
