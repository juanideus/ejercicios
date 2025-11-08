
#include <algorithm>

#include "iostream"
#include "src/Arboles/ABB/ABB.h"
#include "src/Arboles/ENHEBRADO/ThreadedBST.h"
#include "src/Funciones/Ejercicios.h"
#include "src/Heaps/MaxHeap.h"
#include "src/MPP/MPP.h"


using namespace Ejercicios;
using namespace std;

void ejercicio3(MPP*M,int n) {
    int counter=0,countersec=0;
    for (int i=1;i<=n;i++) {
        NodoMPP*aux=M->getRow()[i]->getLeft();
        while (aux->getCol()!=0) {
            if (aux->getCol()==i) {
                counter++;
            }
            if (aux->getCol()==n-i+1) {
                countersec++;
            }
            aux=aux->getLeft();

        }
    }
    cout << counter;
    cout << countersec;
}

//**Ejecuta aqui tu codigo**
int main() {
    int *a=new int[11];
    a[0]=0;
    a[1]=47;
    a[2]=82;
    a[3]=13;
    a[4]=42;
    a[5]=77;
    a[6]=6;
    a[7]=71;
    a[8]=30;
    a[9]=50;
    a[10]=3;


   MaxHeap*h=new MaxHeap();
    h->insert(a);



}