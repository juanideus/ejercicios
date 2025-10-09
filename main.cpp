
#include "iostream"
#include "src/.Arboles/ABB.h"
#include "src/Funciones/Ejercicios.h"


using namespace Ejercicios;
using namespace std;



//**Ejecuta aqui tu codigo**
int main() {

    ABB *a=new ABB();
    a->insertar(55);
    a->insertar(35);
    a->insertar(80);
    a->insertar(25);
    a->insertar(45);
    a->insertar(65);
    a->insertar(85);
    a->insertar(15);
    a->insertar(40);



    a->toString(2);

    cout << endl;

    a->eliminar(35);
    a->toString(2);

}