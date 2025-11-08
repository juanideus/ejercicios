
#include "ThreadedBST.h"

#include <iostream>
#include <sstream>

NodoEn * ThreadedBST::leftMost(NodoEn *aux) {
    while (!aux->getLeftThread()) {
        aux=aux->getLeftChild();
    }
    return aux;

}

ThreadedBST::ThreadedBST() {
    NodoEn* encabezado = new NodoEn();
    encabezado->setLeftChild(encabezado);

    encabezado->setRightChild(encabezado);
    encabezado->setRightThread(false);
    this->root=encabezado;

}

ThreadedBST::~ThreadedBST() {
}
NodoEn* ThreadedBST::sucesorInorden(NodoEn* nodo) {
    if (nodo->getRightThread()) {
        // El puntero derecho es hebra → sucesor ya está apuntado
        return nodo->getRightChild();
    } else {
        // Bajamos al subárbol derecho y luego siempre a la izquierda
        NodoEn* temp = nodo->getRightChild();
        while (!temp->getLeftThread()) { // Mientras haya hijo real izquierdo
            temp = temp->getLeftChild();
        }
        return temp;
    }
}
NodoEn* ThreadedBST::predecesorInorden(NodoEn* nodo) {
    if (nodo->getLeftThread()) {
        //
        return nodo->getLeftChild();
    } else {

        NodoEn* temp = nodo->getLeftChild();
        while (!temp->getRightThread()) {
            temp = temp->getRightChild();
        }
        return temp;
    }
}


void ThreadedBST::insertar(int dato) {
    NodoEn*aux=this->root;
    NodoEn *nuevoNodo = new NodoEn(dato);
    if (aux->getLeftThread()) {
        nuevoNodo->setLeftChild(aux);
        nuevoNodo->setRightChild(aux);
        aux->setLeftThread(false);
        aux->setLeftChild(nuevoNodo);
        return;
    }
    aux=aux->getLeftChild();

    while (true) {

        if (dato>aux->getDato() && !aux->getRightThread()) {
            aux=aux->getRightChild();
        }
        else if (dato<aux->getDato() && !aux->getLeftThread()) {
            aux=aux->getLeftChild();
        }else {
            break;
        }
        if (aux->getRightThread() && aux->getLeftThread())break;
    }

    if (aux->getDato() < dato) {
        nuevoNodo->setRightChild(sucesorInorden(aux));
        nuevoNodo->setLeftChild(aux);
        aux->setRightChild(nuevoNodo);
        aux->setRightThread(false);
    }
    if (aux->getDato() > dato) {
        nuevoNodo->setRightChild(aux);
        nuevoNodo->setLeftChild(predecesorInorden(aux));
        aux->setLeftChild(nuevoNodo);
        aux->setLeftThread(false);
    }

}

void ThreadedBST::eliminar(int dato) {
}



string ThreadedBST::toStringInOrder() {
    stringstream ss;
    NodoEn*aux = this->root;
   if (aux->getLeftThread()) {
       return "arbol Vacio";
   }
    aux=leftMost(aux->getLeftChild());
    while (aux!=this->root) {
        ss<<aux->getDato()<<" ";
        if (aux->getDato()==root->getLeftChild()->getDato()) {
            aux=leftMost(aux->getRightChild());

        }else {
            aux=aux->getRightChild();
        }

    }
    return ss.str();


}


