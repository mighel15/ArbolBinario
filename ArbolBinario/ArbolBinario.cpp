#include <iostream>

using namespace std;

class Nodo {
    int dato;
    Nodo* hijoDerecho;
    Nodo* hijoIzquierdo;
public:
    //Constructor - inicializar los atributos
    Nodo(int dato)
    {
        this->dato = dato;
        hijoDerecho = NULL;//por que no apuntamos a ningun nodo
        hijoIzquierdo = NULL;//por que no apuntamos a ningun nodo
    }
    //getter and setter
    int getDato()
    {
        return dato;
    }
    void setDato(int dato)
    {
        this->dato = dato;
    }
    Nodo* getHijoIzquierdo()
    {
        return this->hijoIzquierdo;
    }
    void setHijoIzquierdo(Nodo* enlace)
    {
        this->hijoIzquierdo = enlace;
    }
    Nodo* getHijoDerecho()
    {
        return this->hijoDerecho;
    }
    void setHijoDerecho(Nodo* enlace)
    {
        this->hijoDerecho = enlace;
    }

    void imprimir()
    {
        cout << "/-------------------\\" << endl;
        cout << "|Dato: " << dato << endl;
        cout << "|-------------------" << endl;
        cout << "|Izquierdo: " << hijoIzquierdo << "\tDerecho: " << hijoDerecho << endl;
        cout << "\\------------------/" << endl;
    }
};
class ArbolBinario {
    Nodo* raiz;
public:
    ArbolBinario() {
        raiz = NULL;
    }
    bool EstaVacia()
    {
        if (raiz == NULL)
            return true;
        else
            return false;
    }
    void Insertar(int dato) {
        //aqui vamos a implementar este codigo
    }

};

int main()
{

    /*Nodo nodo = Nodo(5);
    nodo.imprimir();
    Nodo* nodo2 = new Nodo(15);
    nodo2->imprimir();
    nodo.setHijoDerecho(nodo2);
    nodo.imprimir();*/
    //ArbolBinario arbol = ArbolBinario();
    int valorNodo = 7;
    int valorInsertar = 7;
    if (valorNodo < valorInsertar)
    {
        cout << "Izquierda";
    }
    else
    {
        cout << "Derecha";
    }
    return 0;
}
