
#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {

    ThreadedBST *bst=new ThreadedBST();
    bst->insertar(50);
    bst->insertar(48);
    bst->insertar(53);
    bst->insertar(35);
    bst->insertar(51);
    bst->insertar(60);
    bst->insertar(52);
    cout<<bst->toStringInOrder();


}