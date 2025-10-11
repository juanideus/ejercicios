
#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {

    ThreadedBST *bst=new ThreadedBST();
    bst->insertar(100);
    bst->insertar(200);
    bst->insertar(300);
   bst->insertar(40);
   bst->insertar(41);
   bst->insertar(30);
    bst->insertar(50);


}