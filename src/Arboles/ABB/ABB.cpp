#include "ABB.h"

#include <stack>

using namespace std;
#include <iostream>

NodoABB *ABB::buscarRemplazo(NodoABB *aux) {
    aux = aux->getRight();
    while (aux->getLeft() != nullptr) {
        aux = aux->getLeft();
    }
    return aux;
}

NodoABB * ABB::padreRemplazo(NodoABB *remplazante, NodoABB *inicio) {
    inicio = inicio->getRight();
    NodoABB *aux =inicio;
    while (inicio->getLeft() != remplazante && inicio->getLeft()!=nullptr) {
        aux = inicio;
        inicio=inicio->getLeft();
    }
    return aux;
}

ABB::ABB() {
    this->root = nullptr;
}

NodoABB *ABB::insertarRecursivo(NodoABB *nodo, int dato) {
    if (nodo == nullptr) {
        return new NodoABB(dato);
    }
    if (dato < nodo->getDato()) {
        nodo->setLeft(insertarRecursivo(nodo->getLeft(), dato));
    } else if (dato > nodo->getDato()) {
        nodo->setRight(insertarRecursivo(nodo->getRight(), dato));
    }
    return nodo;
}

void ABB::insertar(int dato) {
    this->root = insertarRecursivo(this->root, dato);
}

bool ABB::existe(NodoABB *nodo, int dato) {
    if (nodo == nullptr) {
        return false;
    }
    if (nodo->getDato() == dato) {
        return true;
    }

    if (dato < nodo->getDato()) {
        return existe(nodo->getLeft(), dato);
    }
    if (dato > nodo->getDato()) {
        return existe(nodo->getRight(), dato);
    }
}

NodoABB *ABB::getRoot() {
}

bool ABB::isEmpty() {
}

void ABB::eliminar(int dato) {
    if (!existe(this->root, dato)) {
        return;
    }

    NodoABB *NodoEliminar = this->root, *padre = nullptr;

    while (NodoEliminar != nullptr && NodoEliminar->getDato() != dato) {
        padre = NodoEliminar;
        if (NodoEliminar->getDato() < dato) {
            NodoEliminar = NodoEliminar->getRight();
        } else if (NodoEliminar->getDato() > dato) {
            NodoEliminar = NodoEliminar->getLeft();
        }
    }
    if (NodoEliminar == nullptr) {
        return; //No existe el dato
    }
    //si es una hoja 🌿

    if (NodoEliminar->getLeft() == nullptr && NodoEliminar->getRight() == nullptr) {
        if (padre->getLeft() == NodoEliminar) {
            padre->setLeft(nullptr);
        }
        if (padre->getRight() == NodoEliminar) {
            padre->setRight(nullptr);
        }
        delete NodoEliminar;
        return;
    }
    //Si solo tiene un hijo  👶
    if ((NodoEliminar->getLeft() != nullptr && NodoEliminar->getRight() == nullptr)
        || (NodoEliminar->getRight() != nullptr && NodoEliminar->getLeft() == nullptr)) {
        if (padre->getLeft() == NodoEliminar) {
            if (NodoEliminar->getRight() != nullptr) {
                padre->setLeft(NodoEliminar->getRight());
            }
            if (NodoEliminar->getLeft() != nullptr) {
                padre->setLeft(NodoEliminar->getLeft());
            }
        }
        if (padre->getRight() == NodoEliminar) {
            if (NodoEliminar->getLeft() != nullptr) {
                padre->setRight(NodoEliminar->getLeft());
            }
            if (NodoEliminar->getRight() != nullptr) {
                padre->setRight(NodoEliminar->getRight());
            }
        }
        delete NodoEliminar;
        return;
    }
    if (NodoEliminar->getLeft()!= nullptr && NodoEliminar->getRight() != nullptr) {
        NodoABB* remplazante=buscarRemplazo(NodoEliminar);

        NodoABB* subArbolizq=NodoEliminar->getLeft();

        NodoABB* subArbolDer=NodoEliminar->getRight();

        NodoABB* padreRemplazante=padreRemplazo(remplazante,NodoEliminar);



        if (remplazante==NodoEliminar->getRight()) {

                remplazante->setLeft(subArbolizq);
                if (padre->getRight()==NodoEliminar) {
                    padre->setRight(remplazante);

                }
                if (padre->getLeft()==NodoEliminar) {
                    padre->setLeft(remplazante);

                    remplazante->setRight(remplazante->getRight());

                }
            return;
        }
        //DESCONECTAR AL REMPLAZANTE
        //PADRE APUNTE AL REMPLAZANTE
        padreRemplazante->setLeft(nullptr);
        if (padre->getRight()==NodoEliminar) {
            padre->setRight(remplazante);
            remplazante->setRight(subArbolDer);
            remplazante->setLeft(subArbolizq);
        }else {
            padre->setLeft(remplazante);
            remplazante->setRight(subArbolDer);
            remplazante->setLeft(subArbolizq);
        }
        delete NodoEliminar;

    }



}

void ABB::inorder(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    //IZQUIERDA
    inorder(nodo->getLeft());
    //RAIZ
    cout << nodo->getDato() << endl;
    //DERECHA
    inorder(nodo->getRight());
}

void ABB::preorder(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    cout << nodo->getDato() << endl;
    preorder(nodo->getLeft());
    preorder(nodo->getRight());
}

void ABB::postorder(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    postorder(nodo->getLeft());
    postorder(nodo->getRight());
    cout << nodo->getDato() << endl;
}

void ABB::inorderInverso(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    inorderInverso(nodo->getRight());
    inorderInverso(nodo->getLeft());
    cout << nodo->getDato() << endl;
}

void ABB::preorderInverso(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    preorderInverso(nodo->getRight());
    cout << nodo->getDato() << endl;
    preorderInverso(nodo->getLeft());
}

void ABB::postorderInverso(NodoABB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    cout << nodo->getDato() << endl;
    postorderInverso(nodo->getRight());
    postorderInverso(nodo->getLeft());
}

NodoABB *ABB::minimo(NodoABB *aux) {
    while (aux->getLeft() != nullptr) {
        aux = aux->getLeft();
    }
    return aux;
}

NodoABB *ABB::maximo(NodoABB *aux) {
    while (aux->getRight() != nullptr) {
        aux = aux->getRight();
    }
    return aux;
}

void ABB::inorderIterativo() {
    stack<NodoABB*> s;
    NodoABB* aux = root;
    while (true) {
        while (aux) {
            s.push(aux);
            //pre
            cout<<aux->getDato()<<endl;

            aux = aux->getRight();
        }
        if (s.empty()) {return; }
        aux = s.top();
        s.pop();
        // //in
        // cout<<aux->getDato()<<endl;
        aux = aux->getLeft();


    }
}


void ABB::toString(int opcion) {
    switch (opcion) {
        case 1:
            preorder(this->root);
            break;
        case 2:
            inorder(this->root);
            break;
        case 3:
            postorder(this->root);
            break;
        case 4:
            preorderInverso(this->root);
            break;
        case 5:
            inorderInverso(this->root);
            break;
        case 6:
            postorderInverso(this->root);
            break;
        default: break;
    }
}
