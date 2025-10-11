
#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {

    ThreadedBST *bst=new ThreadedBST();
    bst->insertar(1);
    bst->insertar(2);
    bst->insertar(3);
    bst->insertar(4);
    bst->insertar(5);
    cout <<bst->toStringInOrder();

}