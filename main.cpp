
#include "iostream"
#include "src/.Arboles/ABB.h"
#include "src/Funciones/Ejercicios.h"


using namespace Ejercicios;
using namespace std;

//Ejemplos
 // Persona *p=new Persona("Juani",100);
    // Persona *p2=new Persona("baltazar",90);
    // Persona *p3=new Persona("benja",0);
    // Persona *p4=new Persona("gean",1);
    // ListaSimpleTemplate<Persona> *l=new ListaSimpleTemplate<Persona>();
    // cout<<l->tostring();
    // l->insertar(p);
    // l->insertar(p2);
    // l->insertar(p3);
    // l->insertar(p4);
    // cout<<l->tostring();



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