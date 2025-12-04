
#include "iostream"
#include "src/Arboles/AVL.h"
#include "src/Arboles/AVL.h"
#include "src/Arboles/AVL.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Funciones/guia2.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


class AVL;
using namespace Ejercicios;
using namespace std;
using namespace guia2;



//**Ejecuta aqui tu codigo**
int main()
{
   ListaPolinomios **lista = new ListaPolinomios *[4];
   ListaPolinomios *lista2 = new ListaPolinomios();
   ListaPolinomios *lista3 = new ListaPolinomios();
   ListaPolinomios *lista4 = new ListaPolinomios();
   lista2->insertar(-8, 9);
   lista2->insertar(12, 4);
   lista2->insertar(-7, 2);
   lista2->insertar(1, 0);

   lista3->insertar(3, 6);
   lista3->insertar(5, 5);
   lista3->insertar(-8, 4);
   lista3->insertar(1, 2);
   lista3->insertar(8, 1);


   lista4->insertar(-6, 10);
   lista4->insertar(24, 4);
   lista4->insertar(3, 2);
   lista4->insertar(-15, 0);
   lista[0] = lista2;
   lista[1] = lista3;
   lista[2] = lista4;
   lista[3]=nullptr;


   ejercicio1(lista,4);
// imprimirMayoresX(bst->getRoot(),50);




}