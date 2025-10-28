
#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/MPP/MPP.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {




    ABB* bst=new ABB();
    bst->insertar(50);
    bst->insertar(48);
    bst->insertar(53);
    bst->insertar(35);
    bst->insertar(51);
    bst->insertar(60);
    bst->insertar(52);
    bst->insertar(1);
    bst->toString(2);
    cout<<endl;
    bst->inorderIterativo();
    // cout<<bst->toStringInOrder()<<endl;
    // bst->imprimir();


}