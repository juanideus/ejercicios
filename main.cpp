/* // guía listas enlazadas
stack<int>* pila = new stack<int>();
    queue<int>* cola = new queue<int>();

    for (int i = 0; i < 3; i++) {
        pila->push(i);
        cola->push(i);
    }

    GuiaListasEnlazadas::invertirStack<int>(pila);
    GuiaListasEnlazadas::invertirQueue<int>(cola);

    delete pila;
    delete cola; */

    ListaSimple<int>* lista = new ListaSimple<int>();
lista->agregar(1);
lista->agregar(2);
lista->agregar(3);

GuiaListasEnlazadas::imprimirRecursivamente(lista->getCabecera());

delete lista->getCabecera();