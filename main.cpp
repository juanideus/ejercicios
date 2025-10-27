
#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/MPP/MPP.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {

        MPP*M=new MPP(3,3);
        M->insertar(50,1,1);
        M->insertar(50,1,2);
    cout<<M->toString()<<endl;
    M->eliminar50();
    cout<<M->toString()<<endl;


















    // ThreadedBST *bst=new ThreadedBST();
    // bst->insertar(50);
    // bst->insertar(48);
    // bst->insertar(53);
    // bst->insertar(35);
    // bst->insertar(51);
    // bst->insertar(60);
    // bst->insertar(52);
    // bst->insertar(1);
    // cout<<bst->toStringInOrder()<<endl;
    // bst->imprimir();


}